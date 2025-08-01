def is_armstrong_number(number : int)-> bool:
    """Is it an armstrong number?"""
    s = str(number)
    exp = len(s)
    return number == sum([int(n)**exp for n in s])
