def find_anagrams(word, candidates):
    sorted_word = sorted(word.lower())
    return list(filter(lambda candidate: candidate.lower() != word.lower() and len(candidate) == len(word) and sorted(candidate.lower()) == sorted_word, candidates))