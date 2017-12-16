#include <ncurses.h>
#include <unistd.h>
#include <stdio.h>

#include "engine.h"

void Screen_Test()
{
	int max_x;
	int max_y;
	getmaxyx(stdscr, max_y, max_x);
	mvprintw(0,0,"a");
	clear();
	printf("%d, %d\n", max_y, max_x);
	for (int y = 0; y < max_y; y = y + 1)
	{
		for (int x = 0; x < max_x; x = x + 1)
		{
			mvprintw(y, x, "a");
			refresh();
			sleep(0.1);
		}
	}

}

int Screen_Init() 
{
	printf("setting up screen.\n");
	initscr();
	noecho();
	curs_set(FALSE);
	return 0;
}

int Screen_Shutdown()
{
	endwin();
	return 0;
}