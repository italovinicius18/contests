while(True):
    xs = []
    cont = []
    n = int(input())
    if(n==0):
        break
    for _ in range(n):
        x = input()
        cont.append(x.count(' '))
    menor = min(cont)
    total = 0
    for i in cont:
        total+=i-menor
    print(total)