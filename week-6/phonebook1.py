import csv

with open("phonebook1.csv", "a") as file: # Append mode

    name = input("Name: ")
    number = input("Number: ")

    # writer = csv.writer(file)

    writer = csv.DictWriter(file, fieldnames=["name", "number"])

    # Use the writer to write a row
    
    # writer.writerow([name, number]) # when using the writer method

    writer.writerow({"name": name, "number": number}) # when using the DictWriter method
