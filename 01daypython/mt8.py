a = int(input("uch xonali son kriting: "))
s = (a // 10) % 10 * 10 + (a % 10)* 100 + a // 100
b = bool(a == s and a % 2 == 0)
print(b)