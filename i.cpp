#include <iostream>
using namespace std;
class Person {
    public:
    string name;
    int age;

    void introduce(){
        cout<<"Hello, my name is "<<name<<", and I am "<<age<<" years old."<<endl;
    }
};
int main(){
    Person person1;
    person1.name = "pranav 'the gyatt' Kale";
    person1.age = 19;
    person1.introduce();
    return 0;


}