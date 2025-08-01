from typing import Callable, Any


def append(part1: list, part2: list) -> list:
    return part1 + part2


def concat(lists: list) -> list:
    return [item for sublist in lists for item in sublist]


def filter(function: Callable[[Any], bool], lst: list) -> list:
    return [element for element in lst if function(element)]


def length(lst: list) -> int:
    count = 0
    for element in lst:
        count += 1
    return count


def map(function: Callable[[Any], Any], lst: list) -> list:
    return [function(element) for element in lst]


def foldl(function: Callable[[Any, Any], Any], lst: list, initial: Any) -> Any:
    acc = initial
    for element in lst:
        acc = function(acc, element)
    return acc


def foldr(function: Callable[[Any, Any], Any], lst: list, initial: Any) -> Any:
    return foldl(function, list(reversed(lst)), initial)


def reverse(lst: list) -> list:
    return [element for element in lst[::-1]]