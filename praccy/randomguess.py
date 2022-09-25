import random

def guess(x):
    randomNum = random.randint(1, x)
    guess = 0
    while guess != randomNum:
        guess = int(input(f"Guess a number between 1 and {x}: "))
        if guess < randomNum:
            print("Too low")
        elif guess > randomNum:
            print("Too high")

    print (" You have guessed correctly!")


guess(10)