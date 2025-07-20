for _ in range(int(input())):
    n = int(input())
    l = list(map(int, input().split()))
    
    if l[0] == 1:
        print(l.index(2)+1, n)
        
    elif l[-1] == 1:
        print(l.index(2)+1, 1)
        
    else:
        um = l.index(1)
        l[0], l[um] = l[um], l[0]
        t1 = 0
        maior = 1
        for i in range(1, n):
            maior = max(maior, l[i])
            if maior == i+1:
                t1 += 1                

        l[0], l[um] = l[um], l[0]
        l[um], l[-1] = l[-1], l[um]
        t2 = 0
        maior = 1
        for i in range(n-2, -1, -1):
            maior = max(maior, l[i])
            if maior == n-i:
                t2 += 1
        
        dois = l.index(2)
        l[-1], l[um] = l[um], l[-1]
        l[dois], l[-1] = l[-1], l[dois]
        t3 = 0
        maior = 0
        for i in range(n-1, -1, -1):
            maior = max(maior, l[i])
            if maior == n-i:
                t3 += 1
        
        l[dois], l[-1] = l[-1], l[dois]
        l[0], l[dois] = l[dois], l[0]
        t4 = 0
        maior = 0
        for i in range(n):
            maior = max(maior, l[i])
            if maior == i+1:
                t4 += 1                
                
        menor = min(t1, t2, t3, t4)
        if menor == t1:
            print(um+1, 1)
        elif menor == t2:
            print(um+1, n)
        elif menor == t3:
            print(dois+1, n)
        else:
            print(dois+1, 1)