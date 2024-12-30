k = int(input())
mod = 10**9+7

answer = pow(4, pow(2, k)-2, mod)
answer = (6 * answer) % mod    
print(answer)