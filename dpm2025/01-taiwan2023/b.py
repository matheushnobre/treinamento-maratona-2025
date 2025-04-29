rt, rj, st, sj = input().split()
rt, rj, st, sj = int(rt), int(rj), float(st)*1000, float(sj)*1000


a = (rt-1) / st
b = (rj-1) / sj 
            
if a < b:
    print('TAOYUAN')
elif a > b:
    print('JAKARTA')
else:
    print('SAME')
    
