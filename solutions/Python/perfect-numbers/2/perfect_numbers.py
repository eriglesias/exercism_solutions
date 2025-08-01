def classify(number):
    """ A perfect number equals the sum of its positive divisors.

    :param number: int a positive integer
    :return: str the classification of the input integer
    """
    if(number<1):
        raise ValueError("Classification is only possible for positive integers.")
    else:
        factors = set()
        for i in range(1, number):
            if number % i == 0:
                factors.add(i)
        result = sum(list(factors))
        if result == number:
            return 'perfect'
        elif result > number:
            return 'abundant'
        elif result < number:
            return 'deficient'