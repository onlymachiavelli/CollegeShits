import random as r

def shuffle_deck():
    """
    Shuffle the deck of cards.
    """
    cards = []
    for i in range(1, 11):
        for shape in ['circle', 'square', 'diamond', 'heart']:
            cards.append({'number': i, 'shape': shape})
    r.shuffle(cards)
    return cards

def play_game():
    """
    Play the game.
    """
    # Initialize game variables
    deck = shuffle_deck()
    user_hand = []
    computer_hand = []
    table = []
    user_similar_cards = []
    computer_similar_cards = []

    # Serve cards to the table
    for _ in range(4):
        table.append(deck.pop())

    # Serve cards to the players
    for _ in range(3):
        user_hand.append(deck.pop())
        computer_hand.append(deck.pop())

    while len(deck) > 0 or len(user_hand) > 0 or len(computer_hand) > 0 or len(table) > 0:
        # Display table and player hands
        print("Table:", table)
        print("Your hand:", user_hand)
        print("Computer's hand:", computer_hand)

        # Computer's turn
        print("Computer plays")
        index = r.randint(0, len(computer_hand) - 1)
        played_card = computer_hand.pop(index)
        table.append(played_card)

        # Check for similar cards
        similar_cards = [card for card in table if card['number'] == played_card['number']]
        if len(similar_cards) > 1:
            for card in similar_cards:
                table.remove(card)
                computer_similar_cards.append(card)

        # Show table after computer's turn
        print("Table after computer's turn:", table)

        # Player's turn
        print("Your turn")
        index = int(input("Choose the index of the card to play: "))
        played_card = user_hand.pop(index)
        table.append(played_card)

        # Check for similar cards
        similar_cards = [card for card in table if card['number'] == played_card['number']]
        if len(similar_cards) > 1:
            for card in similar_cards:
                table.remove(card)
                user_similar_cards.append(card)

    # Determine the winner
    if len(computer_similar_cards) == len(user_similar_cards):
        winner = "Draw"
    elif len(computer_similar_cards) > len(user_similar_cards):
        winner = "Computer"
    else:
        winner = "User"
    print("Winner is", winner)

def minmax(cards):
    """
    Implement the minmax algorithm.
    """
    if len(cards) == 0:
        return 0
    if len(cards) == 1:
        return cards[0]['number']
    if len(cards) == 2:
        return abs(cards[0]['number'] - cards[1]['number'])
    return abs(cards[0]['number'] - cards[1]['number']) + minmax(cards[2:])

# Test minmax algorithm
print(minmax([{'number': 1}, {'number': 2}, {'number': 3}, {'number': 4}]))
print(minmax([{'number': 1}, {'number': 2}, {'number': 3}]))
print(minmax([{'number': 1}, {'number': 2}]))
print(minmax([{'number': 1}]))

# Play the game
play_game()
