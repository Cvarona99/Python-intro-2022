from cs50 import get_float

def main():
    # Ask how many cents the customer is owed
    cents = get_cents()

    # Calculate the number of quarters
    quarters = calculate_quarters(cents)
    cents = cents - (quarters * 25)

    # Calculate the number of dimes
    dimes = calculate_dimes(cents)
    cents = cents - (dimes * 10)

    # Calculate the number of nickels
    nickels = calculate_nickels(cents)
    cents = cents - (nickels * 5)

    # Calculate the number of pennies
    pennies = calculate_pennies(cents)
    cents = cents - (pennies * 1)

    # Sum coins
    coins = quarters + dimes + nickels + pennies
    print(coins)

def get_cents():
    while True:
        dollars = get_float("Change?: ")
        if cents >= 0:
            break
        else:
            continue
    cents = round(dollars *100)
    return cents

def calculate_quarters(cents):
    quarters = 0
    while cents >= 25:
        quarters += 1
        cents -= 25
    return quarters

def calculate_dimes(cents):
    dimes = 0
    while cents >= 10:
        dimes += 1
        cents -= 10
    return dimes

def calculate_nickels(cents):
    nickels = 0
    while cents >= 5:
        nickels += 1
        cents -= 5
    return nickels

def calculate_pennies(cents):
    pennies = 0
    while cents >= 1:
        pennies += 1
        cents -= 1
    return pennies
main()