int	find(int x, int y, char **map, int *wh)
{
	map[y][x] = 'X';
	if (map[y - 1][x] == 'E' || map[y + 1][x] == 'E'
		|| map[y][x + 1] == 'E' || map[y][x - 1] == 'E')
		return (1);
	if ((map[y - 1][x] == '0' || map[y - 1][x] == 'C'))
	{
		if (find(x, y - 1, map, wh) == 1)
			return (1);
	}
	if ((map[y + 1][x] == '0' || map[y + 1][x] == 'C'))
	{
		if (find(x, y + 1, map, wh) == 1)
			return (1);
	}
	if ((map[y][x + 1] == '0' || map[y][x + 1] == 'C'))
	{
		if (find(x + 1, y, map, wh) == 1)
			return (1);
	}
	if ((map[y][x - 1] == '0' || map[y][x - 1] == 'C'))
	{
		if (find(x - 1, y, map, wh) == 1)
			return (1);
	}
	return (-1);
}
