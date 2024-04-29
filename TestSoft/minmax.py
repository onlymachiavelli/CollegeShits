import random

class Card:
    def __init__(self, rank, suit):
        self.rank = rank
        self.suit = suit

    def __str__(self):
        return f"{self.rank} of {self.suit}"

def shuffle_cards():
    ranks = ['A', '2', '3', '4', '5', '6', '7', 'Q', 'J', 'K']
    suits = ['Hearts', 'Diamonds', 'Clubs', 'Spades']
    deck = []

    for rank in ranks:
        for suit in suits:
            card = Card(rank, suit)
            deck.append(card)

    random.shuffle(deck)

    return deck


def showCards(title, deck):
    print(f"The {title} cards are: ", end="\n")
    for i, card in enumerate(deck):
        print(f"Index: ({i}) => {card}", end="\n")


def servePlayer(deck, playerHand):
    for _ in range(3):
        playerHand.append(deck.pop(0))


def serveTable(deck, table):
    for _ in range(4):
        table.append(deck.pop(0))


def play(hand, table, index, score):
    if index < 0 or index >= len(hand):
        print("Invalid index")
        return score

    for card in table:
        if card.rank == hand[index].rank:
            table.remove(card)
            hand.pop(index)
            score += 1
            return score

    print("No matching card found")
    table.append(hand[index])
    hand.pop(index)
    return score 

def minimax(hand, table, depth, is_maximizing, myScore, compScore):
    print(f"Depth: {depth}, {'User' if is_maximizing else 'Computer'}'s turn")
    
    if depth == 0 or len(hand) == 0:
        score = myScore - compScore if is_maximizing else compScore - myScore
        print(f"Terminal state reached. Score: {score}")
        return score

    if is_maximizing:  # User's turn
        max_score = float('-inf')
        for i in range(len(hand)):
            new_hand = hand[:i] + hand[i+1:]
            new_table = table + [hand[i]]
            score = minimax(new_hand, new_table, depth - 1, False, myScore, compScore)
            max_score = max(max_score, score)
            print(f"Maximizing score: {max_score}")
        return max_score
    else:  # Computer's turn
        min_score = float('inf')
        for i in range(len(hand)):
            new_hand = hand[:i] + hand[i+1:]
            new_table = table + [hand[i]]
            score = minimax(new_hand, new_table, depth - 1, True, myScore, compScore)
            min_score = min(min_score, score)
            print(f"Minimizing score: {min_score}")
        return min_score


def choose_best_move(hand, table, myScore, compScore):
    best_move = None
    best_score = float('-inf')
    for i in range(len(hand)):
        new_hand = hand[:i] + hand[i+1:]
        new_table = table + [hand[i]]
        score = minimax(new_hand, new_table, depth=3, is_maximizing=False, myScore=myScore, compScore=compScore)
        if score > best_score:
            best_score = score
            best_move = i
    return best_move

def game():
    deck = shuffle_cards()
    computer = []
    compScore = 0  
    myScore = 0   
    me = []
    table = []

    while len(deck) > 0: 
        if len(computer) == 0 and len(me) == 0: 
            servePlayer(deck, computer)
            servePlayer(deck, me)
            serveTable(deck, table)
        print("Computer's turn")
        if len(computer) > 0:
            r = choose_best_move(computer, table, myScore, compScore)
            compScore = play(computer, table, r, compScore)
        else:
            print("Computer has no cards to play.")
        
        print("Computer's turn")
        showCards("Table", table)
        print("\n")
        
        print("Your turn")
        showCards("Your hand", me)
        r = input("Enter the number of the card you want to play: ")
        myScore = play(me, table, int(r), myScore)
        
        print("Your turn")
        showCards("Table", table)
        print("\n")
    print("Game Over")
    print(f"The score is:\nComputer: {compScore}\nYou: {myScore}")


if __name__ == "__main__":
    game()  
