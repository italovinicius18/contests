n = int(input())

c = list(map(int,input().split()))

soma = sum(c)

c.sort()
ans = 0
somaB = 0
for i in reversed(c):
    somaB += i
    resto = soma-somaB
    ans +=1
    if somaB>resto:
        break

print(ans)

