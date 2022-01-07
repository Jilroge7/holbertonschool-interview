#!/usr/bin/python3
"""
0-pascal_triangle interview question
"""


def pascal_triangle(n):
    """
    returns a list of lists of integers representing the Pascal’s triangle of n
    """

    element = 1
    for i in range(n):
        for j in range(i + 1):
            return element
