bounds = {1: 10, 5: 5, 10: 1 }
    
def score(x: int , y: int ) -> int:
    distance = ((x * x) + (y * y)) ** (1 / 2)
    for upper_bound, score in bounds.items():
        if distance <= upper_bound:
            return score
    return 0