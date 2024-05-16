// GainxFreq.cpp ("box n bunny included" version)
// Written by: Reginald Wee
// Written on 10 May 2024
// --------------------------------------------

#include <iostream>
#include <iomanip>
#include <cmath>

#define PI 3.14159
using namespace std;

int main()
{
    const char* box[2][4]{
    "┌─────────────────┬────────────────┐",
    "│        Freq (Hz)   │     Gain          │",
    "├─────────────────┼────────────────┤",
    "└─────────────────┴────────────────┘",
    "╔═════════════════╦════════════════╗",
    "║        Freq (Hz)   ║     Gain          ║",
    "╠═════════════════╬════════════════╣",
    "╚═════════════════╩════════════════╝"};

    double gain, freq, R, C;
    int f, j;

    R = 10.0E+03;   // 10kohm
    C = 4.7E-6;     // 4.7uF

    
   
    cout << "\n kilroy was here      ,,,";
    cout << "\n                     (o o)";
    cout << "\n------------------ooO-(_)-Ooo-------\n\n\n";
    cout << "Gain Calculator for RC filter, with";
    cout << " R = " << (R / 1.0E+3) << "kohm, and";
    cout << " C = " << (C * 1.0E+6) << "uF\n";
 
    cout << "\n*** For Loop Version ***";
    cout << "\n " << box[0][0];
    cout << "\n " << box[0][1];
    cout << "\n " << box[0][2];
    for (f = -1; f <= 9; f++)  {
        freq = pow (10.0, f);
        gain = 1 / (2.0 * PI * freq * R * C);
        cout << "\n │ "<< fixed << setw(16) << setprecision(1) << freq;
        cout << "   │ " <<  fixed << setw(17) << setprecision(10) << gain;
        cout << " │ ";

    }
    
    cout << "\n " << box[0][3];
    cout << "\n\n\n*** While Loop Version ***";
    cout << "\n " << box[1][0];
    cout << "\n " << box[1][1];
    cout << "\n " << box[1][2];
    
    freq = 0.1;   // Starting Freq
    while ( freq <= 1.0E+9) {
        gain = 1 / (2.0 * PI * freq * R * C);
        cout << "\n ║ "<< fixed << setw(16) << setprecision(1) << freq;
        cout << "   ║ " <<  fixed << setw(17) << setprecision(10) << gain;
        cout << " ║";
        freq = freq * 10.0;
    }
    cout << "\n " << box[1][3];
    
    cout << "\n\n  ( \\ /) \n";
    cout << "（ • - •） <( c++ is great )\n";
    cout << " c(   っっ\n";

}
 