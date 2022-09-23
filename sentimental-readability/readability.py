from cs50 import get_string

def main():
    text = get_string("Text: ")
    letters = count_letters(text)
    sentences = count_sentences(text)
    words = count_words(text)

    L = letters / words * 100
    S = sentences / words * 100

    index = round(0.0588 * L - 0.296 * S - 15.8)

    if index > 16:
        print("Grade 16+")
    elif index < 1:
        print("Before Grade 1")
    else:
        print("Grade ", + int(round(index)))

def count_words(text):
    counter = 1
    length = len(text)
    