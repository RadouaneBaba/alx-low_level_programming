#!/usr/bin/python3
""" module of island perimeter """


def island_perimeter(grid):
    """ return perimter of island described by grid """
    p = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                p += 4
                if i != 0:
                    p -= grid[i - 1][j]
                if i != len(grid) - 1:
                    p -= grid[i + 1][j]
                if j != 0:
                    p -= grid[i][j - 1]
                if j != len(grid[i]) - 1:
                    p -= grid[i][j + 1]

    return p
