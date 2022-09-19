def schoolAgeCalc(age, name):
    if age < 5:
        print("Enjoy your time!", name, "is only", age)
    elif age == 5:
        print("Enjoy kindergarten", name)
    else:
        print("They grow up so fast!")

schoolAgeCalc(10, "Thomas")