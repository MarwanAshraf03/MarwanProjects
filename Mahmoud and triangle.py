def non_degenerate_triangle(list = []):
    from itertools import combinations
    list = combinations(list, 3)
    for i in list:
        if i[0] + i[1] > i[2] and i[0] + i[2] > i[1] and i[2] + i[1] > i[0]:
            print("Yes")
            return
    print("No")

list = [4, 1, 2]
non_degenerate_triangle(list)

def combination_new(list=[], r=0):
    if r == 0 or r == len(list):
        return 1