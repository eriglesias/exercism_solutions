def distance(strand_a: str, strand_b: str) ->int:
    if len(strand_a) != len(strand_b):
        raise ValueError("Strands must be of equal length.")
    distance_number = 0
    for my_tuple in zip(strand_a,strand_b):
        if my_tuple[0] != my_tuple[1]:
            distance_number += 1
    return distance_number
