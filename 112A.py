#https://codeforces.com/problemset/problem/112/A
s1 = input()
s2 = input()
s1 = s1.lower()
s2 = s2.lower()
s1 = list(s1)
s2 = list(s2)

if s1 == s2:
    print("0")

for i in range(len(s2)):
    if s1[i] > s2[i]:
        print("1")
        break
    elif s1[i] < s2[i]:
        print("-1")
        break