#!/usr/bin/python3
""" Function that returns the
    perimeter of the island described in grid
    0 represents water zone, 1 represents the land zone
    Args:
        grid (list): A list of list of integers representing an island.
    Returns:
        The perimeter of the island defined in grid.
"""


def island_perimeter(grid):
    """returns perimeter"""
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1

    perimeter = size * 4 - edges * 2
    
    return perimeter
