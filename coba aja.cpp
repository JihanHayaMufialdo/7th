#include <ncurses\ncurses.h>
#include <windows.h>

int main(){

initscr();
	
	for(int i=0; i<=4; i++){
		mvprintw(i,i,"J");
		refresh();
		Sleep(300);
	}
	
	for(int i=1; i<=5; i++){
		mvprintw(i,i+2,"I");
		refresh();
		Sleep(300);
	}
	
	for(int i=2; i<=6; i++){
		mvprintw(i,i+4,"H");
		refresh();
		Sleep(300);
	}
	
	for(int i=3; i<=7; i++){
		mvprintw(i,i+6,"A");
		refresh();
		Sleep(300);
	}
	
	for(int i=4; i<=8; i++){
		mvprintw(i,i+8,"N");
		refresh();
		Sleep(300);
	}
	
getch();
endwin();
}		
	
