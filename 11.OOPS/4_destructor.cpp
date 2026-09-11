
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
            *cgpaPtr=cgpa;  //memory leak
        }

        //destructor
        ~Student(){
            cout<<"Hii! I delete everything\n";
            delete cgpaPtr; 
        }
        void getInfo(){
            cout<<"name: "<<name<<endl;
            cout<<"cgpa: "<<*cgpaPtr<<endl;
        }
};


int main(){
    Student s1("Saurabh Nishad",8.53);
    
    s1.getInfo();
   
    return 0;
}