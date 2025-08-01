sounds = ['Pling', 'Plang', 'Plong']

def convert(number):
    result = ''
    for sound in sounds:
        if number %3 ==0:
            result += sounds[0]
        if number %5 ==0:
            result += sounds[1]
        if number %7 ==0:
             result += sounds[2]
        return result or str(number)