#include<iostream>
using namespace std;
class cube
{
    public:
    double height=1.0;
    double width=1.0;
    double length=1.0;
    void volume()
    {
        double vol =height*length*width;
        cout<<"volume -"<< vol;
    }
};
int main(){
    cube c;
    c.volume();
}
