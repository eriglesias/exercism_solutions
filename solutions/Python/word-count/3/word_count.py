import re
from collections import Counter

word_pattern = re.compile(r"[a-z0-9]+(?:'[a-z]+)?")

def count_words(sentence):
    words = (match.group() for match in word_pattern.finditer(sentence.lower()))
    return Counter(words)