#include<bits/stdc++.h>

using namespace std;

int main()
{
    float a, b, c, d, n;
    double s, m;

    //input 4 floatino students' grades.

    cin >> a >> b >> c >> d;

    //Calculating the average with weights 2, 3, 4 & 1

    s=((a * 2) + (b * 3) + (c * 4) + d) / 10;

    //displaying average

    cout << fixed;
    cout << "Media: " << setprecision(1) << s << endl;

    /* find out and displaying placement
     of students by average score */

    if (s >= 7.0)
        cout << "Aluno aprovado." << endl;// Approved Student
    else if (s < 5)
        cout << "Aluno reprovado." << endl;// Reproved Student
    else
    {
        cout << "Aluno em exame." << endl;//In exam student

        cin >> n;   //Exam score
        cout << "Nota do exame: " << setprecision(1) << n << endl;
        m = (n + s) / 2;

        if (m >= 5.0)
            cout << "Aluno aprovado." << endl;// Approved student
        else
            cout << "Aluno reprovado." << endl;// Reproved student

         // Final average
        cout << "Media final: " << setprecision(1) << m << endl;
    }
    return 0;
}



