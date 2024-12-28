n = int(input())
matriks1 = []; matriks2 = []; matriksAXB = []
print('Matriks A')
for x in range(n):
    z =  list(map(int, input().split()))
    matriks1.append(z)
print('Matriks B')
for x in range(n):
    z =  list(map(int, input().split()))
    matriks2.append(z)
print('Matriks AXB')
for x in range(n):
    matriksAXB.append([])
    for y in range(n):
        jumlah = 0
        for z in range(n):
            jumlah = jumlah + matriks1[x][z] * matriks2[z][y]
        matriksAXB[x].append(jumlah)
for isi in matriksAXB:
    for z in isi:
        print(z, end = " ")
    print()