
#include<iostream>
#include<string>
using namespace std;
class Student{
    public:
        string name;
        double *cgpaPtr;

        Student(string name,double cgpa){
            this->name=name;
            cgpaPtr = new double;
            *cgpaPtr=cgpa;
        }

        Student(Student &obj){
            this->name=obj.name;
            cgpaPtr=new double;
            *cgpaPtr=*obj.cgpaPtr;
        }
        void getInfo(){
            cout<<"name: "<<name<<endl;
            cout<<"cgpa: "<<*cgpaPtr<<endl;
        }
};


int main(){
    Student s1("Saurabh Nishad",8.53);
    
    Student s2(s1);  //shivash //copy constructor
    s1.getInfo();
    *(s2.cgpaPtr)=9.2; //changes bcoz dma (shallow copy)
    s2.name="SHIVANSH";
    s2.getInfo();
    return 0;
}