n,m,k = map(int,input().split())
a = list(map(int,input().split()))
# print(n,m,k)

menor = 101

for i in range(0,n):
    if a[i] <= k  and a[i]!=0:
        if abs(i-(m-1)) < menor:
            menor  = abs(i-(m-1))
print(menor*10)

