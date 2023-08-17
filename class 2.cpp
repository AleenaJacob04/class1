#include<iostream>
using namespace std;
class cube
{
    public:
    double h;
    double w;
    double l;
};
main()
{
    cube cube1;
    cout<<"enter the value for height";
    cin>>cube1.h;
    cout<<"enter the value for  width";
    cin>>cube1.w;
    cout<<"enter the value for length";
    cin>>cube1.l;
    double vol =cube1.h*cube1.l*cube1.w;
    cout<<"volume -"<< vol;
    
}