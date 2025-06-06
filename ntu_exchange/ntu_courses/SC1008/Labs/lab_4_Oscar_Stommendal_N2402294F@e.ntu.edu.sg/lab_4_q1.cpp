///////// Student Info /////////
//
//           Your Name: Oscar Stommendal
//      Your NTU Email: N2402294F@e.ntu.edu.sg
//
//

#include <iostream>
#include <string>
using namespace std;

// Base class: Sports
class Sports {
protected:
    string sport; // sport name
public:
    // TO-DO 1: Implement the constructor and destructor
    Sports(string s) : sport(s) {
        cout << "Sports constructor!" << endl;
    }
    ~Sports() {
        cout << "Sports destructor!" << endl;
    }

    // Display sports information
    void displaySports() const {
        cout << "Sport: " << sport << endl;
    }
};

// Base class: Academics
class Academics {
protected:
    float gpa; // GPA
public:
    // TO-DO 2: Implement the constructor and destructor
    Academics(float g) : gpa(g) {
        cout << "Academics constructor!" << endl;
    }
    ~Academics() {
        cout << "Academics destructor!" << endl;
    }

    // Display academic information
    void displayAcademics() const {
        cout << "GPA: " << gpa << endl;
    }
};

// TO-DO 3: Implement the Derived class: StudentAthlete, which inherits from both Academics and Sports
class StudentAthlete : public Sports, public Academics {
private:
    string name; // student name
    int age; // student age
    int id; // student ID
public:
    // Constructor
    StudentAthlete(string s, float g, string n, int a, int i) : Sports(s), Academics(g), name(n), age(a), id(i) {
        cout << "StudentAthlete constructor!" << endl;
    }

    // Destructor
    ~StudentAthlete() {
        cout << "StudentAthlete destructor!" << endl;
    }

    // Display all information
    void displayInfo() const {
        cout << "Name: " << name << ", Age: " << age << ", ID: " << id << endl; 
        displaySports();
        displayAcademics();
    }
};

int main() {
    //Create a StudentAthlete instance
    StudentAthlete stu("Basketball", 3.8, "Bob", 21, 1001);

    // Display all the information
    cout<<endl;
    stu.displayInfo();
    cout<<endl;
    
    // Test code to demonstrate multiple inheritances
    stu.displaySports();
    stu.displayAcademics();
    cout<<endl;
    
    return 0;
}
