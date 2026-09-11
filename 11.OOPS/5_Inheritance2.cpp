//MULTIPLE INHERITANCE

#include<iostream>
#include<string>
using namespace std;

class Student{
public:
    string name;
    int rollno;
};

class Teacher{
public:
    string subject;
    double salary;
};
class TA : public Student, public Teacher{
};

int main(){
    TA t1;
    t1.name="Tony stark";
    t1.subject="cold";
    cout<<t1.name<<endl;

    
    cout<<t1.subject<<endl;
    return 0;
}

//HEIRARCHIEL INHERITANCE

// #include<iostream>
// #include<string>
// using namespace std;

// class Person{
// public:
//     string name;
//     int age;
// };
// class Student : public Person{
// public:
//     // string name;
//     int rollno;
// };

// class Teacher :public Person{
// public:
//     string subject;
//     double salary;
// };
// class TA : public Student, public Teacher{
// };

// int main(){
//     TA t1;
//     t1.name="Tony stark";
//     t1.subject="cold";
//     cout<<t1.name<<endl;

    
//     cout<<t1.subject<<endl;
//     return 0;
// }

//HYBRID INHERITANCE


#include<iostream>
#include<string>
using namespace std;

class Student{
public:
    string name;
    int rollno;
};

class Teacher{
public:
    string subject;
    double salary;
};
class TA : public Student, public Teacher{
};

int main(){
    TA t1;
    t1.name="Tony stark";
    t1.subject="cold";
    cout<<t1.name<<endl;

    
    cout<<t1.subject<<endl;
    return 0;
}