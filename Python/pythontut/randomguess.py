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

    print ("You have guessed correctly!")


def computerGuess(x):
    low = 1
    high = x
    feedback = ''
    while feedback != 'c':
        guess = random.randint(low, high)
        feedback = input(f"Is {guess} too high, too low, or correct??").lower()
        if feedback == 'h':
            high = guess - 1
        elif feedback == 'l':
            low = guess + 1
    print("The computer guessed correctly!")


guess(10)