def isitatriangle(sides):
    sides.sort()
    if sides[0]>0 and all([sides[0] * 2 < sum(sides), sides[1] * 2 < sum(sides), sides[2] * 2 < sum(sides)]) == True:
        return True
    return False 
        
def equilateral(sides): 
    return isitatriangle(sides) and len(set(sides)) == 1
    return False
    
def isosceles(sides):
    return isitatriangle(sides) and len(set(sides)) <= 2
        
def scalene(sides):
   sides.sort()
   return  len(set(sides)) == 3 and sides[0] + sides[1] >sides[2]
   return False 
            
    
 


