def is_paired(input_string):
    stack = []
    brackets = {'[': ']', '{': '}', '(': ')'}

    for char in input_string:
        if char in brackets.keys():
            stack.append(char)
        elif char in brackets.values():
            if len(stack) == 0 or char != brackets[stack.pop()]:
                return False

    return len(stack) == 0
            
