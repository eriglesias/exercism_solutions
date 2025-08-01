VOWELS = {"a", "e", "i", "o", "u"}
VOWELS_Y = {"a", "e", "i", "o", "u", "y"}
SPECIALS = {"xr", "yt"}

def translate(text):
    piggyfied = []
    for word in text.split():
        if word[0] in VOWELS or word[:2] in SPECIALS:
            piggyfied.append(word + "ay")
        else:
            for pos in range(1, len(word)):
                letter = word[pos]
                if letter in VOWELS_Y:
                    if letter == 'u' and word[pos-1] == "q":
                        pos += 1
                    piggyfied.append(word[pos:] + word[:pos] + "ay")
                    break
    return " ".join(piggyfied)