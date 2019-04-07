string = input("Please Enter String : ")
special = 0
for i in range(len(string)):
    if(string[i].isalpha()):
        continue;
    elif(string[i].isdigit()):
        continue;
    else:
        special = special + 1
print("Total Number of Special Characters in this String :  ", special)
