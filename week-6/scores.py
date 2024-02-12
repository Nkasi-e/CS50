scores = [38, 45, 68]

average = sum(scores) / len(scores)

print(f"Average: %.4f" % average)

# Getting from the user
score_points = []

for i in range(3):
    try:
        score = int(input("Score: "))
        score_points.append(score);
    except ValueError:
        print(f"Enter accepted type: 'int'") 

n_average = sum(score_points) / len(score_points)
print("Average score %f" % n_average)