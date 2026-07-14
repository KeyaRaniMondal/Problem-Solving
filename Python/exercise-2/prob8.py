List = [1, 2, 3, 2, 4, 5, 4, 6]
new_list = []
my_set = set()

for i in range(len(List)-1):
    if List[i] in my_set:
        new_list.append(List[i])
    else:
        my_set.add(List[i])

print(new_list)
