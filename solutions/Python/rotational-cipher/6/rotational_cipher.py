def rotate(text, key):
    new_text = []
    for letter in text:
        base = ord('a') if 'a' <= letter <= 'z' else ord('A') if 'A' <= letter <= 'Z' else None
        if base is not None:
            new_text.append(chr((ord(letter) - base + key) % 26 + base))
        else:
            new_text.append(letter)
    return ''.join(new_text)