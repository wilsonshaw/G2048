#include "../include/game.hpp"
#include <cstdlib>
#include <time.h>

int game_basic::num[4][4] = {};
int game_basic::scorce = 0;

int game_basic::getrand(int m,int n)
{
    int rands;
    srand(time(0));
    rands = rand() % (n - m + 1) + m;
    return rands;
}

tool* tool::space()
{
    tool* ran = new tool();
    for (int i = 0, k = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (num[i][j] == 0)
            {
                ran -> zero ++;
                ran -> x[k] = i, ran -> y[k] = j, k++;
            }
        }
    }
    return ran;
}

game_basic::game_basic()
{
    for (int i = 0; i < 16; i++)
    {
        x[i] = 0, y[i] = 0;
    }
    zero = 0;
}

int tool::addrand()
{
    tool* ran = space();
    int r1, r2, s1, s2, m = 100;
    if (ran->zero > 2)
    {
        if (zero == 16) m += 1;
        r1 = getrand(0, ran->zero - 1);
        r2 = getrand(0, ran->zero - 2);
        if (r2 >= r1) r2 += 1;
        s1 = getrand(0, 100);
        s2 = getrand(0, 100);
        if (s1 > 0) num[ran->x[r1]][ran->y[r1]] = 2;
        else if (s1 > 97 && s1 < m) num[ran->x[r1]][ran->y[r1]] = 4;
    } 
    return 0;
}
