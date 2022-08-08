#Lets suppose we have an array of [1,2,3,5,6,6] we have to find the  missing and repeating element

def find(arr):
    n=len(arr)
    l = [0] * (n+1)
    print(l)
    for i in range(n):
        l[arr[i]]+=1
    repeat=[]
    missing=[]
    for i in range(n+1):
        if(l[i]>1):
            repeat.append(i)
        elif(l[i]==0):
            missing.append(i)
    print(repeat)
    print(missing)
find([1,2,3,5,5])

