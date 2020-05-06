s = input()
s = list(s)
aux = ""
ans = 0
for i in range(len(s)):
    for j in range(i,len(s)):
        aux+=s[j]
        # print(aux)
        if(int(aux)%2019==0):
            aux = ""
            ans+=1
    aux = ""

print(ans)