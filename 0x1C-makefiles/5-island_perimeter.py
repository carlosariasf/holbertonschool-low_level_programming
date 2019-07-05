#!/usr/bin/python3
"""Get perimeter
"""


def island_perimeter(grid):
    """Calculate the perimeter of island
    """
    square = 0
    sum = 0
    pos = []
    for y in range(len(grid)):
        for x in range(len(grid[y])):
            if grid[y][x] is 1:
                pos.append(x)
                pos.append(y)
    square = (len(pos) / 2) * 4
    for k in range(len(pos) - 2):
        if pos[k] == pos[k + 2]:
            sum += 2
    return(int(square - sum))
