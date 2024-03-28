#!/usr/bin/python3
"""Defines island perimeter measuring function."""


def island_perimeter(grid):
    """Return perimiter of an island.

    The grid represents water by 0 and land by 1.

    Args:
        grid (list): list of list of integers representing an island.
    Returns:
        perimeter of the island defined in grid.
    """
    w = len(grid[0])
    h = len(grid)
    edg = 0
    s = 0

    for i in range(h):
        for j in range(w):
            if grid[i][j] == 1:
                s += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edg += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edg += 1
    return s * 4 - edg * 2
