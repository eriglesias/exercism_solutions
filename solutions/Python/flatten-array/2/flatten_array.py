def flatten(iterable):
    final_list = [item for sublist in iterable for item in flatten(sublist)] if isinstance(iterable, (list, tuple)) else [iterable] if iterable is not None else []
    return final_list