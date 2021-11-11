#include <ncurses\ncurses.h>
#include <windows.h>

int ulang(){	

	for (int i=0;i<=4;i++){
			printw("+ ");
			refresh();
			Sleep(300);
	}	
}

int main (){
	initscr();
	
	while(true){

		for(int i=5;i<=20;i++){
			mvprintw(i,40,"+ ");
			refresh();
			Sleep(300);	
		}
		
		ulang();
		
		for (int i=19;i>=14;i--){
			mvprintw(i,50,"+ ");
			refresh();
			Sleep(300);
		}

		ulang();
		
		for(int i=15;i<=20;i++){
			mvprintw(i,60,"+ ");
			refresh();
			Sleep(300);	
		}
		
		ulang();
		
		for(int i=19;i>=5;i--){
			mvprintw(i,70,"+ ");
			refresh();
			Sleep(300);	
		}
		
		mvprintw(5,40,"+ ");
		refresh();
		Sleep(300);

		ulang();
		
		for(int i=6;i<=11;i++){
			mvprintw(i,50,"+ ");
			refresh();
			Sleep(300);	
		}
		
		ulang();
		
		for(int i=10;i>=5;i--){
			mvprintw(i,60,"+ ");
			refresh();
			Sleep(300);	
		}
		
		ulang();
		
		mvprintw(20,30,"J");
		refresh();
		Sleep(1000);
		
		mvprintw(20,35,"I");
		refresh();
		Sleep(1000);
		
		mvprintw(20,75,"A");
		refresh();
		Sleep(1000);
		
		mvprintw(20,80,"N");
		refresh();
		Sleep(5000);
		
		clear();
		
		mvprintw(13,40,"NAMA\t:\tJ H M");
		refresh();
		Sleep(2000);
		
		mvprintw(15,40,"NPM\t:\t1095");
		refresh();
		Sleep(4000);
		
		clear();
	}
	
	getch();
	endwin();
}
