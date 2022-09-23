from cs50 import get_string

def main():
    text = get_string("Text: ")
    letters = count_letters(text)
    sentences = count_sentences(text)
    words = count_words(text)


    L = round(letters / words) * 100
    S = round(sentences / words) * 100

    index = round(0.0588 * L - 0.296 * S - 15.8)

    if index > 16:
        print("Grade 16+")
    elif index < 1:
        print("Before Grade 1")
    else:
        print("Grade ", + int(round(index)))

def count_letters(text):
    counter = 0
    length = len(text)
    for i in range(length):
        if text.isalpha():
            counter += 1
        i += 1
    return counter
    print("letters: ", +letters)


def count_words(text):
    counter = 1
    length = len(text)
    for i in range(0, length):
        if text[i] == " ":
            counter += 1
        i += 1
    return counter

def count_sentences(text):
    counter = 0
    length = len(text)
    for i in range(0, length):
        if text[i] == "." or text[i] == "!" or text[i] == "?":
            counter += 1
        i += 1
    return counter

main()