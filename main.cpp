#include <iostream>
#include <string>
using namespace std;

void showMenu();
void printStudentInfo (string name, string id);
void showScore (string name, double score);

int main(){
    showMenu();
    
    string name;
    string id;
    double score;

    cout << "Enter your name: ";
    getline (cin, name);

    cout << "Enter your ID: ";
    getline (cin, id);

    printStudentInfo(name, id);
    
    cout << "Enter your score: ";
    cin >> score; 

    showScore (name, score);
    return 0;
} 

void showMenu(){
    cout << "==== MENU ====" << endl;
    cout << "1. Display students" << endl;
    cout << "2. Show statistics" << endl;
    cout << "3. Exit" << endl;
}

void printStudentInfo (string name, string id){
    cout << "======================" << endl;
    cout << "Name: " << name << endl;
    cout << "ID: " << id << endl;
    cout << "======================" << endl;
}

void showScore (string name, double score){
    cout << "**********************" << endl;
    cout << "Student: " << name << endl;
    cout << "Score  : " << score << endl;
    cout << "Keep going!" << endl;
    cout << "**********************" << endl;
}