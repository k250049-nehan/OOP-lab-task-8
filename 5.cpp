#include <iostream>
using namespace std;

class Teacher;

class Student {
private:
    string name;
    float g1, g2, g3;
public:
    Student(string n, float a, float b, float c) {
        name = n;
        g1 = a;
        g2 = b;
        g3 = c;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Grades: " << g1 << ", " << g2 << ", " << g3 << endl;
    }

    friend class Teacher;
    friend float calculateAverageGrade(Student);
};

class Teacher {
public:
    void updateGrade(Student &s, int index, float newGrade) {
        if(index == 1) s.g1 = newGrade;
        else if(index == 2) s.g2 = newGrade;
        else if(index == 3) s.g3 = newGrade;
    }
};

float calculateAverageGrade(Student s) {
    return (s.g1 + s.g2 + s.g3) / 3;
}

int main() {
    Student s("Ali", 70, 65, 80);
    Teacher t;

    cout << "Before Update:" << endl;
    s.display();
    cout << "Average: " << calculateAverageGrade(s) << endl;

    t.updateGrade(s, 2, 85);

    cout << endl << "After Update:" << endl;
    s.display();
    cout << "Average: " << calculateAverageGrade(s) << endl;

    return 0;
}
