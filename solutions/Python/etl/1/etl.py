def transform(legacy_data):
    """Transform scrabble scores from old format to new format."""
    new_data = {letter.lower(): score for score, letters in legacy_data.items() for letter in letters}
    return new_data