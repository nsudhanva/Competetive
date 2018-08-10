fhand = open('maximum_path_sum_11.txt')

array = []
summ = 0

for line in fhand:
    #print line
    array.append(line.strip().split(' '))

#print array
for n in (range(len(array))):
    print array[n]

#print summ
