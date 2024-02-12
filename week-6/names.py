import sys

# Search names
names = ["Bill", "Isaac", "Mike", "Liam", "Jrunz", "Bethel", "Fred", "John", "Charlie", "Ragnar", "Klaus", "Tommy"]

name = input("Name: ").capitalize()

# Using for loop
# for n in names: # Linear search
#     if name == n:
#         print("Found")
#         sys.exit(0)

# A more better way
if name in names:
    print("Found")
    sys.exit(0)

print("Not found")
sys.exit(1)

