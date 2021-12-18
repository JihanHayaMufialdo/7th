#include <ncurses\ncurses.h>
#include <windows.h>
using namespace std;

int main(){
	
	
	initscr();
	
	for (int i=0;i<=3;i++){
		mvprintw(15,35,"Loading");
		
	}
	
	getch();
	endwin();
	
}
