#include<iostream>
#include<string>
using namespace std;

class Person{
public:
    string name;
    int age;
    
    Person(string name,int age){
        this->name=name;
        this->age=age;
    }
    // Person(){
    //     cout<<"Parent constructor\n";
    // }
    // ~Person(){
    //     cout<<"deallocating Parent destructor"
    // }
};

class Student : public Person{
public:
    int rollno;
    Student(string name,int age, int rollno) : Person(name, age){
        cout<<"Child constructor\n";
    }
    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"RollNo: "<<rollno<<endl;
    }
};

class GradStudent : public Student{
public:
string researchArea;
};
int main(){
    Student s1("Virat",19,292);
    
    s1.getInfo();
    return 0;
}