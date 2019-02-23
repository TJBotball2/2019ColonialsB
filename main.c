#include <kipr/botball.h>

#define UP 550
#define DOWN 1870


#define LEFT 0
#define RIGHT 1

#define LC -100
#define RC 100

void fwd(int power, int delay)
{
    mav(LEFT, 15*power - LC);
    mav(RIGHT, -15*power + RC);

    msleep(delay);

    mav(LEFT, 0);
    mav(RIGHT, 0);
}

void left(int delay, int point)
{
    if (point)
    {
        mav(LEFT, -1000);
    mav(RIGHT, -1000);
    }
    else
    {
        mav(RIGHT, -1000);
        mav(LEFT, 0);
    }

    msleep(delay);

    mav(LEFT, 0);
    mav(RIGHT, 0);
}

int main()
{
    printf("Hello World\n");
    return 0;
}
