quad = []
for i in range(1, 101):
    quad.append(i*i)
    
for i in range(100):
    q1 = quad[i]
    for j in range(100):
        q2 = quad[j]
        if q2 - q1 in quad:
            print(q1, q2)