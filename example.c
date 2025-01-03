#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	find(int x, int y, char **map, int wh[], char exit);

char **map_duplicate(char **map, int height)
{
    int  i = 0;
    char **map2;

    map2 = malloc((height + 1) * sizeof(char *));
    while (i < height)
    {
        map2[i] = strdup(map[i]); 
        i++;
    }
    map2[i] = NULL;
    return (map2);
}

int main(void)
{
    char *map[] =
    {
        "111111111111111111111",
        "1P0000000000000000001",
        "111011001111100000111",
        "111111000111100011111",
        "111111100111111111111",
        "1000000000000000000E1",
        "111111111111111111111"
    };
    int wh[2] = {22,7};
    if (find(1, 1, map_duplicate(map, wh[1]), wh, 'E') == 1)
        printf("valid\n");
    else
        printf("not valid\n");
}