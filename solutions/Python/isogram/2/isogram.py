def is_isogram(string):
    word = string.lower().replace(' ', '').replace('-', '')
    return len(word) == len(set([letter for letter in word]))

