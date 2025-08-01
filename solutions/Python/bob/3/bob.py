

def response(hey_bob):
    hey_bob = hey_bob.strip()
    question_mark = "?"
    response_variable = ""
    if not hey_bob:
        response_variable = "Fine. Be that way!"
    elif hey_bob.endswith(question_mark):
        if hey_bob.isupper():
            response_variable = "Calm down, I know what I'm doing!"
        else:
            response_variable = "Sure."
    elif hey_bob.isupper():
        response_variable = "Whoa, chill out!"
    else:
        response_variable = "Whatever."

    return response_variable


