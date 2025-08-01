import re
def is_pangram(sentence):
    for ele in sentence:
        if ele.isdigit():
            sentence = sentence.replace(ele,"")
    parsed = sentence.lower().replace(" ", "").replace("_","").replace(".","").replace("''","")
    parsed = re.sub(r'[^\w\s]', '', parsed)
    alphabet = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']
    c = ""
    if parsed == "":
        return False
    for char in parsed:
        if char not in c:
            c= c + char
    if len(alphabet) == len(c):
        return True
    return False