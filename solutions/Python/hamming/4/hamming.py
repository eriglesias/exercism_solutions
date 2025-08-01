def distance(strand_a: str, strand_b: str) ->int:
    if len(strand_a) != len(strand_b):
        raise ValueError("Strands must be of equal length.")
    distance_number = 0
    for i, nucleotide1 in enumerate(strand_a):
        if nucleotide1 != strand_b[i]:
            distance_number +=1
    return distance_number
