"""Functions to keep track and alter inventory."""


def create_inventory(items):
    """Create a dict that tracks the amount (count) of each element on the `items` list.

    :param items: list - list of items to create an inventory from.
    :return: dict - the inventory dictionary.
    """

    inventory = {}
    for inventory_item in items:
        if inventory_item not in inventory:
            inventory[inventory_item] = 1
        else:
            inventory[inventory_item] += 1

    return inventory


def add_items(inventory, items):
    """Add or increment items in inventory using elements from the items `list`.

    :param inventory: dict - dictionary of existing inventory.
    :param items: list - list of items to update the inventory with.
    :return: dict - the inventory updated with the new items.
    """

    
    for inventory_item in items:
        if inventory_item in inventory:
            inventory[inventory_item] += 1 
        else:
            inventory[inventory_item] = 1
    return inventory


def decrement_items(inventory, items):
    """Decrement items in inventory using elements from the `items` list.

    :param inventory: dict - inventory dictionary.
    :param items: list - list of items to decrement from the inventory.
    :return: dict - updated inventory with items decremented.
    """

    for item in items:
        if item in inventory and inventory[item] > 0:
            inventory[item] -= 1
    return inventory


def remove_item(inventory, item):
    """Remove item from inventory if it matches `item` string.

    :param inventory: dict - inventory dictionary.
    :param item: str - item to remove from the inventory.
    :return: dict - updated inventory with item removed. Current inventory if item does not match.
    """
    if item in inventory:
        del inventory[item]
    return inventory

def list_inventory(inventory):
    """Create a list containing all (item_name, item_count) pairs in inventory.

    :param inventory: dict - an inventory dictionary.
    :return: list of tuples - list of key, value pairs from the inventory dictionary.
    """

    available_items = [(item, quantity) for item, quantity in inventory.items() if quantity > 0 ]
    return available_items 
