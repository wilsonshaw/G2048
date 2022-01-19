#ifndef _GAME_HPP_INCLUDE
#define _GAME_HPP_INCLUDE
class game_basic
{
protected:
    static int num[4][4];
    static int scorce;
    static int getrand();
};

class tool: protected game_basic
{
protected:
    virtual void pixel() = 0;
    static int addrand();
    static int add();
    static int selfcheck();
    static int add_direction();
    static void save();
};

class play: private tool
{
protected:
    virtual void pixel();
public:
    static int game();
    play();
};
#endif
