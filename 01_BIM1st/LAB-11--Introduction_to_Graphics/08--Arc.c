#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main(){
	int driver = DETECT, mode, error;
	int x, y;
	initgraph(&driver, &mode, "C:\\turboc3\\bgi");
	error = graphresult();
	if(error != 0){
		printf("Initialization error %s", grapherrormsg(error));
	}
	else{
		x = getmaxx();
		y = getmaxy();
		arc(x/2, y/2, 0,180, 100);
		outtextxy(x/2, 100, "ARC");
	}
	getch();
	closegraph();

	return 0;
}