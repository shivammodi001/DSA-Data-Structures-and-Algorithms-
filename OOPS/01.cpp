#include<bits/stdc++.h>
using namespace std;

class Student{
    public: 
    string name;
    int age;
    int roll;
    public:
    Student(string n,int a,int r){
        name=n;
        age=a;
        roll=r;
    }
    void Display(){
        cout<< "The name of the student is "<< name<< endl;
        cout<< "The age of the student is "<< age<< endl;
        cout<< "The roll of the student is "<< roll<< endl;
    }

};


int main(){
    string name;
    int age,roll;
    cin>> name>> age>> roll;
    Student s1(name,age,roll);
    s1.Display();
}