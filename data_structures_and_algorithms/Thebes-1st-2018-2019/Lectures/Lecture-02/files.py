try:
    f = open('output','r')
    for line in f:
        print(line)

except FileNotFoundError as ex:
    print('Exception Happened')

else:
    print('No problems happened')

finally:
    print('Finally block is running...')
    # f.close()



# for i in range(20):
#     f.write(str(i))
#     # f.write('\n')

#     f.write('\n')

