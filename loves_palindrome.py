int_list = []
for i in range(5):
    int_list.append(str(input()).replace(" ", ""))
flag = 0
for i in range(len(int_list)):
    for j in range(len(int_list[i])):
        if int_list[i][j] == '1':
            flag = 1
            break
    if flag == 1:
        break
i += 1
j += 1
n = 0
n += i - 3 if i >= 3 else 3 - i 
n += j - 3 if j >= 3 else 3 - j
print(n)