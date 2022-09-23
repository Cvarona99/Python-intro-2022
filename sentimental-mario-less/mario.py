def main():
    size  = get_height()
    for i in range(size):
        for j in range(i):
            print("#")
        print("\n")

def get_height():
    while True:
        try:
            height = int(input("Heigcocksht: "))
            if height < 1 or height > 8:
                continue
            else:
                break
        except ValueError:
            print("Not an integer!")
    return height

main()