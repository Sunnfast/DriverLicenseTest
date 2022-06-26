/*
 DriverLicenseTest
 by Simone Christen

 Takes user input for 20 questions as an array and grades them against the correct answers array.
 Grades the test and informs the user of the result in raw score, percentage, and whether they ultimately achieved a passing score or failed.

 */

#include <iostream>
#include <string>
using namespace std;

int driverTest()
{
    char answerKey[] = { 'B', 'D', 'A', 'A','C', 'A', 'B', 'A', 'C', 'D', 'B', 'C', 'D', 'A', 'D', 'C', 'C', 'B', 'D', 'A' }; // answer key array

    char input;
    cout << "Please enter your answers as a single character (A, B, C, or D)." <<'\n' << "NOTE: This test is NOT case sensitive." << endl;
    char studentAnswers[20];
    float correctAnswerTotal = 0;


    for (int i = 0; i < 20; i++)
    {
        cin >> input;
        input = toupper(input); // converts input so that case doesn't matter

        studentAnswers[i] = input;


        if (studentAnswers[i] == answerKey[i])
        {
            correctAnswerTotal++;
        }

    }

    cout << "The final results are: " << '\n';

    cout << "TOTAL CORRECT:  " << correctAnswerTotal << '\n';
    float percentage = correctAnswerTotal / 20 * 100;

    if (correctAnswerTotal >= 15)
    {

        cout << "RESULT: PASS" << '\n' << "Congrats!You passed the test with a " << percentage << " % ." << '\n';
    }

    else {
        cout << "RESULT: FAIL"<< '\n' << "Unfortunately, you only scored a " << percentage << "%. Better luck next time!" << '\n';
    }
    return 0;
}

int main()
{
    driverTest();
}
