from itertools import zip_longest

def transpose(text: str) -> str:
    if "\n" not in text:
        return "\n".join(list(text))
    # preserve pre-existing spaces
    lines = text.replace(" ", "_").splitlines()
    # transpose rows to columns
    transposed = "\n".join(("".join(i).rstrip() for i in zip_longest(*lines, fillvalue=" ")))
    # restore pre-existing spaces
    return transposed.replace("_", " ")