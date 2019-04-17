s1=input("")
s2=input("")
count1=0
count2=0
for i in s1:
    count1=count1+1

for j in s2:
    count2+=1

if count1>count2:
    print(s1)
if count1<count2:
    print(s2)

if count1==count2:
    print(s2) 
