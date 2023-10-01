
# Input data
arr = [1 ,5, 8, 15, 8, 25, 9]
rank_dict={} 
# Sort the data and create a dictionary to store the rank of each element
sorted_arr = sorted(arr)
rank = 1
for element in sorted_arr:
    if element not in rank_dict:
        rank_dict[element] = rank
        rank += 1
for i in range(len(arr)):
    arr[i] = rank_dict[arr[i]]

print(arr)

OUTPUT:[1,2,3,5,3,6,4]
