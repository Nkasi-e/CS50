# how c depicts it

before = input("Before: ")
print("After: ", end='')
for c in before:
    print(c.upper(), end='')
print()

# Python better way
bef = input("Before: ")
after = bef.upper()
print("After: %s" % after)