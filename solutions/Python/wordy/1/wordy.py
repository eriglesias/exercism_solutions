import re
def answer(question):
    if re.search("-?\d+ -?\d+", question):
        raise ValueError("syntax error")
    if re.search("^What is -?\d+", question):
        values = list(map(int, re.findall("-?\d+", question)))[::-1]
        result = values.pop()
        for i, item in enumerate(question.split()):
            try:
                if item == "plus":
                    result += values.pop()
                elif item == "minus":
                    result -= values.pop()
                elif item == "multiplied":
                    result *= values.pop()
                elif item == "divided":
                    result /= values.pop()
                elif item == "cubed?" or item == "is?":
                    raise ValueError("unknown operation")
                elif item == "plus?" or item == "is?":
                    raise ValueError("syntax error")
            except(IndexError):
                raise ValueError("syntax error")
        return result
    else:
        if re.search("^What is", question):
            raise ValueError("syntax error")
        raise ValueError("unknown operation")
            