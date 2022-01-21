#include "../include/game.hpp"
#include <cstdlib>
#include <time.h>

int data::num[4][4] = {};
int data::scorce = 0;

int* tool::down[4][4] = {};
int* tool::left[4][4] = {};
int* tool::right[4][4] = {};

data::data()
{
    int r, s;
    zero = 0;
    for (int i = 0; i < 4; i++)
    {   
        for (int j = 0; j < 4; j++)
        {   
            if(num[i][j] == 0)
            {   
                x[zero] = i, y[zero] = j, zero ++;
            }
        }
    }
    if (zero < 1) 
    {
        first = 0, second = 0;
    }
    else if (zero < 2)
    {
        second = 0;
        r = getrand(0, 100);
        first = (r > 75);
        if (first) 
        {
            r = getrand(0, zero - 1);
            first_seat_x = x[r];
            first_seat_y = y[r];
            r = getrand(0, 100);
            first_value = (r > 95) ? 4 : 2;
        }
    }else if(zero < 3)
    {
        second = 0;
        r = getrand(0, 100);
        first = (r < 95);
        if(first)
        {
            r = getrand(0, zero - 1);
            first_seat_x = x[r];
            first_seat_y = y[r];
            r = getrand(0, 100);
            first_value = (r > 95) ? 4 : 2;
        }
    }else if(zero < 16)
    {
        r = getrand(0, 100);
        first = (r < 95);
        if (first) 
        {
            r = getrand(0, zero - 1);
            first_seat_x = x[r];
            first_seat_y = y[r];
            r = getrand(0, 100);
            first_value = (r > 95) ? 4 : 2;
            r = getrand(0, 100);
            second = (r > 95);
            if (second) 
            {
                s = getrand(0, zero - 2);
                s = (s >= r) ? s + 1 : s;
                second_seat_x = x[s];
                second_seat_y = y[s];
                s = getrand(0, 100);
                second_value = (s > 95) ? 4 : 2;
            }
        }
    }else{
        first = 1;
        r = getrand(0, zero - 1);
        first_seat_x = x[r];
        first_seat_y = y[r];
        r = getrand(0, 100);
        first_value = (r > 95) ? 4 : 2;
        r = getrand(0, 100);
        second = (r > 95);
        if (second) 
        {
            s = getrand(0, zero - 2);
            s = (s >= r) ? s + 1 : s;
            second_seat_x = x[s];
            second_seat_y = y[s];
            s = getrand(0, 100);
            second_value = (s > 95) ? 4 : 2;
        }
    }
}

int data::getrand(int m,int n)
{
    int rands;
    srand(time(0));
    rands = rand() % (n - m + 1) + m;
    return rands;
}

tool::tool()
{
    
}