# create list
# lower case the items
# iterate over the list items and reversed
# compare both initial and reversed

palindrome=["raDar","level","noon","deifieD"]
lowerd_list=[]
count=0
for item in palindrome:
    item=item.lower()
    lowerd_list.append(item)
    rev_item=item[::-1]
    import pdb;pdb.set_trace()
    if item==rev_item:
        count+=1
print(count)

# for debugging:-
#     import pdb;pdb.set_trace()
# n dile porer line execute korbe
# c+enter dile exit nibe
# q+enter dile quit hobe