while(True):
    try:
        cont = 0
        ans = 0
        s = input()
        for i in s:
            if i.isalpha():
                cont+=1
            else:
                if cont > 0:
                    ans+=1
                    cont = 0
        print(ans)
    except EOFError:
        break