

def primes(limit: int) -> list[int]:
    if limit < 2:
        return []
    primes_list = []
    sieve = [True] * (limit + 1)
    sieve[0] = sieve[1] = False
    for num in range(2, limit + 1):
        if sieve[num]:
            primes_list.append(num)
            for multiple in range(num * num, limit + 1, num):
                sieve[multiple] = False
    return primes_list