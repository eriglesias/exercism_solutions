import time
from datetime import datetime, timedelta

gigasecond = 10**9

def add(moment):
    """Calculates the date and time one gigasecond after a given moment."""
    moment = moment + timedelta(seconds=gigasecond)
    return moment
