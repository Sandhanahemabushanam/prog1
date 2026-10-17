#include <iostream>
#include <string>
using namespace std;
class Student
{
    private:
        int rollNo;
        string name;
    public:
        Student(int r,string n)
        {
            rollNo = r;
            name = n;
            cout<<"Student object created"<<endl;
        }
        void display()
        {
            cout<<"Roll Number:"<<rollNo<<endl;
            cout<<"Name:"<<name<<endl;
        }
        ~Student()
        {
            cout<<"Student object destroyed"<<endl;
        }
};
int main() 
{
    int R;
    string N;
    cout<<"Enter name:";
    cin>>N;
    cout<<"Enter roll number:";
    cin>>R;
    Student s1(R,N);
    return 0;
}