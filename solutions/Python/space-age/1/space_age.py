import math

class SpaceAge:
    def __init__(self, seconds_in_a_year):
        self.years = round(seconds_in_a_year /  31557600, 2)

    def on_earth(self):
       return self.years

    
    def on_mercury(self):
        return round(self.years / 0.2408467, 2)

    
    def on_venus(self):
      return math.floor(self.years /  0.61519726 * 100) / 100

        
    def on_mars(self):
        return round(self.years /  1.8808158 , 2)

    
    def on_jupiter(self):
        return round(self.years /  11.862615, 2)

        
    def on_saturn(self):
        return round(self.years / 29.447497, 2 )

        
    def on_uranus(self):
        return round(self.years / 84.016846, 2)

        
    def on_neptune(self):        
        return round(self.years / 164.79132, 2)
        
        