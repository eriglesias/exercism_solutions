def find_anagrams(word, candidates):
    len_word = len(word)
    possible_candidates = []
    for word_ex in candidates:
        if len_word == len(word_ex) and word.lower() != word_ex.lower():
            possible_candidates.append(word_ex)

    anagrams = []
    for candidate in possible_candidates:
        if sorted(word.lower()) == sorted(candidate.lower()):
            anagrams.append(candidate)

    return anagrams