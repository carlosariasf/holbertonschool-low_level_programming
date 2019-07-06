#!/usr/bin/python3
"""Get perimeter
"""


def island_perimeter(grid):
    """Calculate the perimeter of island
    """
    sum = 0
    sides = 0
    for y in range(0, len(grid)):
        for x in range(0, len(grid[y])):
            if grid[y][x] is 1:
                if y > 0 and grid[y - 1][x]:
                    sides += 1
                if x > 0 and grid[y][x - 1]:
                    sides += 1
                if y < (len(grid) - 1) and grid[y + 1][x]:
                    sides += 1
                if x < (len(grid[0]) - 1) and grid[y][x + 1]:
                    sides += 1
                sum += 4 - sides
            sides = 0
    return sum
