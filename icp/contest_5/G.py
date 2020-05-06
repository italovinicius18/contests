xs = []
maior = 0
ans = []
while(True):
    try:
        s = input()
        s = list(s)
        if len(s) > maior:
            maior = len(s)
        xs.append(s)
    except EOFError:
        for frase in xs:
            if(len(frase)<maior):
                for _ in range(len(frase),maior):
                    frase.append(" ")
        xs.reverse()
        ans =[[row[i] for row in xs] for i in range(len(xs[0]))]
        for i in ans:
            print(''.join(i))
        break