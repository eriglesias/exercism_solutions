def sum_of_multiples(level, base_values):
    result_set = set()
    for value in base_values:
        for i in range(1, level):
            if value * i < level:
                result_set.add(value * i)
            else:
                break
    return sum(result_set)
    