def find(search_list, value):
    low, high = 0, len(search_list) - 1

    while low <= high:
        mid = (low + high) // 2
        if search_list[mid] == value:
            return mid
        elif search_list[mid] < value:
            low = mid + 1
        else:
            high = mid - 1

    raise ValueError("value not in array")