#include<iostream>
using namespace std;
class cube{
    private:
    double h;
    double w;
    double l;
    public:
    
    cube(){
        cout<<"destructor";
        cout<<"enter the value for height"<<endl;
        cin>>h;
        cout<<"enter the value for width"<<endl;
        cin>>w;
        cout<<"enter the value for length"<<endl;
        cin>>l;
    }
    
    void volume(){
        double vol=h*w*l;
        cout<< vol<<endl;
    }
    void setvalue(){                                                    // setter values
        cout<<"enter updated hieght"<<endl;
        cin>>h;
    }
    void displaynum(){                                                 //getter values
        cout<<"value for height:"<< h<<endl;
        cout<<"value for width:"<< w<<endl;
        cout<<"value for length:"<< l<<endl;
    }
};
 main(){
    cube cube1;
    cube1.volume();
    cube1.setvalue();
    cube1.volume();
    cube1.displaynum();
    
}
