# بسم الله الرحمن الرحيم



from Set import Set

mahmoud = Set()
mahmoud.add("CSCI-112")
mahmoud.add("MATH-121")
mahmoud.add("HIST-340")
mahmoud.add("ECON-101")

Eslam = Set()
Eslam.add("POL-101")
Eslam.add("ANTH-230")
Eslam.add("CSCI-112")
Eslam.add("ECON-101")

# Determine if two students are taking:


common_courses = Set()
# print(type(mahmoud))
# print(type(Eslam))
# print(mahmoud.equals(Eslam))
# print(mahmoud == Eslam)
# print(mahmoud.is_subset_of(Eslam))
# print(mahmoud.intersect(Eslam))

for course in mahmoud.intersect(Eslam):
    print(course)



# ## 1 - all of the same courses
# if mahmoud == Eslam:
#     print("Both students are taking same courses")

# ## 2 - any of the same courses
# elif mahmoud.intersection(Eslam) != None:
#     common_courses = mahmoud.intersection(Eslam)
#     print("There are common courses between them")

# # for course in common_courses:
# #     print(course)

# ## How can we determine which courses "Eslam" is taking that "mahmoud" is not taking
# eslam_unique_courses = Eslam - mahmoud
# print("Eslam Unique Courses are:")
# for course in eslam_unique_courses:
#     print(course)









