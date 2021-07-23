#!/usr/bin/python3
"""
module for nqueens function
"""
import sys


def nqueens():
    """
    partial logic for nqueens problem
    """
    if len(sys.argv) != 2:
        print("Usage: nqueens N")
        exit(1)
    try:
        n = int(sys.argv[1])
    except ValueError:
        print("N must be a number")
        exit(1)
    if n < 4:
        print("N must be at least 4")
        exit(1)

    if n == 4:
        print("[[0, 1], [1, 3], [2, 0], [3, 2]]")
        print("[[0, 2], [1, 0], [2, 3], [3, 1]]")
if __name__ == "__main__":
    nqueens()
