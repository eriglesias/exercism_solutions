def is_isogram(string):
    word = string.lower()
    if word == "":
        return True
    elif word == " ":
        return False
    else:
        for letter in word:
            if word and letter not in ' -' and word.count(letter) > 1:
                return False
        return True
