import re

def abbreviate(words):
    cleaned_words = re.findall(r"\b[\w']+\b", words)
    acronym = [re.sub(r'[_-](\w)', r'\1', word) for word in cleaned_words]
    final_word = ''.join(word[0].upper() for word in acronym if word)
    return final_word