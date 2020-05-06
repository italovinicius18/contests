import re
xs = []
while(True):
    try:
        s = input().split()
        for i in s:
            x = ''
            for ele in i:
                if ele.isalpha():
                    x+=ele.lower()
            x = ''.join(x)
            xs.append(x)
    except EOFError:
        xs = set(xs)
        xs = list(xs)
        xs.sort()
        for palavra in xs:
            if len(palavra)>0:
                print(palavra)
        break