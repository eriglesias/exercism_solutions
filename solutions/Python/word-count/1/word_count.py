import re

def count_words(sentence):
    words = re.findall(r"[a-z0-9]+(?:'[a-z]+)?", sentence.lower())
    count = {}
    for word in words:
        count[word] = count.get(word, 0) + 1
    return(count)