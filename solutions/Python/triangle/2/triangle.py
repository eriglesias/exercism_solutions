# def equilateral(sides):
#    a, b, c = sorted(sides)
#    return 0 < a == c
# def isosceles(sides):
#    a, b, c = sorted(sides)
#   return 0 < a and c < a + b and b in (a, c)
# def scalene(sides):
#    a, b, c = sorted(sides)
#    return 0 < a < b < c < a + b

# instead of comparing the values we will use set(), len(set) ==1 

#def isitatriangle(sides):
#    for side in sides:
#        if not side[i] == side[i+1]:
#            return True
#    return False

#def scalene(sides):
   # sides.sort()
   # if len(set(sides)) == 3 and sides[0] + sides[1] >sides[2]:
     #   return True
   # return False 

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
            
    
 


