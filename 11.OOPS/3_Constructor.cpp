
#include<iostream>
#include<string>
using namespace std;

class Teacher{
    // properties/attribute
private:
    double salary;
public:
    string name;
    string dept;
    string subject;

    //cons. only in private access modifiers
    //non-parameterized constructor
    Teacher(){ 
        dept="Computer Science\n";
    }
    //parameterized constructor
    //this is a special pointer in c++ that points to the current object
    //this->prop =prop
    Teacher(string name, string dept, string subject, double salary){
        this->name=name;
        this->dept=dept;
        this->subject=subject;
        this->salary=salary;
    }

    //copy constructor
    Teacher(Teacher &obj){ //pass by reference
        cout<<"Hii! I am custom copy constructor\n";
        this->name=obj.name;
        this->dept=obj.dept;
        this->subject=obj.subject;
        this->salary=obj.salary;
    }
    string name;
    string dept;
    string subject;
    
    // methods/member function 
    void changeDept(string newDept){
        dept=newDept;
    }
    
    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Subject: "<<subject<<endl;
    }
};

int main(){
    // Teacher t1;  //constructor called =>whenever we create a new object
    // t1.name = "Saurabh";
    // t1.subject= "C++";
    // // t1.dept= "Computer Science";
    // // t1.salary=25000;
    // t1.setSalary(25000);

    Teacher t1("Saurabh","ComputerScience","C++",25000);
    // t1.getInfo();

    Teacher t2(t1); //copy constructor
    t2.getInfo();

    return 0;
