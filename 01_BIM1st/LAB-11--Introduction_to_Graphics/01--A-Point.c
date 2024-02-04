#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main(){
	int g_driver = DETECT, g_mode, error_code;
	int x, y;
	initgraph(&g_driver, &g_mode, (char*)""); //"C:\\turboc3\\bgi
	error_code = graphresult();
	if(error_code!=0){
		printf("Initialization error %s", grapherrormsg(error_code));
	}
	else{
		x = getmaxx();
		y = getmaxy();
		putpixel(x/2, y/2, 3);
	}
	getch();
	closegraph();
	return 0;
}
