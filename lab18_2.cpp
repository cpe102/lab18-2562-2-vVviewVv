//Modify function overlap() form lab18_1.cpp by using pointers as input arguments.
#include<iostream>
#include<cmath>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *,Rect *);

int main(){
	Rect R1,R2;
	cout << "Please input Rect 1 (x y w h): ";
	cin >> R1.x >> R1.y >> R1.w >> R1.h;
	cout << "Please input Rect 2 (x y w h): ";
	cin >> R2.x >> R2.y >> R2.w >> R2.h;
	
	cout << "Overlap area = " << overlap(&R1,&R2);	
	return 0;
}

double overlap(Rect *r1,Rect *r2){
	double xmax,xmin,ymax,ymin,w,h;
	Rect R;
		xmax = max(r1->x,r2->x);
		xmin = min(r1->x+r1->w,r2->x+r2->w);
		ymin = min(r1->y,r2->y);
		ymax = max(r1->y-r1->h,r2->y-r2->h);
		w = xmin-xmax;
		h = ymin-ymax;
		if(w<0 || h<0) return 0;
		return w*h;

}
