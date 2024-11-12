# Append and Panic!
# Este foi o exato código utilizado para passar o problema na Final Brasileira

s = input()
let = {}
for l in s:
    try:
        let[l] += 1
    except KeyError:
        let[l] = 1
tam = 0
for v in let.values():
    tam += v - 1
print(tam)