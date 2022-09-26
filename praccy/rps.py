import random

def play():
    user = input("R for rock, P for paper, S for scissors")
    comp = random.choice(['r', 'p', 's'])

    if user == computer:
        return "tie"

    if is_win(user, comp):
        return "You win!"

    
