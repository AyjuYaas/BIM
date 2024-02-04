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
		ellipse(x/2, y/2, 0, 360, 150, 50);
		outtextxy(120, 120, "ELLIPSE");
	}
	getch();
	closegraph();

	return 0;
}