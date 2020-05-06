xs = []
while(True):
    try:
        s = input()
        s = list(s)
        xs.append(s)
    except EOFError:
        for diagram in xs:
            soma = 0
            ans = []
            for ele in diagram:
                if ele>='1' and ele<='9':
                    soma+=int(ele)
                elif ele == 'b':
                    # print(soma,end='')
                    ans.append(soma*' ')
                    soma = 0
                elif ele == '*':
                    ans.append('*')
                    soma = 0
                elif ele == '!':
                    ans.append('\n')
                    # print()
                else:
                    # print(soma,end='')
                    ans.append(soma*ele)
                    soma = 0
            print(''.join(ans))
        break