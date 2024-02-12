people = {
    "Bethel": "+234-854094-494",
    "David": "+1-949-468-2750",
    "Kulaha": "+234-495-49384",
    "Jrunz": "+234-7645-7645"
}

# Search the people book
name = input("Name: ").capitalize()
if name in people:
    number = people[name]
    print(f"Number: {number}")