# A pseudo code that reads file from a csv

import csv

with open("favorites.csv", "r") as file:
    reader = csv.DictReader(file)
    counts = {} 
    for row in reader:
        favorite = row["language"]
        if favorite in counts:
            counts[favorite] += 1
        else:
            counts[favorite] = 1

# sorting by value
# def get_value(language):
#     return counts[language]

# A lambda is an annonymous function that in python that can be used if you don't want to create a function... e.g on how to use it: lambda fn name: return value... lambda language: counts[language]

for favorite in sorted(counts, key=lambda language: counts[language], reverse=True):
    print(f"{favorite}: {counts[favorite]}")


# taking input from a user
favorite = input("Favorite: ")
if favorite in counts:
    print(f"{favorite}: {counts[favorite]}")