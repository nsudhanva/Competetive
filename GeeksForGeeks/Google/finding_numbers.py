import collections

test_cases = int(input())

while(test_cases != 0):
    n = int(input())
    numbers = list(map(int, input().split()))
    numbers = [item for item, count in collections.Counter(numbers).items() if count == 1]
    numbers.sort()
    print(*numbers)
    test_cases = test_cases - 1
