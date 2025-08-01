def flatten(iterable):
    final_list = []
    for item in iterable:
        if isinstance(item, (list, tuple)):
            final_list.extend(flatten(item))
        elif item is not None:
            final_list.append(item)
    return final_list