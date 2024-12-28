batas = int(input())
for a in range(1, batas + 1):
    if a % 2 != 0: print(a, end = " ")
print()
for a in range(batas, 0, -1):
    if a % 2 == 0: print(a, end = " ")