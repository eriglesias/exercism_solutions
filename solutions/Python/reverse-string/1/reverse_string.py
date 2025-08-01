def reverse(text):
    if len(text) == 0:
        return ""
    inversed = text[-1]
    for letter in range(len(text) - 1, 0, -1):
        inversed += text[letter - 1]
    return inversed