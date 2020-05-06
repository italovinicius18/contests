n,k = map(int,input().split())


n = str(n)
l = []
for i in n:
    l.append(int(i))



for _ in range(k):

    if(l[-1]!=0):
        l[-1] = l[-1]-1
    else:
        del l[-1]



print(''.join(str(x) for x in l))