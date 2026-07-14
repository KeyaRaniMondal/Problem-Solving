dictionary={}

List = [1, 2, 2, 3, 3, 3, 4, 4, 4, 4]
for i in List:
    if i in dictionary:
        dictionary[i]+=1
    else:
        dictionary[i]=1
print(dictionary)