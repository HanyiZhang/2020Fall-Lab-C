#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

const char msg_done[] = "Your skill and expertise has foiled my plans. Congrats on defusing my bomb!\n";
const char msg_ex[] = "BOOM!\nThe bomb has blown up.\n";

void explode_bomb()
{
    puts(msg_ex);
    exit(0);
}

int phase1()
{
    int x;
    scanf(" %d", &x);
    if (x != INT32)
        explode_bomb();
    return 0;
}

int phase2()
{
    volatile int x, y;
    scanf(" %d %d", &x, &y);
    if (x != INT32)
        explode_bomb();
    if (x + y != INT32)
        explode_bomb();
    return 0;
}

int phase3()
{
    char buf[256];
    scanf(" %[^\n]", buf);
    if(strcmp(buf, STRING))
        explode_bomb();
    return 0;
}

int phase4()
{
    int x, i, sum;
    scanf(" %d", &x);

    sum = 0;
    i = 0;
    while (i < x)
       sum += i++; 
    
    if (sum != SUMLOOP_C)
        explode_bomb();

    puts(msg_done);
    return 0;
}
