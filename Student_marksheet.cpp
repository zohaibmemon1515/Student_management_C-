#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void Marksheet() {
    string studentName;
    int studentId;
    float Math, Physics, English, Chemistry, Biology;
    float totalObtained, totalPercentage;
    string Grade; 

    cout << "------------------------------------" << endl;
    cout << "       STUDENT DATA ENTRY           " << endl;
    cout << "------------------------------------" << endl;

    cout << "Enter Your Name: ";
    cin >> studentName;
    for (int i = 0; i < studentName.length(); i++){
    if (studentName[i] >= '0' && studentName[i] <= '9'){
        cout <<"Invalid Name! Only Characters Allowed.\n";
        cout <<"Enter Your Name Again: ";
        cin >> studentName;
        i = -1; 
    }
}

    cout << "Enter Your Roll No: ";
    cin >> studentId;
    while (cin.fail() || studentId <= 0){
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Invalid Roll No! Enter again: ";
        cin >> studentId;
    };
    
    

    cout << "Enter Math Marks: ";
    cin >> Math;
    while (cin.fail() || Math < 0 || Math > 100 ){
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Invalid Marks! Enter again: ";
        cin >> Math;
    };

    cout << "Enter Physics Marks: "; 
    cin >> Physics;
     while (cin.fail() || Physics < 0 || Physics > 100 ){
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Invalid Marks! Enter again: ";
        cin >> Physics;
    };

    cout << "Enter English Marks: "; 
    cin >> English;
    while (cin.fail() || English < 0 || English > 100 ){
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Invalid Marks! Enter again: ";
        cin >> English;
    };

    cout << "Enter Chemistry Marks: "; 
    cin >> Chemistry;
     while (cin.fail() || Chemistry < 0 || Chemistry > 100 ){
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Invalid Marks! Enter again: ";
        cin >> Chemistry;
    };

    cout << "Enter Biology Marks: "; 
    cin >> Biology;
    while (cin.fail() || Biology < 0 || Biology > 100 ){
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Invalid Marks! Enter again: ";
        cin >> Biology;
    };

    totalObtained = (Math + Physics + English + Chemistry + Biology);
    totalPercentage = (totalObtained / 500.0) * 100.0;

    if (totalPercentage >= 90) Grade = "A-1";
    else if (totalPercentage >= 80) Grade = "A";
    else if (totalPercentage >= 70) Grade = "B";
    else if (totalPercentage >= 60) Grade = "C";
    else if (totalPercentage >= 50) Grade = "D";
    else Grade = "Fail";

    cout << "\n\n\tBOARD OF INTERMEDIATE & SECONDARY EDUCATION HYDERABAD" << endl;
    cout << "\t\t\t MARKS CERTIFICATE" << endl;
    cout << "----------------------------------------------------------------------" << endl;
    cout << "NAME: " << studentName << "\t\t\t\tSEAT NO: " << studentId << endl;
    cout << "----------------------------------------------------------------------" << endl;
    cout << "SUBJECTS\t\tMAX MARKS\tMIN MARKS\tOBTAINED" << endl;
    cout << "----------------------------------------------------------------------" << endl;
    cout << "ENGLISH\t\t\t100\t\t33\t\t" << English << endl;
    cout << "MATHEMATICS\t\t100\t\t33\t\t" << Math << endl;
    cout << "PHYSICS\t\t\t100\t\t33\t\t" << Physics << endl;
    cout << "CHEMISTRY\t\t100\t\t33\t\t" << Chemistry << endl;
    cout << "BIOLOGY\t\t\t100\t\t33\t\t" << Biology << endl;
    cout << "----------------------------------------------------------------------" << endl;
    cout << "TOTAL\t\t\t500\t\t\t\t" << totalObtained << endl;
    cout << "----------------------------------------------------------------------" << endl;
    
    cout << "RESULT: " << (totalPercentage >= 33 ? "PASS" : "FAIL") << endl;
    cout << "PERCENTAGE: " << fixed << setprecision(2) << totalPercentage << "%" << endl;
    cout << "GRADE: " << Grade << endl;
    cout << "----------------------------------------------------------------------" << endl;
}

int main() {
    Marksheet();
    return 0;
}


