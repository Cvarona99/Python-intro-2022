def main():
    size  = get_height()
    for i in range(size):
        for j in range(i):
            print("#")
        print(" ")

def get_height():
    while True:
        height = int(input("Height: "))
        if height < 1 or height > 8:
            continue
        else:
            break
    return height

main()