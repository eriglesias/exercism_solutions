def abbreviate(words):
    punctuation = '!"#$%&\'()*+,./:;<=>?@[\\]^_`{|}~'
    cleaned_words = ''.join(char for char in words if char not in punctuation).split()
    acronym = []
    for word in cleaned_words:
        if '-' in word:
            sub_words = word.split('-')
            for sub_word in sub_words:
                if sub_word:
                    acronym.append(sub_word[0].upper())
        else:
            if word:
                acronym.append(word[0].upper())
    final_word = ''.join(acronym)
    return final_word