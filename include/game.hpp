#ifndef _GAME_HPP_INCLUDE
#define _GAME_HPP_INCLUDE
class data
{
private:
    int x[16];
    int y[16];
    int zero;
protected:
    bool first;
    int first_seat_x;
    int first_seat_y;
    int first_value;
    bool second;
    int second_seat_x;
    int second_seat_y;
    int second_value;
    static int num[4][4];
    static int scorce;
    static int getrand(int,int);
public:
    data();
};

class tool: protected data
{
private:
    static int* down[4][4];
    static int* left[4][4];
    static int* right[4][4];
protected:
    int addrand(tool);
    static int add();
    static int selfcheck();
    static int add_direction();
    static void save();
public:
    tool();
};

class play: private tool
{
private:
    void print();
public:
    static int game();
};
#endif
