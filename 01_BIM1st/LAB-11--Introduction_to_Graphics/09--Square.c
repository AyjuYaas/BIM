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
		rectangle(50, 50, x/2, x/2);
		outtextxy(100, 100, "SQUARE");
	}
	getch();
	closegraph();

	return 0;
}