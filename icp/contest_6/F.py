tmp = input()
ans = []
while True:
    s = input()

    if s[1] == '_':
        break

    s = list(s)
    for i in range(len(s)):
        if s[i] == 'o':
            s[i] = '1'
        elif s[i] == ' ':
            s[i] = '0'
        elif s[i] == '.':
            s[i] = ''
        else:
            s[i] = ''
    s = ''.join(s)

    # bin to char

    dec = int(s,2)
    ans.append(chr(dec))

print(''.join(ans),end='')