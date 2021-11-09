// JIHAN HAYA MUFIALDO

#include <ncurses\ncurses.h>
using namespace std;
int main(){
	initscr();
	
	char nama[20];
	char alamat[50];
	char hobi[10];
	
	getstr(nama);
	getstr(alamat);
	getstr(hobi);
	
	clear();
	
	mvprintw(12,38,"Nama\t:\t"); 
	printw(nama);
	mvprintw(13,38,"Alamat\t:\t");
	printw(alamat);
	mvprintw(14,38,"Hobi\t:\t");
	printw(hobi);
	
	refresh();
	getch();
	endwin();	
}
