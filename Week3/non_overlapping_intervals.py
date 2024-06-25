
def sort(arr):
    for i in range(len(arr)):
        for j in range(i+1,len(arr)):
            if(arr[i][0] > arr[j][0]):
                x = arr[i]
                arr[i] = arr[j]
                arr[j] = x
            if(arr[i][0] == arr[j][0]):
                if (arr[i][1] > arr[i][1]):
                    x = arr[i]
                    arr[i] = arr[j]
                    arr[j] = x
    return arr
intervals= [[1,2],[2,3]]
sort_intervals = sort(intervals)
# print(sort)

count = 0
prev_end = sort_intervals[0][1]  #end value of 1st interval
for start, end in sort_intervals[1: ]:
    if (start >= prev_end):   #checking that the intervals are not overlapping
        prev_end = end
    else:                     #if the adjacent intervals are overlapping then drop one of them
        count += 1
        prev_end = min(prev_end, end)    #dropping the one whose end is greater than the other as it will reduce the chances of overlapping the rest of the intervals in future

print(count)