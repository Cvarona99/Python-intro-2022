import random
from words import words
import string

def getvalidWord(words):
    word = random.choice(words)
    while '-' in word or ' ' in word:
        word = random.choice(words)

    return word

def hangman():
    word = getvalidWord(words)
    wordLetters = set(word)
    alphabet = set(string.ascii_uppercase)
    usedLetters = set()
    while len(wordLetters) > 0:
        print('You have used these letters: ', ' '.join(usedLetters))

        wordList = [letter if letter in usedLetters else '-' for letter in word]
        print("Current word: "," ".join(wordList))

        userletter = input("Guess a letter: ").upper()
        if userletter in alphabet - usedLetters:
            usedLetters.add(userletter)
            if userletter in wordLetters:
                wordLetters.remove(userletter)
        elif userletter in usedLetters:
            print("Character already used")
        else:
            print("invalid character")



hangman()