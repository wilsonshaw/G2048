#ifndef _GAME_HPP_INCLUDE
#define _GAME_HPP_INCLUDE
class game_basic
{
protected:
    int x[16];
    int y[16];
    int zero;
    static int num[4][4];
    static int scorce;
    int getrand(int m,int n);
public:
    game_basic();
};

class tool: protected game_basic
{
protected:
    void pixel();
    tool* space();
    int addrand();
    static int add();
    static int selfcheck();
    static int add_direction();
    static void save();
};

class play: private tool
{
public:
    static int game();
    play();
};
#endif
