a = input("4 xonali son kiriting: ")
s = (int(a[0]) + int(a[2])) - (int(a[1]) + int(a[3]))
b = bool(int(a[0]) != int(a[1]) and int(a[0]) != int(a[2]) and int(a[0]) != int(a[3]) and int(a[2]) != int(a[1]) and int(a[2]) != int(a[3]) and int(a[1]) != int(a[3]) and s == 0)
print(b)