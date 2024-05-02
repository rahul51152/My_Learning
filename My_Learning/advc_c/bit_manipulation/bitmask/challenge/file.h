#include<stdio.h>
#include<stdbool.h>

#define  SOLID 0
#define  DOTTED 1
#define  DASHED 2

#define BLUE 4
#define GREEN 2
#define RED 1

#define BLACK 0
#define YELLOW (RED | GREEN)
#define MAGENTA (GREEN | BLUE)
#define CYAN (GREEN | BLUE)
#define WHITE (RED | GREEN | BLUE)

struct box_props{
        bool opaque : 1;
        unsigned int fill_color :3;
        unsigned int       :4;
        bool show_boarder : 1;
        unsigned int boarder_color :3;
        unsigned int boarder_style :2;
        unsigned int               :2;
};
void show_setting (const struct box_props *pb);
