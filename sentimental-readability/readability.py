from cs50 import get_string

def main():
    text = get_string("Text: ")
    letters = count_letters(text)
    sentences = count_sentences(text)
    words = count_words(texts)

    L = letters / words * 100
    S = sentences / words * 100

    index = round(0.0588 * L - 0.296 * S - 15.8)

    if (index > 16):
        print("Grade 16+)
    else if (index < 1):
        
