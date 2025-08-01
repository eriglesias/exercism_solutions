def rotate(text, key):
    new_text = []
    for letter in text:
        base = ord('a') if 'a' <= letter <= 'z' else ord('A') if 'A' <= letter <= 'Z' else None
        new_letter = chr((ord(letter) - base + key) % 26 + base) if base else letter 
        new_text.append(new_letter)
    return ''.join(new_text)
