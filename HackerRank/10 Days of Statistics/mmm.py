num_list = []
fhand = open('input04.txt')

for line in fhand:
    num_list.append(line.split())

print len(num_list[0])