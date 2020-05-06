def is_palin(s):
    s_rev = s[::-1]
    if s == s_rev:
        return True
    else:
        return False


def is_mirror(s):
    mir = 0
    for i in range(len(s)):
        if s[i] == 'A' and s[-1*(1+i)] == 'A':
            mir+=1
        elif s[i] == 'E' and s[-1*(1+i)] == '3':
            mir+=1
        elif s[i] == 'H' and s[-1*(1+i)] == 'H':
            mir+=1
        elif s[i] == 'I' and s[-1*(1+i)] == 'I':
            mir+=1
        elif s[i] == 'J' and s[-1*(1+i)] == 'L':
            mir+=1
        elif s[i] == 'L' and s[-1*(1+i)] == 'J':
            mir+=1
        elif s[i] == 'M' and s[-1*(1+i)] == 'M':
            mir+=1
        elif s[i] == 'O' and s[-1*(1+i)] == 'O':
            mir+=1
        elif s[i] == 'S' and s[-1*(1+i)] == '2':
            mir+=1
        elif s[i] == 'T' and s[-1*(1+i)] == 'T':
            mir+=1
        elif s[i] == 'V' and s[-1*(1+i)] == 'V':
            mir+=1
        elif s[i] == 'W' and s[-1*(1+i)] == 'W':
            mir+=1
        elif s[i] == 'X' and s[-1*(1+i)] == 'X':
            mir+=1
        elif s[i] == 'Y' and s[-1*(1+i)] == 'Y':
            mir+=1
        elif s[i] == 'Z' and s[-1*(1+i)] == '5':
            mir+=1
        elif s[i] == '1' and s[-1*(1+i)] == '1':
            mir+=1
        elif s[i] == '2' and s[-1*(1+i)] == 'S':
            mir+=1
        elif s[i] == '3' and s[-1*(1+i)] == 'E':
            mir+=1
        elif s[i] == '5' and s[-1*(1+i)] == 'Z':
            mir+=1
        elif s[i] == '8' and s[-1*(1+i)] == '8':
            mir+=1
    if mir == len(s):
        return True
    else:
        return False

while(True):
    try:
        s = input()
        palin = is_palin(s)
        mir = is_mirror(s)
        if(palin and mir):
            print(s+" -- is a mirrored palindrome.")
        elif(palin):
            print(s+" -- is a regular palindrome.")
        elif(mir):
            print(s+" -- is a mirrored string.")
        else:
            print(s+" -- is not a palindrome.")
        print()
    except EOFError:
        break
