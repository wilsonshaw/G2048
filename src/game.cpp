#include "../include/game.hpp"
#include <cstdio>
#include <cstdlib>
#include <conio.h>
#include <iostream>
#include <time.h>
#include <Windows.h>

int data::num[4][4] = {};
int data::scorce = 0;

int* tool::down[4][4] = {};
int* tool::left[4][4] = {};
int* tool::right[4][4] = {};
bool tool::runConditionJudgement = false;
bool tool::gameEndConditionJudgement = false;

int tool::getrand(int m,int n)
{
    int rands;
    srand(time(0));
    rands = rand() % (n - m + 1) + m;
    return rands;
}

int tool::TransScorces(int* transNum)
{
    int getScorces;
    for (getScorces = 0; *transNum >> getScorces > 0; getScorces++);
    return getScorces * 2 * 10;
}

tool::tool()
{
    //根据宫格情况随机为宫格添加非零值
    int r, s;
    zero = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (num[i][j] == 0)
            {
                x[zero] = i, y[zero] = j, zero++;
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
        first = (r < 95);
        if (first)
        {
            r = getrand(0, zero - 1);
            first_seat_x = x[r];
            first_seat_y = y[r];
            r = getrand(0, 100);
            first_value = (r > 95) ? 4 : 2;
        }
    }
    else if (zero < 3)
    {
        second = 0;
        r = getrand(0, 100);
        first = (r < 95);
        if (first)
        {
            r = getrand(0, zero - 1);
            first_seat_x = x[r];
            first_seat_y = y[r];
            r = getrand(0, 100);
            first_value = (r > 95) ? 4 : 2;
        }
    }
    else if (zero < 16)
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
    }
    else {
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
    //储存控制加数方向的函数
    static long toolRunTimes = 0;
    if (toolRunTimes == 0)
    {
        for (int arrayRow = 3, anotherArrRow = 0; arrayRow > -1; arrayRow--, anotherArrRow++)
        {
            for (int arrayColumn = 3, anotherArrColumn = 0; arrayColumn > -1; arrayColumn--, anotherArrColumn++)
            {
                down[anotherArrRow][anotherArrColumn] = &num[arrayRow][arrayColumn];
            }
        }
        for (int arrRow = 0, srcArrColumn = 0; arrRow < 4; arrRow++, srcArrColumn++)
        {
            for (int arrColumn = 0, srcArrRow = 3; arrColumn < 4; arrColumn++, srcArrRow--)
            {
                left[arrRow][arrColumn] = &num[srcArrRow][srcArrColumn];
            }
        }
        for (int arrRow = 0, srcArrColumn = 3; arrRow < 4; arrRow++, srcArrColumn--)
        {
            for (int arrColumn = 0, srcArrRow = 0; arrColumn < 4; arrColumn++, srcArrRow++)
            {
                right[arrRow][arrColumn] = &num[srcArrRow][srcArrColumn];
            }
        }
    }
    //自检程序
    int meetConditions = 0;
    if (zero == 0)
    {
        for (int srcArr = 0; srcArr < 16; srcArr++)
        {
            for (int compareArr = srcArr + 1; compareArr < 16; compareArr++)
            {
                if (*(num[0] + srcArr) == *(num[0] + compareArr) && ((compareArr % 4 - srcArr % 4 == 1 && compareArr / 4 == srcArr / 4) || (compareArr / 4 - srcArr / 4 == 1 && compareArr % 4 == srcArr % 4)))
                {
                    meetConditions++;
                }
            }
        }
        if (meetConditions == 0)
        {
            gameEndConditionJudgement = true;
        }
    }
    toolRunTimes++;
}

bool tool::AddRand(tool gameData)
{
    if (!runConditionJudgement || gameEndConditionJudgement)
    {
        return false;
    }
    if (gameData.first)
    {
        num[gameData.first_seat_x][gameData.first_seat_y] = gameData.first_value;
        if (gameData.second)
        {
            num[gameData.second_seat_x][gameData.second_seat_y] = gameData.second_value;
        }
    }
    return true;
}

bool tool::AddRule()
{
    //向前缩进
    int transferStation[4][4] = {};
    int dataSeatChangeTimes = 0;
    for (int arrColumn = 0; arrColumn < 4; arrColumn++)
    {
        for (int srcArrRow = 0, transferArrRow = 0; srcArrRow < 4; srcArrRow++)
        {
            if (num[srcArrRow][arrColumn] != 0)
            {
                transferStation[transferArrRow][arrColumn] = num[srcArrRow][arrColumn];
                if (srcArrRow != transferArrRow)
                {
                    dataSeatChangeTimes++;
                }
                transferArrRow++;
            }
        }
    }
    //判定缩进是否发生，若发生则AddRand函数可继续被调用
    runConditionJudgement = (dataSeatChangeTimes != 0);
    //合并等项，并按值大小进行加分
    dataSeatChangeTimes = 0;
    for (int arrRow = 0; arrRow < 3; arrRow++)
    {
        for (int arrColumn = 0; arrColumn < 4; arrColumn++)
        {
            if (transferStation[arrRow + 1][arrColumn] == transferStation[arrRow][arrColumn])
            {
                transferStation[arrRow][arrColumn] = transferStation[arrRow][arrColumn] << 1;
                transferStation[arrRow + 1][arrColumn] = 0;
                if (transferStation[arrRow][arrColumn] != 0)
                {
                    dataSeatChangeTimes++;
                    scorce += TransScorces(&transferStation[arrRow][arrColumn]);
                }
            }
        }
    }
    if (!runConditionJudgement)
    {
        runConditionJudgement = (dataSeatChangeTimes != 0);
    }
    if (!runConditionJudgement || gameEndConditionJudgement)
    {
        return false;
    }
    //数组清零
    for (int arrRow = 0; arrRow < 4; arrRow++)
    {
        for (int arrColumn = 0; arrColumn < 4; arrColumn++)
        {
            num[arrRow][arrColumn] = 0;
        }
    }
    //合并等值之后，进行第二次缩进
    for (int arrColumn = 0; arrColumn < 4; arrColumn++)
    {
        for (int srcArrRow = 0, transferArrRow = 0; transferArrRow < 4; transferArrRow++)
        {
            if (transferStation[transferArrRow][arrColumn] != 0)
            {
                num[srcArrRow][arrColumn] = transferStation[transferArrRow][arrColumn];
                srcArrRow++;
            }
        }
    }
    return true;
}

bool tool::AddRule(int* direction[][4])
{
    //向前缩进
    int transferStation[4][4] = {};
    int dataSeatChangeTimes = 0;
    for (int arrColumn = 0; arrColumn < 4; arrColumn++)
    {
        for (int srcArrRow = 0, transferArrRow = 0; srcArrRow < 4; srcArrRow++)
        {
            if (*direction[srcArrRow][arrColumn] != 0)
            {
                transferStation[transferArrRow][arrColumn] = *direction[srcArrRow][arrColumn];
                if (srcArrRow != transferArrRow)
                {
                    dataSeatChangeTimes++;
                }
                transferArrRow++;
            }
        }
    }
    //判定缩进是否发生，若发生则AddRand函数可继续被调用
    runConditionJudgement = (dataSeatChangeTimes != 0);
    //合并等项，并按值大小进行加分
    dataSeatChangeTimes = 0;
    for (int arrRow = 0; arrRow < 3; arrRow++)
    {
        for (int arrColumn = 0; arrColumn < 4; arrColumn++)
        {
            if (transferStation[arrRow + 1][arrColumn] == transferStation[arrRow][arrColumn])
            {
                transferStation[arrRow][arrColumn] = transferStation[arrRow][arrColumn] << 1;
                transferStation[arrRow + 1][arrColumn] = 0;
                if (transferStation[arrRow][arrColumn] != 0)
                {
                    dataSeatChangeTimes++;
                    scorce += TransScorces(&transferStation[arrRow][arrColumn]);
                }
            }
        }
    }
    if (!runConditionJudgement)
    {
        runConditionJudgement = (dataSeatChangeTimes != 0);
    }
    if (!runConditionJudgement || gameEndConditionJudgement)
    {
        return false;
    }
    //数组清零
    for (int arrRow = 0; arrRow < 4; arrRow++)
    {
        for (int arrColumn = 0; arrColumn < 4; arrColumn++)
        {
            num[arrRow][arrColumn] = 0;
        }
    }
    //合并等值之后，进行第二次缩进
    for (int arrColumn = 0; arrColumn < 4; arrColumn++)
    {
        for (int srcArrRow = 0, transferArrRow = 0; transferArrRow < 4; transferArrRow++)
        {
            if (transferStation[transferArrRow][arrColumn] != 0)
            {
                *direction[srcArrRow][arrColumn] = transferStation[transferArrRow][arrColumn];
                srcArrRow++;
            }
        }
    }
    return true;
}

bool tool::Add(char keys)
{
    switch ((int)keys)
    {
    case 'w':
        AddRule();
        break;
    case 's':
        AddRule(down);
        break;
    case 'a':
        AddRule(left);
        break;
    case 'd':
        AddRule(right);
        break;
    default:
        return false;
        break;
    }
    return true;
}

int UI::Game()
{
    static int runTimes = 0;
    char keys = 0;
    if (runTimes == 0)
    {
        runTimes++;
        runConditionJudgement = true;
        tool nthRound;
        AddRand(nthRound);
    }
    PrintGame();
    while (!gameEndConditionJudgement)
    {
        keys = _getch();
        if (Add(keys))
        {
            tool nthRound;
            AddRand(nthRound);
            PrintGame();
        }
    }
    return 0;
}

void UI::PrintGame()
{
    system("cls");
    printf("\n\n  ");
    for (int arrRow = 0; arrRow < 4; arrRow++)
    {
        for (int arrColumn = 0; arrColumn < 4; arrColumn++)
        {
            printf("%4d  ", num[arrRow][arrColumn]);
        }
        printf("\n\n  ");
    }
    printf("%d", scorce);
}