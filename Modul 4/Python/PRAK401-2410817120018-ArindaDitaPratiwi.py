x, y = (input().split())
x = int(x)
for i in range(1, 51):
    if i % x == 0:
        print(y, end = ' ')
    else:
        print(i, end = ' ')