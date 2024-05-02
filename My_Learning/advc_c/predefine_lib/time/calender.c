#include<stdio.h>
#include<time.h>
#include<math.h>
#include<ctype.h>

int main(){
	time_t calender = time(NULL);
	struct tm* time_data;
	const char *day[] = {"sunday","monday","tuesday","wednesday","thursday","friday","saturday"};
	const char *month[] = {"january","february","march","april","may","june","july","august","saptember","october","november","december"};
	time_data= localtime(&calender);
	printf("today is %s %s %d %d\n",day[time_data->tm_wday],month[time_data->tm_mon],time_data->tm_mday,time_data->tm_year+1900);
	return 0;
}
