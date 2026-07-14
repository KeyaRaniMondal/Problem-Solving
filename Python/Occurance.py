# count occurrences of each element in a list and return a dictionary with the counts
# print(count_occurrences([1,2,2,3,3,3,4,4,4]))



dictionary={}

my_list=[1,2,2,3,3,3,4,4,4]
for ele in my_list:
    count=0
    if my_list[ele]==my_list[ele+1]:
        count+=1
    dictionary[ele]=count
print(dictionary)
