#!/usr/bin/python3

"""
Practicing the doctest module

"""

def simple(a, b):
    """
    Args:
        a - first operand
        b - second operand

    `test with numbers only`
    >>> simple(3, 2)
    6

    `test with a char as the first operand`
    >>> simple('a', 2)
    'aa'

    Return:
        The product of multiplying `a` by `b`
    """
    return a * b

if __name__ == "__main__":
    import doctest
    doctest.testmod()
