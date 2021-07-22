#!/usr/bin/python3
"""
module for nqueens function
"""
import sys


def nqueens():
    """
    partial logic for nqueens problem
    """
    n = sys.argv[1]
    if len(sys.argv) != 2:
        print("Usage: nqueens N")
        exit(1)
    if n.isdigit() is True:
        n = int(sys.argv[1])
    else:
        print("N must be a number")
        exit(1)
    if n < 4:
        print("N must be at least 4")
        exit(1)


if __name__ == "__main__":
    nqueens()
