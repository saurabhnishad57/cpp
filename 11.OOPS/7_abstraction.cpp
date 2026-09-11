#include<iostream>
#include<string>
using namespace std;
class shape{  //abstract class bcoz iske andar virtual fn hai
    virtual void draw()=0; //pure virtual fn
};
class Circle : public shape{
    public:
    void draw(){
        cout<<"Drawing a circle\n";
    }
};
int main(){
    Circle c;
    c.draw();
    return 0;
}