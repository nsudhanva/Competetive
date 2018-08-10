fhand = open('large_sum.txt')

sum = 0

for line in fhand:
    sum = sum + int(line)

print sum

