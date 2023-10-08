/*exp11_2-To create functions for calculating and displaying volume in a class*/
#include <iostream>
using namespace std;

class cuboid{
public:
double height=2.0;
double width=3.0;
double length=5.0;

double volume(){
double v;
v=height*width*length;
return v;
}
void disp_vol(double vol){
cout<<"Volume:"<<vol<<endl;
}
};
int main()
{
cuboid cuboid1;
double vol=cuboid1.volume();
cuboid1.disp_vol(vol);
}
/*Output:
Volume:30*/