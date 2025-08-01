def isitatriangle(sides):
    sides.sort()
    return sides[0]>0 and all([sides[0] * 2 < sum(sides), sides[1] * 2 < sum(sides), sides[2] * 2 < sum(sides)]) == True
        
def equilateral(sides): 
    return isitatriangle(sides) and len(set(sides)) == 1
    
def isosceles(sides):
    return isitatriangle(sides) and len(set(sides)) <= 2
        
def scalene(sides):
    return isitatriangle(sides) and len(set(sides)) == 3 
            
    
 


