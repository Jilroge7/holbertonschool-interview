#!/usr/bin/python3
"""
task 0 algo
"""


def island_perimeter(grid):
    """
    func to find island perimeter
    """
    land = 0
    coast = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                land += 1
                if i > 0 and grid[i - 1][j] == 1:
                    coast += 1
                if j > 0 and grid[i][j - 1] == 1:
                    coast += 1
    return (land * 4) - (coast * 2)
