t = int(input())
for _ in range(t):
    n = int(input())
    s = input()

    seen = ""
    total = 0

    for i in s:
        if(i not in seen): total += 2
        else: total += 1
        seen += i
    print(total)