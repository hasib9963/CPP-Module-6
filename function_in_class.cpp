#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
    string name;
    int age;
    int marks1;
    int marks2;
    Person(string nm, int ag, int mn1, int mn2)
    {
        name=nm;
        age=ag;
        marks1=mn1;
        marks2=mn2;
    }
    void hello()
    {
        cout<<name<< " "<<age<<endl;
    }
    int total_marks()
    {
        return marks1+marks2;
    }
};
int main()
{
    Person rakib("Hasib Hasan", 23, 97, 87);
    //rakib.hello();
    cout<<rakib.total_marks()<<endl;
    return 0;
}