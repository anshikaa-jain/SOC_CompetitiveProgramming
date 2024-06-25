
t = input("enter a string in lowercase:")
s = input("enter a sequence in lowercase:")
if (len(s)>=0 and len(s)<=100) and (len(t)>=0 and len(t)<=1e4):
    i = 0
    j = 0
    while (i<len(s) and j<len(t)):
        if (s[i] == t[j]):
            i += 1
            j += 1
        else:
            j += 1
    if (i == len(s)):
        print("true")
    else: 
        print("false")