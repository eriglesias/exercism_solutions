"""Functions which helps the locomotive engineer to keep track of the train."""


def get_list_of_wagons(*args):
    """Return a list of wagons.

    :param: arbitrary number of wagons.
    :return: list - list of wagons.
    """
    return list(args)


def fix_list_of_wagons(each_wagons_id, missing_wagons):
    """Fix the list of wagons.

    :parm each_wagons_id: list - the list of wagons.
    :parm missing_wagons: list - the list of missing wagons.
    :return: list - list of wagons.
    """
    fixed_wagons_id = *each_wagons_id[2:], *each_wagons_id[0:2]
    mega_fix = *missing_wagons, *fixed_wagons_id
    mega_fix = [wagon for wagon in mega_fix if wagon != 1]
    mega_fix = [1] + mega_fix
    return mega_fix


def add_missing_stops(routing_dict, **kwargs):
    """Add missing stops to route dict.

    :param route: dict - the dict of routing information.
    :param: arbitrary number of stops.
    :return: dict - updated route dictionary.
    """
    stops = []
    for key, value in kwargs.items():
        if key.startswith('stop_'):
            stops.append(value)
    routing_dict['stops'] = stops
    return routing_dict



def extend_route_information(route, more_route_information):
    """Extend route information with more_route_information.

    :param route: dict - the route information.
    :param more_route_information: dict -  extra route information.
    :return: dict - extended route information.
    """
    final_route = {**route, **more_route_information}
    return (final_route)


def fix_wagon_depot(wagons_rows):
    """Fix the list of rows of wagons.

    :param wagons_rows: list[list[tuple]] - the list of rows of wagons.
    :return: list[list[tuple]] - list of rows of wagons.
    """
    fixed_grid = []
    for wagons in zip(*wagons_rows):
        fixed_row = list(wagons)
        fixed_grid.append(fixed_row)
    return fixed_grid
