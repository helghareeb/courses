# بسم الله الرحمن الرحيم

from myarray import Array2D

gradeFile = open('input.txt', 'r')

numExams = int(gradeFile.readline())
print(numExams)

numStudents = int(gradeFile.readline())
print(numStudents)

examGrades = Array2D(numStudents, numExams)

i = 0
for student in gradeFile:
    grades = student.split()
    print(grades)
    print(i)
    for j in range(numExams):
        examGrades[i,j] = int(grades[j])
    i += 1

gradeFile.close()

print(examGrades[2,3])

