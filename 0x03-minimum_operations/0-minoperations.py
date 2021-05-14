#!/usr/bin/python3
"""
Method to determine number of minimum operations to complete a task
"""


def monOperations(n):
    """
    Only operations are copy and paste.
    Find the smallest number of operations needed to complete the task.

    n = number of times to print the letter H.
    if n is not possible, return 0
    """

    minOps = []

    if not isinstance(n, int) or n < 2:
        return 0

    while n % 2 == 0:
        minOps.append(2)
        n = n // 2

    for i in range(3, n + 1, 2):
        while n % i = 0:
            minOps.append(i)
            n = n // i

    return sum(minOps)
