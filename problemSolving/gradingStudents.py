//problem link : https://www.hackerrank.com/challenges/grading/problem

if grade >= 38:
    if grade % 5 == 3:
        grade += 2
    elif grade % 5 == 4:
        grade += 1
print(grade)