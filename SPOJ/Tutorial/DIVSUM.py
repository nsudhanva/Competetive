n = raw_input()

sum = 0

for i in range(int(n)):
    x = raw_input()
    for j in range(int(x)):
        if j % int(x) == 0:
            sum = sum + j

print sum
