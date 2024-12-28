kolom, baris = map(int, input().split())
num = list(map(int, input().split()))
matriks = []
x = 0
for y in range (kolom):
    matriks.append(num[x : x + baris])
    x = x + baris
for kolom in matriks:
    for num in kolom:
        print(num, end = " ")
    print()