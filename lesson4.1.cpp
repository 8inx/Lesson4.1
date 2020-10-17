#include<iostream>
using namespace std;

int main() {

    //--initialize
    float LENGTH = 0, WIDTH =0;
    
    float length_cm = 0, length_M = 0, length_inch = 0, length_ft = 0;//length in
    float width_cm = 0, width_M = 0, width_inch = 0, width_ft = 0;//width in

    float sq_cm = 0, sq_M = 0, sq_inch = 0, sq_ft = 0; //area of
    float p_cm = 0, p_M = 0, p_inch = 0, p_ft = 0;//perimeter of

    //--getting users input
    cout << "  Enter Length of Rectangle: ";
    cin >> LENGTH;
    cout << "  Enter Width  of Rectangle: ";
    cin >> WIDTH, cout <<"\n";

    //--size convertion
    length_cm = LENGTH;//size in cm
    width_cm = WIDTH; 
    length_M = LENGTH/100;//size in Meters
    width_M = WIDTH/100; 
    length_inch = LENGTH/2.54;//size in inches
    width_inch = WIDTH/2.54; 
    length_ft = LENGTH/30.48;//size in feet
    width_ft = WIDTH/30.48; 
    
    //--getting AREA
    sq_cm = length_cm * width_cm;
    sq_M = length_M * width_M;
    sq_inch = length_inch * width_inch;
    sq_ft = length_ft * width_ft;

    //--PRINT AREA
    cout << "\tArea =\t";
    cout << sq_cm << "  cm\n\t\t";
    cout << sq_M << "  m\n\t\t";
    cout << sq_inch << "  in\n\t\t";
    cout << sq_ft << "  ft\n\n";

    //--getting PERIMETER
    p_cm = 2*(length_cm+width_cm);
    p_M = 2*(length_M+width_M);
    p_inch = 2*(length_inch+width_inch);
    p_ft = 2*(length_ft+width_ft);

    //--PRINT PERIMETER
    cout << "   Perimeter =\t";
    cout << p_cm << "  cm\n\t\t";
    cout << p_M << "  m\n\t\t";
    cout << p_inch << "  in\n\t\t";
    cout << p_ft << "  ft\n\t\t";

    //----end----->
}