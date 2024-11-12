#include <ncurses.h>
#include "base.h"
int main(){
    initscr();
    printw("Hello World");
    refresh();
    getch();
    endwin();
}
