#include <iostream>
#include <string>
using namespace std;

void showMenu();
void showStudentName(string name);
void showStudentID (string id);

int main(){
    showMenu();
    
    string studentName;
    string id;


    cout << "Enter your name: ";
    getline (cin, studentName);

    showStudentName(studentName);
    
    cout << "Enter your id: ";
    getline (cin, id);

    showStudentID (id);
    
    return 0;
} 

void showMenu(){
    cout << "==== MENU ====" << endl;
    cout << "1. Display students" << endl;
    cout << "2. Show statistics" << endl;
    cout << "3. Exit" << endl;
}

void showStudentName(string name){
    cout << "Hello " << name << "!" << endl;
    cout << "Welcome to our class!" << endl;
    cout << "=====================" << endl;
}

void showStudentID (string id){
    cout << "Student ID: " << id << endl;
    cout << "============" << endl;
}