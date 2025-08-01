def rotate(text, key):
    new_text = ""
    for letter in text:
        if letter.islower():
            base = ord('a')
            new_letter = chr((ord(letter) - base + key) % 26 + base)
        elif letter.isupper():
            base = ord('A')
            new_letter = chr((ord(letter) - base + key) % 26 + base)
        else:
            new_letter = letter
        new_text += new_letter
    return new_text


