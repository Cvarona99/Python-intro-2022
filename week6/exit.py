import sys

if len(sys.argv) != 2:
    print("Missing commandline argument!!")
    exit(1)



print(f"Hello, {sys.argv[1]}")
exit(0)