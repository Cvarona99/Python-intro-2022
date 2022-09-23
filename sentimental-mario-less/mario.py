while True:
    height = int(input("Height: "))
    if height < 1 or height > 8:
        continue
    else:
        break
for i in range(height):
    for j in range(i):
        print("#")
