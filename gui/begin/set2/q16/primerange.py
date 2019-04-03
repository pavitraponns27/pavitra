m=int(input("enter the lower value"))
n=int(input("enter the upper value"))
for num in range(m,n+1):
      if(num>0):
            for i in range(2,num):
                  if(num%i==0):
                        break
            else:
                  print(num)
