

def main():
    print("Welcome to computer quiz!")


    while True:
        playing = input("Do you want to play? ")
        if playing != "yes" or "no":
            print("type yes or no")
            continue
        elif playing == "no":
            break
            return 1
        else:
            print("I took the wooooooock to Poland")
            break






main()