from typing import Callable, Any
from typing import TypeVar
T = TypeVar("T")


def append(part1: list[T], part2: list[T]) -> list[T]:
    return concat([part1, part2])


def concat(lists: list[T]) -> list[T]:
    return [item for sublist in lists for item in sublist]


def filter(function: Callable[[Any], bool], lst: list[T]) -> list[T]:
    return [element for element in lst if function(element)]


def length(lst: list[T]) -> int:
    return sum(1 for element in lst)

def map(function: Callable[[Any], Any], lst: list) -> list:
    return [function(element) for element in lst]


def foldl(function: Callable[[Any, Any], Any], lst: list[T], initial: Any) -> Any:
    acc = initial
    for element in lst:
        acc = function(acc, element)
    return acc


def foldr(function: Callable[[Any, Any], Any], lst: list[T], initial: Any) -> Any:
    return foldl(function, list(reversed(lst)), initial)


def reverse(lst: list[T]) -> list[T]:
    return lst[::-1]