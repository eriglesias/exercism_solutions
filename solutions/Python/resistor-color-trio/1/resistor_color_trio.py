color = {
                'black': 0,
                'brown': 1,
                'red': 2,
                'orange': 3,
                'yellow': 4,
                'green': 5,
                'blue': 6,
                'violet': 7,
                'grey': 8,
                'white': 9
              }

def label(colors: str) -> str:
    value = int(str(color[colors[0]]) + str(color[colors[1]])) * (10 ** color[colors[2]])
    if value < 1000:
        return f'{int(value)} ohms'
    elif 1000 <= value < 1000000:
        return f'{round(value / 1000)} kiloohms'
    elif 1000000 <= value < 1000000000:
        return f'{round(value / 1000000)} megaohms'
    else:
        return f'{round(value / 1000000000)} gigaohms'


    
