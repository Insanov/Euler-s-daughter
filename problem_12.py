def sieve_of_Eratosthenes(N):
    A = [1] * N
    for k in range(1, N):
        for m in range(k * 2 - 1, N, k):
            A[m] = A[m] + 1

    return A

triangle_nums = []
summ = 0
for i in range(1, 100000):
    summ += i
    triangle_nums.append(summ)


a_list = sieve_of_Eratosthenes(100000000)
num_list = []
for k in range(100000000):
    if a_list[k] >= 500:
        num_list.append(k + 1)
min_num = num_list[0]

k = 0
for elem in triangle_nums:
    if min_num <= elem:
        k = triangle_nums.index(elem)
        break

triangle_nums = triangle_nums[k:]

for elem in num_list:
    if elem in triangle_nums:
        print(elem)
        break
