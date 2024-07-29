#include <iostream>
#include <string>
using namespace std;

class Teacher
{
public:
    Teacher()
    {
        name = "Rajul";
        dept = "IT";
        subject = "C++";
    }

private:
    double salary;
    // properties
public:
    string name;
    string dept;
    string subject;

    // methods
    void changeDept(string newDept)
    {
        dept = newDept;
    }

    void setSalary(double s)
    {
        salary = s;
    }

    double getSalary()
    {
        return salary;
    }
};

int main()
{
    Teacher t1;
    Teacher t2;

    t1.name = "Benson";
    t1.dept = "CS";
    t1.subject = "SPA";
    t1.setSalary(250000);

    cout << t1.name << endl;
    cout << t2.name << endl;
    cout << t1.getSalary() << endl;
    return 0;
}