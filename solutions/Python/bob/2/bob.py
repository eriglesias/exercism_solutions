question_mark = "?"

def response(hey_bob):
    hey_bob = hey_bob.strip()  
    if not hey_bob:
        return "Fine. Be that way!"
    if hey_bob.endswith(question_mark):
        if hey_bob.isupper():
            return "Calm down, I know what I'm doing!"
        return "Sure."
    if hey_bob.isupper():
        return "Whoa, chill out!"
    return "Whatever."


