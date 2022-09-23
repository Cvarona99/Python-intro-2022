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

    # Calculate the number of dimes
    int dimes = calculate_dimes(dollars)
    dollars = dollars - (dimes * 10)

    # Calculate the number of dimes
    int dimes = calculate_dimes(dollars)
    dollars = dollars - (dimes * 10)