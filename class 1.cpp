#include<iostream>
using namespace std;
class cube
{
    public:
    double height=1.0;
    double width=1.0;
    double length=1.0;
};
main()
{
    cube cube1;
    double vol =cube1.height*cube1.length*cube1.width;
    cout<<"volume -"<< vol;
    
}