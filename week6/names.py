import sys

names = ["Bill", "Charlie", "Fred"]

name = input("Name: ")

if "Fred" in names:
    print ("Found")
    sys.exit(0)

print("Not found")
sys.exit(1)