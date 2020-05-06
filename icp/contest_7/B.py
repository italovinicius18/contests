n = int(input())

s = input()
ones = 0
zeros = 0
for i in s:

    if i=='n':
        ones+=1
    elif i =='z':
        zeros+=1

ans = []

while(ones!=0 ):
    ans.append('1')
    ones-=1
while(zeros!=0):
    ans.append('0')
    zeros-=1

print(' '.join(ans))
        