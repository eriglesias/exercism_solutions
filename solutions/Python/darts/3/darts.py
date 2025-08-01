def score(x, y):
    distance = ((x * x ) + (y * y)) ** (1 / 2)
    if distance <= 1:
        return 10
    if distance <= 5 :
        return 5
    if distance <= 10:
         return 1 
    return 0
   
    
     
