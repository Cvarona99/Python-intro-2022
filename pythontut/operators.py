weight = float(input("Weight: "))
unit = float(input("(K)g or (L)b: "))

if unit.lower == "L":
    converted = weight * 0.45
    print ("Weight in Kg: " + converted)
else:
    converted = weight / 0.45
    print("Weight in Lbs: " + converted)
