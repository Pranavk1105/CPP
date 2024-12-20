// Write a C++ program the sum of all even numbers and the product of all odd number between 1 and n (inclusive)

#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout<<"Enter a positive  interger : "; 
    cin>> n;


int evenSum =0;
int oddProduct=1;


    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            evenSum += i;  
        } else {
            oddProduct *= i; 
        }
    }

    
    cout << "Sum of even numbers: " << evenSum << endl;
    cout << "Product of odd numbers: " << oddProduct << endl;

    return 0;
}







// Write a program that defines a class Rectangle with the following:
//Two private data members:length and width.
//A default constructor that initailize length and width to 1 member function area() to calculate and return the area of the rectangle .
// main() function to create an object of the rectangle class , call the area() function and print the result



#include <iostream>
using namespace std;
class Rectangle {
private:
    int l; 
    int b; 
public:
    Rectangle() : l(1), b(1) {}
    int area() {
        return l * b;
    }
    void setDimensions(int length, int breadth) {
        l = length;
        b = breadth;
    }
    void displayDimensions() {
        cout << "Length: " << l << ", Breadth: " << b << endl;
    }
};
int main() {
    Rectangle rect; 
    int length, breadth;
    cout << "Enter length of the rectangle: ";
    cin >> length;
    cout << "Enter breadth of the rectangle: ";
    cin >> breadth;
    rect.setDimensions(length, breadth);
    rect.displayDimensions();
    cout << "Area of rectangle: " << rect.area() << endl; 

    return 0;
}



// write a C++ define a class student with the following :
// Private data members: name and age,
//  A parameterized contrutor to initalize the name and age.
// A copy construtor to create a cpoy of an existing student object .
// A member function display() to print the details of the student



#include <iostream>
#include <string>
using namespace std; 
class Student {
private:
    string name;
    int age;

public:
    Student(string studentName, int studentAge) : name(studentName), age(studentAge) {}
    Student(const Student &other) {
        name = other.name;
        age = other.age;
    }
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};
int main() {
    Student student1("Pranav ", 19);
    cout << "Details of student1:" << endl;
    student1.display();
    Student student2 = student1;
    cout << "Details of student2 (copied from student1):" << endl;
    student2.display();

    return 0;
}
 




// Write the program that defines a function in add(int a ,int b) to calculate and return the sum of two integers.
// 1. call this function from main() with two user-input values
// 2.Display the returned result

#include <iostream>
using namespace std;
 
int add(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;
 
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "The sum of " << num1 << " and " << num2 << " is: " << add(num1, num2) << endl;

    return 0;
}











