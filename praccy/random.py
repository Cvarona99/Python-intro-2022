import random

def guess(x):
    randomNum = random.randint(1, x)
    guess = 0
    while guess != randomNum:
        guess = input(f"Guess a number between 1 and {x}: ")
        print 