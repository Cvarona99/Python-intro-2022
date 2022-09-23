from cs50 import get_float

def main():
    # Ask how many dollars the customer is owed
    int dollars = get_dollars()

    # Calculate the number of quarters
    int quarters = calculate_quarters(dollars)
    dollars = dollars - (quarters * 25)

    # Calculate the number of dimes
    int dimes = calculate_dimes(dollars)
    dollars = dollars - (dimes * 10)

    # Calculate the number of nickels
    int nickels = calculate_nickels(dollars)
    dollars = dollars - (nickels * 5)

    # Calculate the number of pennies
    int pennies = calculate_pennies(dollars)
    dollars = dollars - (pennies * 1)

    # Sum coins
    int coins = quarters + dimes + nickels + pennies

def get_cents():
    while True:
        dollars = get_float("Change?: ")
        if dollars > 0.00:
            break
        else:
            continue
