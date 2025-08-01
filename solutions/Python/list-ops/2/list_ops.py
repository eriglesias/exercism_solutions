def append(list1:list, list2:list)->list:
    return [*list1, *list2]

def concat(lists:list)->list:
    final_list = []
    for list in lists:
        final_list +=list
    return final_list


def filter(function:'Callable[[Any], bool]',  list:list)->list:
    empty = []
    for element in list:
        if function(element) ==True:
            empty.append(element)
        else:
            pass
    return empty


def length(list: list) -> list:
    return len(list)


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
