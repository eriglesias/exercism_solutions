def leap_year(year):
    if year % 400 == 0:
       return True 
    elif year % 100 == 0:
        return False
    elif year % 4 == 0:
        return True
    return False

   
# def leap_year(year):
   #  if (year % 4 ==0) and year % 400 == 0:
      #   print("it's a leap year")
    # elif:
     #    (year % 100 >=0)