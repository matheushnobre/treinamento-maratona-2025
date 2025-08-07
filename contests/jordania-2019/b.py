def prime(x):
    if x < 2: return False
    i = 2
    while i*i <= n:
        if x % i == 0: return False
        i += 1
    return True

n = int(input())
if prime(n-2):
    print(2, n-2)
else:
    print(-1)