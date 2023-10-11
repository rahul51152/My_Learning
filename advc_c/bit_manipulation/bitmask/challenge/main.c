//write a programm taht contains the folloving bit field in the a structure
//the box can opaque or transparent
//color : black, red, green, yellow, blue,magenta,cyan or white
//border can shown or hidden
//boarder color is selected from the same palette used for the fill color
//boarder color use one of the three line styles -- solid ,dotted or dased

//single bit for openque or transperant 
//single bit for border is shown or hidden
//3 bit unit fir eight color value can be represented 
//2 bit unit is more then enough to represent the three possible border styles
#include"file.h"
const char * colors[8] = {"black","red","green","yellow","blue","mageta","cyan","white"};
int main(){
	struct box_props box = {true,YELLOW,true,GREEN,DASHED};
	printf("original box setting :\n");
	show_setting(&box);
	box.opaque = false;
	box.fill_color = WHITE;
	box.boarder_color = MAGENTA;
	box.boarder_style = SOLID;

	printf("modified box setting :\n");
	show_setting(&box);
}
