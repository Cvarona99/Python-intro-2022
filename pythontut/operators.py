weight = int(input("Weight: "))
unit = input("(K)g or (L)b: ")

if unit.lower == "L":
    converted = weight * 0.45
    print ("Weight in Kg: " + str(converted))
elif unit.lower == "K":
    converted = weight / 0.45
    print("Weight in Lbs: " + str(converted))
else:
    print("error, invalid input")
