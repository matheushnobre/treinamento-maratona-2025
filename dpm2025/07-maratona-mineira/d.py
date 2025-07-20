n = int(input())

p = 0
for i in range(1, 7):
    for j in range(1, 7):
        for k in range(1, 7):
            if i + j + k == n:
                p += 1

ans = p / 216
print(f'{ans:.12f}')