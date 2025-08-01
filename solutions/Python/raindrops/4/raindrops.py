sounds = [[3,'Pling'], [5,'Plang'], [7,'Plong']]

def convert(number):
    result = ''
    for factor, sound in sounds:
        if number % factor == 0:
            result += sound
      
    return result or str(number)
    
  