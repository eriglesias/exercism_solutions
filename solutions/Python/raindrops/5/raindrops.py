sounds = [[3,'Pling'], [5,'Plang'], [7,'Plong']]

def convert(number):
    sounds_to_include = [sound for factor, sound in sounds if number % factor == 0]
    result = ''.join(sounds_to_include) if sounds_to_include else str(number)
    return result