import csv
import sys


def main():

    # TODO: Check for command-line usage
    if len(sys.argv) != 3:
        print("Usage: python dna.py data.csv sequence.txt")


    # TODO: Read database file into a variable
    database = []
    filename = sys.argv[1]
    with open(filename, 'r') as file:
       reader = csv.DictReader(file)
       for row in reader:
        database.append(row)


    #! Read DNA sequence file into a variable
    csvfile = sys.argv[2]
    with open(csvfile, 'r') as file:
        dnaSequence = file.read()

    #! Find longest match of each STR in DNA sequence
    strepeat = list(database[0].keys())[1:]

    results = {}
    for subsequence in strepeat:
        results[subsequence] = longest_match(dnaSequence, subsequence)
    #! Check database for matching profiles
    for name in database:
        match = 0
        for subsequence in strepeat:
            if int(name[subsequence]) == results[subsequence]:
                match += 1
        # if subsequences match
        if match == len(strepeat):
            print(name["name"])
            return

    print("No match")


def longest_match(sequence, subsequence):
    """Returns length of longest run of subsequence in sequence."""

    # Initialize variables
    longest_run = 0
    subsequence_length = len(subsequence)
    sequence_length = len(sequence)

    # Check each character in sequence for most consecutive runs of subsequence
    for i in range(sequence_length):

        # Initialize count of consecutive runs
        count = 0

        # Check for a subsequence match in a "substring" (a subset of characters) within sequence
        # If a match, move substring to next potential match in sequence
        # Continue moving substring and checking for matches until out of consecutive matches
        while True:

            # Adjust substring start and end
            start = i + count * subsequence_length
            end = start + subsequence_length

            # If there is a match in the substring
            if sequence[start:end] == subsequence:
                count += 1

            # If there is no match in the substring
            else:
                break

        # Update most consecutive matches found
        longest_run = max(longest_run, count)

    # After checking for runs at each character in seqeuence, return longest run found
    return longest_run


main()
