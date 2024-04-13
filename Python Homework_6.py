#Non-generator method
def primes(limit):
    """
    2.Write a function to find all prime numbers from 2 to limit with Sieve of Eratosthones algorithm.
    Extra: create a function with generators
    Input: 100
    Output: [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97]
    """
    num_list = [True for i in range(limit)]
    primes = []
    p = 2
    while (p * p <= limit):
        if (num_list[p] == True):
            for i in range(p * p, limit, p):
                num_list[i] = False
        p += 1
    for p in range(2, limit):
        if num_list[p]:
            primes.append(p)
    return primes


#Generator method
def remove_non_primes(p, limit):
    for i in range(p * p, limit, p):
        yield i

def gen_primes(limit):
    num_list = [True for i in range(limit)]
    p = 2
    while (p * p <= limit):
        if (num_list[p] == True):
            for i in remove_non_primes(p, limit):
                num_list[i] = False
        p += 1
    for p in range(2, limit):
        if num_list[p]:
            yield p


print(primes(10))

for x in gen_primes(10):
    print(x)
