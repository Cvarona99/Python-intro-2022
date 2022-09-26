import random

def play():
    user = input("R for rock, P for paper, S for scissors\n")
    comp = random.choice(['r', 'p', 's'])

    if user.lower() == comp:
        return "tie"

    if is_win(user, comp):
        return "You win!"
    return "You lose!"

def is_win(player, opp):
    if (player == 'r' and opp == 's') or (player == 's' and opp == 'p')\
        or (player == 'p' and opp == 'r'):
        return True



print(play())