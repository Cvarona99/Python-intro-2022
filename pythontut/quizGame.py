

def main():
    print("Welcome to computer quiz!")


    while True:
        playing = input("Do you want to play? ")
        if playing == "yes":
            print("I took the woooooook to Poland")
            break
        elif playing == "no":
            print("quitting")
            return 1
        else:
            print("type 'yes' or 'no'")
    answer = input("what does CPU stand for? ")
    if answer.tolower == "Central Processing unit":




main()