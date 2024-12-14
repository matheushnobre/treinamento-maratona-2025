n = int(input())
dic = {l:0 for l in 'abcdefghijklmnopqrstuvwxyz'}

for i in range(n):
    s = input().lower()
    for l in s:
        dic[l] += 1

dic['a'] = dic['a'] // 2
dic['l'] = dic['l'] // 2
a = min(dic['f'], dic['e'], dic['i'], dic['z'], dic['n'], dic['a'], dic['t'], dic['l'])
print(a)