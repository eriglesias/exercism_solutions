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
    candidates = list(range(2, limit + 1))
    
    while candidates:
        prime = candidates[0]
        primes_list.append(prime)
        candidates = [num for num in candidates if num % prime != 0]

    return primes_list