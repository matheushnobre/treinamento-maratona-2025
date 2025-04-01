for _ in range(int(input())):
    n = int(input())
    ans = 0

    for i in range(n):
        s = input()
        for j in range(len(s)):
            ans += ord(s[j]) - ord('A') + i + j
    print(ans)