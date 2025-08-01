def score(x, y):
    if ((x * x ) + (y * y)) ** (1 / 2) <= 1:
        return 10
    if ((x * x ) + (y * y)) ** (1 / 2) <= 5 :
        return 5
    if ((x * x ) + (y * y)) ** (1 / 2) <= 10:
         return 1 
    return 0
   
    
     
