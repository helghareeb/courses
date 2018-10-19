# # بسم الله الرحمن الرحيم

# # list is most similar to arrays

# # x = 5
# # alist = [1,2,3,4,5]
# # print(alist[0])

adict = {
    3001:'Ahmed Ashraf', 
    3002: 'Eslam',
    3003: 'Ammar'
}

def print_dict_contents(adict):
    if len(adict) > 0:
        for std_id in adict:
            print('Student ID: {} and Student Name: {}'.format(std_id, adict[std_id]))
        # print('='*60)
    else:
        print('Empty Dictionary')

print(adict.popitem())

# for k,v in adict.items():
#     print('Key: {} and Value: {}'.format(k,v))
# print_dict_contents(adict)
# print('='*60)
# print(adict.pop(3001))
# print('='*60)
# print_dict_contents(adict)

# try:
#     print(adict[15])
# except:
#     print('There is no a such key')

# print_dict_contents(adict)

# adict.clear()

# print_dict_contents(adict)

# # print(adict[3002])
# # adict[3005] = 'Mario'
# # print(adict[3005])

# adict[3006] = 'Saeed'
# print(adict[3006])
# del(adict[3006])
# # print(adict[3006])

# # x = len(adict)
# # print(x)

# print('Dictionary adict contains {} elements.'.format(len(adict)))










