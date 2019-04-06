import statistics
n=int(input(" "))
arr=[]
for i in range(0,n):
    arr.append(int(input("")))               
print(statistics.median(arr))
