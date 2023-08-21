def word(str):
    count_up = 0
    count_low = 0
    str_new = ""
    for i in str:
        if ord(i) >= ord('a') and ord(i) <= ord('z'):
            count_low += 1
        elif ord(i) >= ord('A') and ord(i) <= ord('Z'):
            count_up += 1
    if (count_up > count_low):
        # for i in str:
            # str_new += chr(ord(i)-32) if (ord(i) >= ord('a') and ord(i) <= ord('z')) else i
        str_new = str.upper()
    else:
        str_new = str.lower()
        # for i in str:
        #     str_new += chr(ord(i) + 32) if (ord(i) >= ord('A') and ord(i) <= ord('Z')) else i
    return str_new
print(word("HoUse"))
print(word("ViP"))
print(word("maTRIx"))