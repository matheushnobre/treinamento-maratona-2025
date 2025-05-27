from math import log
from math import ceil

m = int(input())
m = m * 10**6 * 8

a = log(m) / log(2)
a = ceil(a)
print(a)