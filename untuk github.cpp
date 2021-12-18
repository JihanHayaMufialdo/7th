#include <ncurses\ncurses.h>
#include <windows.h>
using namespace std;

int main(){
	
	
	initscr();
	
	for (int i=0;i<=3;i++){
		
		mvprintw(15,35,"Loading");
		
		mvprintw(15,42,".");
		refresh();
		Sleep(300);
		
		mvprintw(15,43,".");
		refresh();
		Sleep(300);
			
		
		
	}
	
	getch();
	endwin();
	
}
