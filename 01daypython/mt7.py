a = int(input("ikki xonali son kriting: "))
s = a // 10 + (a % 10)*10
b = bool(a == s and a % 2 != 0)
print(b)