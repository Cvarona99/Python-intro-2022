def main():
    size  = get_height()
    for i in range(0, size):
         


def get_height():
    while True:
        try:
            height = int(input("Height: "))
            if height < 1 or height > 8:
                continue
            else:
                break
        except ValueError:
            print("Not an integer!")
    return height

main()