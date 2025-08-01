def is_valid(isbn):
    isbn = isbn.replace("-", "")

    if len(isbn) != 10:
        return False

    if not isbn[:-1].isdigit() or (not isbn[-1].isdigit() and isbn[-1] != 'X'):
        return False

    checksum = sum(int(isbn[i]) * (10 - i) for i in range(9))
    if isbn[-1] == 'X':
        checksum += 10
    else:
        checksum += int(isbn[-1])

    return checksum % 11 == 0