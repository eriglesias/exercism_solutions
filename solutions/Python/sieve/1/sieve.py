from math import isqrt


def primes(limit: int) -> list[int]:
    if limit < 2:
        return []
    if limit == 2:
        return [2]
    is_prime = [True] * (limit + 1)
    is_prime[0] = False
    is_prime[1] = False

    for i in range(2, isqrt(limit) + 1):  
        if is_prime[i]:
            for x in range(i * i, limit + 1, i):
                is_prime[x] = False

    return [i for i in range(limit + 1) if is_prime[i]]
