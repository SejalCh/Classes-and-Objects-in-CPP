/*Exp-11-Classes and objects
exp11_1-Volume of cuboid*/
# include <iostream>
using namespace std;
class Cuboid //creating a class "Cuboid"
{   
    public:
    float length;
    float breadth;
    float height;
};
int main()
{
    Cuboid volume;// creating an object "volume"
    
    volume.length=2;
    volume.breadth=3;
    volume.height=4;
   
    cout<<"Length:"<<volume.length<<endl;
    cout<<"Breadth:"<<volume.breadth<<endl;
    cout<<"Height:"<< volume.height<<endl;
    cout<<"Volume:"<<volume.length*volume.breadth*volume.height;
}
/*Output:
Length:2
Breadth:3
Height:4
Volume:24*/