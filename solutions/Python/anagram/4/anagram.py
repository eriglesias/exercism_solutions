find_anagrams = lambda word, candidates: [candidate for candidate in candidates if sorted(candidate.lower()) == sorted(word.lower()) and candidate.lower() != word.lower()]
