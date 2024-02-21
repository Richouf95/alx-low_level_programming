#!/usr/bin/python3
"""
    Island Perimeter Module
"""


def island_perimeter(grid):
    """
        Calculate perimeter
    """
    landEdge = 0
    landSize = 0

    for y in range(len(grid)):
        for x in range(len(grid[0])):
            if grid[y][x] == 1:
                landSize += 1
                if x > 0 and grid[y][x - 1] == 1:
                    landEdge += 1
                if y > 0 and grid[y - 1][x] == 1:
                    landEdge += 1

    totalLandEdge = landEdge * 2
    totalLandeSize = landSize * 4
    perimeter = totalLandeSize - totalLandEdge

    return perimeter
