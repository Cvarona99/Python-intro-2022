counter = 0
for x in range(10):
    if x > 0:
        if x %2 == 0:
            counter += 1
            print(x)
print("We have ", counter, "even numbers!")