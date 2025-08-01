def append(part1:list, part2:list)->list:
    return part1 + part2 

def concat(lists:list)->list:
    final_list = []
    for list in lists:
        final_list += list
    return final_list


def filter(function:'Callable[[Any], bool]',  list:list)->list:
    filtered = []
    for element in list:
        if function(element):
            filtered.append(element)
    return filtered


def length(list: list) -> list:
    count = 0
    for element in list:
        count +=1
    return count 


def map(function, list):
    final_list = []
    for element in list:
        final_list.append(function(element))
    return final_list


def foldl(function, list, initial):
    acc = initial
    for element in list:
        acc = function(acc, element)
    return acc 


def foldr(function, list, initial):
    return foldl(function, reverse(list), initial)


def reverse(list):
    return [element for element in list[::-1]]
