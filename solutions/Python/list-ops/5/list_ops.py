def append(part1:list, part2:list)->list:
    return part1 + part2 


def concat(lists:list)->list:
    return [item for sublist in lists for item in sublist]

    
def filter(function:'Callable[[Any], bool]',  list:list)->list:
    return [element for element in list if function(element)]

    
def length(list: list) -> list:
    count = 0
    for element in list:
        count +=1
    return count 


def map(function, list):
    return [function(element) for element in list]
    

def foldl(function, list, initial):
    acc = initial
    for element in list:
        acc = function(acc, element)
    return acc 


def foldr(function, list, initial):
    return foldl(function, reverse(list), initial)


def reverse(list):
    return [element for element in list[::-1]]
