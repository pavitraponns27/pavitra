n=int(input(" "))
arr=[]
for i in range(0,n):
    arr.append(int(input("")))
for i in range(n-1):
    for j in range(n-i-1):
        if(arr[j]>arr[j+1]):
            temp=arr[j]
            arr[j]=arr[j+1]
            arr[j+1]=temp
print(arr)        
