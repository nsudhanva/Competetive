x = raw_input()

def fact(n):
    if n == 0 or n == 1:
        return 1
    else:
        return fact(n - 1) * n

for i in range(int(x)):
    y = raw_input()
    print fact(int(y))
