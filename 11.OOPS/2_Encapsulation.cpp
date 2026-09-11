//Encapsulation is wrapping up of data and member function in a single unit called class


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
    
    // methods/member function 
    void changeDept(string newDept){
        dept=newDept;
    }
    //special fn
    //setter fn =>private value lo set karna
    void setSalary(double s){
        salary=s;
    }
    //getter fn =>private value ko get karna
    double getSalary(){
        return salary;
    }
};

class Account{
private:  
//data hiding
    double balance;
    string password;
public: 
 //public data
    string accID;
    string username;
};

int main(){
    Teacher t1;
    t1.name = "Saurabh";
    t1.subject= "C++";
    t1.dept= "Computer Science";
    // t1.salary=25000;
    t1.setSalary(25000);

    cout<<t1.name<<endl;
    cout<<t1.getSalary()<<endl;

    return 0;
}