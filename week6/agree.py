from cs50 import get_string


 # Prompt user for agreement
s = get_string("Do you agree? ")

# Check whether agreed
if s.lower in ["Y", "y", "yes", "YES"]:
    print("Agreed")
elif s.lower in ["n", "no"]:
    print("Not Agreed")

