def rotate(text, key):
    new_text = ""
    for letter in text:
        base = ord('a') if letter.islower() else ord('A') if letter.isupper() else None
        new_letter = chr((ord(letter) - base + key) % 26 + base) if base else letter 
        new_text += new_letter
    return new_text
