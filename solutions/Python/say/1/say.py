NUMBERS = {
    0: "zero", 1: "one", 2: "two", 3: "three", 4: "four", 5: "five", 6: "six",
    7: "seven", 8: "eight", 9: "nine", 10: "ten", 11: "eleven", 12: "twelve",
    13: "thirteen", 14: "fourteen", 15: "fifteen", 20: "twenty", 30: "thirty",
    40: "forty", 50: "fifty", 60: "sixty", 70: "seventy", 80: "eighty", 90: "ninety",
}

def say(number):
    if not (0 <= number <= 999_999_999_999):
        raise ValueError("input out of range")
    
    if number in NUMBERS:
        return NUMBERS[number]
    
    if 16 <= number <= 19:
        return NUMBERS[number - 10] + "teen"
    
    if number < 100:
        tens = (number // 10) * 10
        ones = number - tens
        return f'{NUMBERS[tens]}' + (f'-{NUMBERS[ones]}' if ones > 0 else '')
    
    for exponent, name in [(9, 'billion'), (6, 'million'), (3, 'thousand'), (2, 'hundred')]:
        if number >= 10 ** exponent:
            quotient, remainder = divmod(number, 10 ** exponent)
            return f'{say(quotient)} {name}' + (f' {say(remainder)}' if remainder > 0 else '')

