#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *r1,Rect *r2){
 
 double lx,ly;
 double xr,xl,yu,yd;
 xr=min(r1->x+r1->w,r2->x+r2->w);
 xl=max(r1->x,r2->x);
if(xr<=xl)
{
	return 0;
}
lx=abs(xr-xl);


 yu=min(r1->y,r2->y);
 yd=max(r1->y-r1->h,r2->y-r2->h);
 if(yu<=yd)
 {
	 return 0;
 }
 ly=abs(yu-yd);



return lx*ly;

}