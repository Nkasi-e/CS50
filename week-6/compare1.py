# Compare two strings

# strings are immutable, you can only return the copy of a string and not change in entirely in memory
s = input("s: ")
t = input("t: ")

x = s.capitalize()
print(x)
print(s)

if s == t:
    print("Same")
else:
    print("Different")