List = [0,0, 1, 1, 1, 2, 2, 3, 3, 4]
new_list=[]
remove_duplicates=set()
for i in List:
    if i not in remove_duplicates:
        new_list.append(i)
        remove_duplicates.add(i)

print(new_list)