#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct scoreInfo {
    double sum;
    double average;
    int count;
    double maxScore;
    double minScore; 
};

void showMenu();
void printStudentInfo (string name, string id);
void showScore (string name, double score);
double calculateAverage (double score1, double score2);
void maxValue (int a, int b);
scoreInfo analyzeScores (const vector <double>& scores);

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

    cout << endl;

    // Step 5
    vector <double> scores = {8.5, 7.0, 9.5, 6.0, 8.0};

    scoreInfo info = analyzeScores(scores);

    cout << "Total      :" << info.sum << endl;
    cout << "Average    :" << info.average << endl;
    cout << "Max score  :" << info.maxScore << endl;
    cout << "Min score  :" << info.minScore << endl;

    cout << endl;
    
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

scoreInfo analyzeScores (const vector <double>& scores){
    scoreInfo result;
    result.sum = 0;
    result.count = scores.size();

    if (result.count == 0){
        result.average = 0;
        result.maxScore = 0;
        result.minScore = 0;
        return result;
    }

    result.minScore = scores[0];
    result.maxScore = scores[0];

    for (double s : scores){
        result.sum += s;
        if (s > result.maxScore) result.maxScore = s;
        if (s < result.minScore) result.minScore = s;
    }

    result.average = result.sum / result.count;
    return result;  // return all results at once
}