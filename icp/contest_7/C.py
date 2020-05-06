n = int(input())
s = list(input())
aux = []
ans = 0
for i in range(n):
    for j in range(i,n):
        aux.append(s[j])
        if(int(''.join(aux))%2==0):
            ans+=1
            # print(aux)
    aux = []
print(ans)