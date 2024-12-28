x, y = map(int,input().split())
if x <= y:
    i, j = x, y
    while i <= y and j >= x:
        print(f"{i} {j}", end = " ")
        if i < y :
            print("-", end = " ")
        i += 1
        j -= 1
else:
    i, j = x, y
    while i >= y and j <= x:
        print(f"{i} {j}", end = " ")
        if i > y :
            print("-", end = " ")
        i -= 1
        j += 1