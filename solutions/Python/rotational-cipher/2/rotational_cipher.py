def rotate(text, key):
    new_text = ""
    for letter in text:
        if letter.islower():
            base = ord('a')
        elif letter.isupper():
            base = ord('A')
        else:
            new_text += letter
            continue
        new_letter = chr((ord(letter) - base + key) % 26 + base)
        new_text += new_letter
    return new_text
