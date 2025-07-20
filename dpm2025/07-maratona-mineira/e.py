n = int(input())

trocas = 0
lista = []

for i in range(n):
    a, b = map(int, input().split())
    lista.append((a, b))

while lista:
    #print(lista)
    dic = {i:0 for i in range(1, n+1)}

    for i in range(len(lista)):
        t = lista[i]
        a, b = t[0], t[1]
        #print(a, b, dic[a], dic[b])
        # tem so o a
        if a == b:
            dic[a] = a 
            dic[b] = b

        elif dic[a] != 0 and dic[b] == 0:
            temp = dic[a]
            dic[a] = a
            dic[b] = temp
            dic[temp] = b
            trocas += 1
        
        # tem so o b
        elif dic[a] == 0 and dic[b] != 0:
            #print(dic)
            temp = dic[b]
            #print('temp = ', temp)
            dic[b] = b
            dic[a] = temp
            dic[temp] = a
            trocas += 1
            #print(dic)
        
        # tem nenhum
        elif dic[a] == 0 and dic[b] == 0:
            dic[a] = b
            dic[b] = a
        
        # tem os dois
        elif dic[a] != 0 and dic[b] != 0:
           # print(dic)
            #print(a, b, 'ja passaram')
            temp = dic[a]
            dic[a] = a
            other = temp
            dic[temp] = b

            #print(dic)
            a = temp
            #print('modificou', a, b)
            if a != b:
                temp = dic[b]
                #print('temp = ', temp)
                dic[b] = b
                dic[a] = temp
                dic[temp] = a
                trocas += 1
           # print(a, b)
           # print(dic)
           # print()
            trocas += 1
        
        #print(dic)
    
    #print(dic)
    lista = []
    
print(trocas)

