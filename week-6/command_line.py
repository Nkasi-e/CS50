# Using the command line in python

from sys import argv

if len(argv) == 2:
    print(f"Hello, {argv[1]}")
else:
    print("hello, world")

# Looping over the command line
for arg in argv:
    print(f"{arg}")


# Printing without the program name with slice
for args in argv[1:]:
    print(args)