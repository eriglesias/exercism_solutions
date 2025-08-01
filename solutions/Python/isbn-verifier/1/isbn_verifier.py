def is_valid(isbn):
    isbn = isbn.replace("-", "")
    if len(isbn) != 10:
        return False

    checksum = 0
    for i in range(9):
        if not isbn[i].isdigit():
            return False
        checksum += int(isbn[i]) * (10 - i)
    last_digit = isbn[-1]
    if last_digit == "X":
        checksum += 10
    elif last_digit.isdigit():
        checksum += int(last_digit)
    else:
        return False

    return checksum % 11 == 0

print(is_valid("3-598-21508-8"))