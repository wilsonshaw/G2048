#ifndef _GAME_HPP_INCLUDE
#define _GAME_HPP_INCLUDE
class data
{
protected:
    static int num[4][4];
    static int scorce;
};

class tool: protected data
{
private:
    int x[16];
    int y[16];
    int zero;
    bool first;
    int first_seat_x;
    int first_seat_y;
    int first_value;
    bool second;
    int second_seat_x;
    int second_seat_y;
    int second_value;
    static int* down[4][4];
    static int* left[4][4];
    static int* right[4][4];
    static int getrand(int, int);
    static int TransScorces(int*);
protected:
    static bool runConditionJudgement;
    static bool gameEndConditionJudgement;
    static bool AddRand(tool);
    static bool AddRule(int*[][4]);
    static bool AddRule();
    static bool Add(char);
public:
    tool();
};

class UI: private tool
{
private:
public:
    static int Game();
    static void PrintGame();
};
#endif
