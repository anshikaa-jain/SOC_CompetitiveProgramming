nums1 =[]
n1 = int(input("enter length of array1:"))
nums2 =[]
n2 = int(input("enter length of array2:"))
for p in range(n1):
    nums1.append(float(input("enter number:")))
for p in range(n2):
    nums2.append(float(input("enter number:")))

i = 0
j = 0
merged_array = []
while((i<n1) and (j<n2)):
    if nums1[i] < nums2[j] :
        merged_array.append(nums1[i])
        i += 1
    else:
        merged_array.append(nums2[j])
        j += 1

while(i<n1):
    merged_array.append(nums1[i])
    i += 1

while(j<n2):
    merged_array.append(nums2[j])
    j += 1

print(merged_array)

if ((n1+n2) % 2) == 0 :
    print("median = ", (merged_array[int((n1+n2)/2)-1] + merged_array[int((n1+n2)/2)])/2 )
else:
    print("median = ", merged_array[int((n1+n2+1)/2)-1])

