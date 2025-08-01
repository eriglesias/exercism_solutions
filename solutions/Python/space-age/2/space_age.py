EARTH_YEAR_IN_SECONDS = 31557600.0
PLANET_YEARS = {
    'earth': 1.0,
    'mercury': 0.2408467,
    'venus': 0.61519726,
    'mars': 1.8808158,
    'jupiter': 11.862615,
    'saturn': 29.447498,
    'uranus': 84.016846,
    'neptune': 164.79132
}

class SpaceAge(object):
    """Age calculator for different planets."""
    def __init__(self, seconds):
        self.seconds = seconds
        self.planet_methods = {}
        for planet in PLANET_YEARS:
            self._add_method(planet)

            
    def _on_planet(self, planet):
        return round(self.seconds / (EARTH_YEAR_IN_SECONDS * PLANET_YEARS[planet]), 2)

        
    def _add_method(self, planet):
        method_name = "on_" + planet
        method_doc = "Return age in " + planet + " years."
        self.planet_methods[method_name] = (planet, method_doc)

        
    def __getattr__(self, name):
        if name in self.planet_methods:
            planet, doc = self.planet_methods[name]
            return lambda: self._on_planet(planet)
        else:
            raise AttributeError("Planet not in SpaceAge '{}'".format(name))
        
        