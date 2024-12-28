ruangan = int(input())
isi = list(map(int, input().split()))
for x in range (ruangan):
    print((x + 1) * isi[x], end = " ")