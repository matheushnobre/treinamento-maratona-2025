n = int(input())
answer = 1

for i in range(n):
    answer *= 2
    answer %= 1000000007

print(answer)