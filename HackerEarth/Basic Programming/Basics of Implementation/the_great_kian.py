n = raw_input()
x = raw_input().split()
#print x
sum1 = 0
sum2 = 0
sum3 = 0

for i in range(int(n)):
    if int(x[i]) % 3 == 1:
        sum1 = sum1 + int(x[i])
    if int(x[i]) % 3 == 2:
        sum2 = sum2 + int(x[i])
    if int(x[i]) % 3 == 0:
        sum3 = sum3 + int(x[i])

print str(sum1) + " " + str(sum2) + " " + str(sum3)
