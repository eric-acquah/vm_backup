"""
Trarceback test
"""

def err():
    """
    >>> err()
    Traceback (most recent call last):
    RuntimeError: That's an error
    """
    raise RuntimeError("That's an error")

if __name__ == "__main__":
    import doctest
    doctest.testmod()
