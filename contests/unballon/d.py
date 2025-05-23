import math

rl, hl, rc, hc = map(int, input().split())

c = int(((3.1415 * rc**2 * hc) / 3) + (((4 * 3.1415 * rc**3) / 3) / 2))
g = int(3.1415 * rl**2 * hl )


if g > c:
    print('Injusto')
else:
    print('Justo')