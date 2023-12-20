#!/usr/bin/python3
""" returns the perimeter of the island described in grid"""


def island_perimeter(grid):
    """ fkflkaj"""
    width = len(grid)
    perimeter = 0
    for i in range(width):
        length = len(grid[i])
        for j in range(length):
            up, down, left, right = (1, 1, 1, 1)
            if i != 0:
                up = not (grid[i - 1][j])
            if i + 1 != width:
                down = not (grid[i + 1][j])
            if j != 0:
                left = not (grid[i][j - 1])
            if j + 1 != length:
                right = not (grid[i][j + 1])
            perimeter += grid[i][j] * (up + down + left + right)
    return perimeter
