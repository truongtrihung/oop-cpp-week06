#include <iostream>
#include <string>
using namespace std;

void showMenu();
void printStudentInfo (string name, string id);
void showScore (string name, double score);
double calculateAverage (double score1, double score2);
void maxValue (int a, int b);

int main(){
    showMenu();
    int a, b;
    string name;
    string id;
    double score;
    double mathScore, englishScore;
    
    // Step 3
    cout << "Enter your name: ";
    getline (cin, name);

    cout << "Enter your ID: ";
    getline (cin, id);

    printStudentInfo(name, id);
    
    cout << "Enter your score: ";
    cin >> score; 

    showScore (name, score);

    cout << endl;

    // Step 4
    cout << "Enter your Math score: ";
    cin >> mathScore;
    
    cout << "Enter your English score: ";
    cin >> englishScore;

    double average = calculateAverage (mathScore, englishScore);
    cout << "Average score = " << average << endl;

    cout << endl;

    cout << "Enter value a: ";
    cin >> a;
    cout << "Enter value b: ";
    cin >> b;
    maxValue (a, b);

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

double calculateAverage (double score1, double score2){
    double sum = score1 + score2;
    double average = sum / 2;
    return average;
}

void maxValue (int a, int b){
    if (a > b){
        cout << a << " is greater than " << b << endl;
    }
    else {
        cout << b << " is greater than " << a << endl;
    }
}