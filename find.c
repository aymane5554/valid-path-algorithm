#include <stdio.h>
// int x and int y for player's x and y coordinates.
// char **map should not be an array of literal strings or it will produce a segmentation fault.
// int *wh an array where wh[0] is width and wh[1] is height of the map.
// char exit is the character that your are searching for.
// '0' is considered floor and '1' wall.
// !! borders are necessary !!
int	find(int x, int y, char **map, int wh[], char exit)
{
	if (y - 1 < 0 || x - 1 < 0 || x + 1 >= wh[0] || y + 1 >= wh[1])
		return (-1);
	map[y][x] = 'X';
	if (map[y - 1][x] == exit || map[y + 1][x] == exit || map[y][x + 1] == exit || map[y][x - 1] == exit)
		return (1);
	if (map[y - 1][x] == '0')
	{
		if (find(x, y - 1, map, wh, exit) == 1)
			return (1);
	}
	if (map[y + 1][x] == '0')
	{
		if (find(x, y + 1, map, wh, exit) == 1)
			return (1);
	}
	if (map[y][x + 1] == '0')
	{
		if (find(x + 1, y, map, wh, exit) == 1)
			return (1);
	}
	if (map[y][x - 1] == '0')
	{
		if (find(x - 1, y, map, wh, exit) == 1)
			return (1);
	}
	return (-1);
}
