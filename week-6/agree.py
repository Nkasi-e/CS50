c = input("Do you agree? ").lower()

# c = c.lower()

if c == "Y" or c == "y":
    print("Agreed")
elif c == "N" or c == "n":
    print("Not agreed")

# Another approach to implement the code above
    
if c in ["yes", "y"]:
    print("Agrred.")
elif c in ["no", "n"]:
    print("Not agreed.")