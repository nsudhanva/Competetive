fhand = open('largest_product_in_a_grid.txt')

matrix = []
num = []
maxpro = []
prod = 1
prod2 = 1
pro = 1
pro2 = 1

for line in fhand:
    num = line.strip().split(' ')
    matrix.append(num)
    #print num
for index1 in range(20):
    for index2 in range(16):
        # right/left products
        prod = int(matrix[index1][index2]) * int(matrix[index1][index2 + 1]) * int(matrix[index1][index2 + 2]) * int(matrix[index1][index2 + 3])
        maxpro.append(prod)
        # up/down products
        prod2 = int(matrix[index2][index1]) * int(matrix[index2 + 1][index1]) * int(matrix[index2 + 2][index1]) * int(matrix[index2 + 3][index1])
        maxpro.append(prod2)

for index1 in range(17):
    for index2 in range(17):
        pro = int(matrix[index1][index2]) * int(matrix[index1 + 1][index2 + 1]) * int(matrix[index1 + 2][index2 + 2]) * int(matrix[index1 + 3][index2 + 3])
        maxpro.append(pro)

for i in range(3,20):
    for j in range(16):
        pro2 = int(matrix[index1][index2]) * int(matrix[index1-1][index2+1]) * int(matrix[index1-2][index2+2]) * int(matrix[index1-3][index2+3])
        maxpro.append(pro2)

print max(maxpro)
