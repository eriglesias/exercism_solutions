from math import isqrt


def primes(limit: int) -> list[int]:
    """
    Generate a list of prime numbers up to a given limit.

    Args:
        limit(int): The upper limit to which prime numbers are generated.

    Returns:
        limit[int]: A list containing prime numbers up to the given limit
    """
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