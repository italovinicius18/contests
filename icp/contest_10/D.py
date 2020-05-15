n = int(input())
s = input()

s = s.lower()

total = set()

for i in s:
    total.add(i)

if(len(total)>=26):
    print("YES")
else:
    print("NO")