def classify(number):
    """ A perfect number equals the sum of its positive divisors.

    :param number: int a positive integer
    :return: str the classification of the input integer
    """
    if number < 1:
        raise ValueError("Classification is only possible for positive integers.")
    result = sum({i for i in range(1, number //2 +1 ) if number % i == 0})
    return 'perfect' if result == number else ('abundant' if result > number else 'deficient')