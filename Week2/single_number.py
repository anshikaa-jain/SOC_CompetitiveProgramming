arr = []
l = int(input("Enter the length of array:"))
for k in range(l):
    n = int(input("Enter a number:"))
    arr.append(n)
if ((1 <= l <= 3 * 1e4) and (min(arr)>= -3*1e4 and max(arr)<= 3 * 1e4)):
    for i in range(l):
        count = 0
        for j in range(l):
            if (arr[i] == arr[j]) :
                count = count +1
        if (count == 1):
            print(arr[i])

