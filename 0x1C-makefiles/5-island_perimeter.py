#!/usr/bin/python3

"""
 Create a function def island_perimeter(grid): that returns the perimeter of
 the island described in grid
"""


def island_perimeter(grid):
    """
    Function that returns the perimeter of the island described in grid
    """
    row_len = len(grid)
    column_len = len(grid[0])

    perimeter = 0
    connections = 0

    for i in range(0, row_len):
        for j in range(0, column_len):
            if grid[i][j] == 1:
                perimeter += 4
                if i != 0 and grid[i - 1][j] == 1:
                    connections += 1
                if j != 0 and grid[i][j - 1] == 1:
                    connections += 1

    return perimeter - (connections * 2)
