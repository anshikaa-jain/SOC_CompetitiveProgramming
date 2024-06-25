n = int(input("enter the length of array:"))
ratings = []
for i in range(n):
    ratings.append(int(input("enter number:")))
candies = [] #storing no. of candies for each kid
for j in range(n):
    candies.append(1)

for k in range(1,n):
    if (ratings[k] > ratings[k-1]):
        candies[k] = candies[k-1] + 1

for p in range(n-2,-1,-1):
    if (ratings[p] > ratings[p+1]):
        if (candies[p] <= candies[p+1]):
            candies[p] = candies[p+1] + 1

print(sum(candies))


