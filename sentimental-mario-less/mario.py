def main():
    for i in range(height):
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