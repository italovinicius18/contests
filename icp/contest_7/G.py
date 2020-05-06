n = input()
m = input()
n = list(n)
ans = 0

for i in m:
    if i in n:
        ans+=1
        n.remove(i)

if ans>0:
    print(ans)
else:
    print(-1)