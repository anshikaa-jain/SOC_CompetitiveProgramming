
vowels = list("aeiou")
string = input("enter a string")
list = list(string)
k = int(input("Enter the length substring:"))
arr =[]
n = 0
if (len(list) >= 1 and len(list) <= 1e5) and (k >= 1 and k <= len(list)):
    while n<len(list):
        count = 0
        for i in range(k):
            if i+n<len(list):
                if (list[i+n] in vowels):
                 count += 1
        arr.append(count) 
        n=n+1

    print(max(arr))



 