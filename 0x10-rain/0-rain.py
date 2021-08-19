#!/usr/bin/python3
"""
Leetcode - Holding rainwater question
"""


def rain(walls):
    """
    Given a list of non-negative integers representing
    the heights of walls with unit width 1, as if viewing
    the cross-section of a relief map, calculate how many
    square units of water will be retained after it rains.

    -  Prototype: def rain(walls)
    -  walls is a list of non-negative integers.
    -  Return: Integer indicating total amount of rainwater retained.
    -  Assume that the ends of the list (before index 0 and after
      index walls[-1]) are not walls, meaning they will
      not retain water If the list is empty return 0.
    """
    left, right = 0, len(walls) - 1
    left_wall = 0
    right_wall = 0
    water = 0

    while left < right:
        if walls[left] < walls[right]:
            if walls[left] > left_wall:
                left_wall = walls[left]
            else:
                water += left_wall - walls[left]
            left += 1
        else:
            if walls[right] > right_wall:
                right_wall = walls[right]
            else:
                water += right_wall - walls[right]
            right -= 1

    return water
