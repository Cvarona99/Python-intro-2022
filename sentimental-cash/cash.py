from cs50 import get_float

def main():
    # Ask how many dollars the customer is owed
    dollars = get_dollars()

    # Calculate the number of quarters
    quarters = calculate_quarters(dollars)
    dollars = dollars - (quarters * 25)

    # Calculate the number of dimes
    dimes = calculate_dimes(dollars)
    dollars = dollars - (dimes * 10)

    # Calculate the number of nickels
    nickels = calculate_nickels(dollars)
    dollars = dollars - (nickels * 5)

    # Calculate the number of pennies
    pennies = calculate_pennies(dollars)
    dollars = dollars - (pennies * 1)

    # Sum coins
    coins = quarters + dimes + nickels + pennies

def get_dollars():
    while True:
        dollars = get_float("Change?: ")
        if dollars > 0.00:
            break
        else:
            continue
    return dollars

def calculate_quarters(dollars):
    while dollars >= 0.25:
        quarters + 1
        dollars -= 0.25
    return quarters

def calculate_dimes(dollars):
    while dollars >= 0.10:
        dimes + 1
        dollars -= 0.10
    return dimes

def calculate_nickels(dollars):
    while dollars >= 0.05:
        nickels + 1
        dollars -= 0.05
    return nickels