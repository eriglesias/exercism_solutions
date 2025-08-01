def score(x, y):
    distance = ((x * x ) + (y * y)) ** (1 / 2)
    return 10 if distance <=1 else 5 if distance <=5 else 1 if distance <=10 else 0
   
    
     
