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


def showCards (title : str, deck)  :
    print (f"the {title} cards are : ", end = "\n")
    i = 0 
    for card in deck : 
        print("index :(" , i , ") => " , card , end=" \n") 
        i+=1 

def servePlayer (deck, playerHand) :
    for i in range(3):
        playerHand.append(deck.pop(0))
def serveTable(deck , table) : 
    for i in range(4):
        table.append(deck.pop(0))



#play function 
def play(hand, table, index, score):
    if index < 0 or index >= len(hand):
        print("Invalid index")
        return 0 
    
    # Check if there's a card in the table with the same rank
    for card in table:
        if card.rank == hand[index].rank:
            table.remove(card)
            hand.pop(index)
            score += 1
            return score
    
    print("No matching card found")
    
    # Add to the table
    table.append(hand[index])
    hand.pop(index)
    return score 



def game () :
    deck = shuffle_cards()
    computer = []
    compScore = 0
    myScore = 0 
    me = []
    table = []
    
    while len(deck) > 0 : 
        if len(computer) == 0 and len(me) == 0: 
            servePlayer(deck, computer)
            servePlayer(deck, me)
            serveTable(deck, table)
        print("Computer's turn")
        r = random.randint(0, len(computer)-1)
        if (r < 0 ) :
            r = 0 
        compScore = play(computer, table, r, compScore)
        print("Computer played")
        showCards("table", table)
        print("\n")
        print("My turn")
        showCards("My ", me)
        r = input("Enter the number of the card you want to play ")
        myScore = play(me, table, int(r) , myScore)
        print("My turn")
        showCards("table", table)
        print("\n")
    print("Game Over")

    print(f"The score is : \n Computer : {compScore} \n Me : {myScore}")
   
    
if __name__ == "__main__":
    game()