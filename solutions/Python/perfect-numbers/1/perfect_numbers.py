def classify(number):
    """ A perfect number equals the sum of its positive divisors.
 
    :param number: int a positive integer
    :return: str the classification of the input integer
    """
    if number < 1:
        raise ValueError("Classification is only possible for positive integers.")
    sum_of_factors = sum(x for x in range(1, number//2 + 1) if number % x == 0)
    result = 'perfect'
    
    if sum_of_factors > number:
        result = 'abundant'
    elif sum_of_factors < number:
        result = 'deficient'
    return result