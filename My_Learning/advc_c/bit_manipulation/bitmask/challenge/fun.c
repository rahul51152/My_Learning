#include"file.h"
extern const char * colors[8];
void show_setting(const struct box_props *pb){
	printf("box is %s.\n",pb->opaque==true? "opaque":"transparent");
	printf("the fill color is %s.\n",colors[pb->fill_color]);
	printf("Border %s\n", pb->show_boarder== true ?"shown " :"not shown");
	printf("the boarder color is %s\n",colors[pb->boarder_color]);
	printf("the boarder style is ");
	switch (pb->boarder_style){
		case SOLID :printf("solid.\n");break;
		case DOTTED : printf("dotted.\n"); break;
		case DASHED : printf("dashed.\n"); break;
		default : printf("unknown type.\n");
	}
}
	
