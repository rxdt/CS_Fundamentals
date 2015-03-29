/* 
 * testPoly.cpp
 * 
 * Author: Roxana del Toro
 * SID: 913645868
 * Compiled with: NETBEANS
 * 
 * Created on March 2, 2014, 1:21 PM
 * 
 * This program takes in two user-input polynomials and conducts a set of 
 * operations on them.
 *
 */

#include "polynomial.h"






int main(){

    Poly first;
    cout << "Let's enter your first polynomial! You must enter the info for the higher power terms first. Scalars will be entered last.\n\n";
    first.prompt(); //gets the #terms and degree of poly & if contains a constant
    first.set_poly(first.numTerms, first.degree); 
    cout << "You entered:  "; first.print(); cout << "\n";
    
    Poly second;
    cout << "\nLet's enter your second polynomial! You must enter the info for the higher power terms first. Scalars will be entered last.\n\n";
    second.prompt(); // prompt user for polynomial 2
    second.set_poly(second.numTerms, second.degree); 
    cout << "You entered:  "; second.print(); cout << "\n";
    
     
    cout << "\nNow that you've entered your polynomials, Would you like to see a set of possible operations? Enter y for yes, n for no: \n";
    int x; char a; cin >> a;
      
    while (a == 'y' || a == 'Y') {
        
        first.printOptions();
        cin >> x;
        
        switch(x)
        {
            case 1: cout << "\nAdding your polynomials results in:  ";
                    first.add(first, second);
                    ;
                    break;

            case 2: cout << "\nThe highest degree of the first polynomial is " << first.getDegree() << " ";
                    cout << "\nThe highest degree of the second polynomial is " << second.getDegree() << " ";
                    ;
                    break;

            case 3: int c, x, y; 
                    cout << "\nWhich polynomial do you need the coefficient from? Enter 1 or 2: ";
                    cin >> y;
                    cout << "Which x-power term do you need the coefficient for? Enter an integer that represents the exponent of the term:  ";
                    cin >> c; 
                    if(y == 1)  {x = first.getCoefficient(c);}
                    if(y == 2)  {x = second.getCoefficient(c);}
                    if(x != -1) {cout << "The coefficient for the x^" << c << " term is " << x << endl;}
                    else        {cout << "A term with that power doesn't exist in your polynomial.\n";}
                    ;
                    break;

            case 4: int d, f, t; 
                    cout << "\nWhich polynomial do you need the coefficient from? Enter 1 or 2: ";
                    cin >> d;
                    cout << "Which x-power term do you need to change the coefficient of? i.e. Enter an integer that represents the exponent of the term:  ";
                    cin >> f; 
                    cout << "What are you changing the coefficient to? Enter an integer: ";
                    cin >> t;
                    if(d == 1)  {first.changeCoefficient(f, t);}
                    if(d == 2)  {second.changeCoefficient(f, t);} 
                    ; 
                    break;

            case 5: cout << "Which polynomial to multiply? Enter 1 or 2: ";
                    int m, s; cin >> m;
                    cout << "Enter the integer you like to multiply the polynomial by: "; cin >> s;
                    if(m == 1){first.multiply(s);  cout << "The polynomial is now: "; first.print();}
                    if(m == 2){second.multiply(s); cout << "The polynomial is now: "; second.print();}
                    ;
                    break;
            default:   
                    break;
                    
        } // close switch
        cout << "\nWould you like to see a list of possible operations? Enter y for yes, n to exit: \n";
        cin >> a;
} // close while
       
    
    return 0;
}
    
    
    
