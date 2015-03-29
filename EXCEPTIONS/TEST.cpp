/* 
* File:   TEST.cpp
* 
* Q1, HW4, CSC 340
* Author: Roxana del Toro SID# 913645868
* email: rxdeltoro@gmail.com
* 
* Created on March 12, 2014, 11:51 AM
* 
* This is the main/test for a program that tests an input item against an array 
* of items. It returns the id number of the item if it is contained in the array 
* and throws an exception if the item is not found.
*/

#include "prod.h"

int main() // Sample code to test the getProductID function
{
    Product p;
    int productIds[]= {4, 5, 8, 10, 13};
    string products[] = { "computer", "flash drive", "mouse", "printer", "camera" };

    try{
    cout << p.getProductID(productIds, products, 5, "mouse") << endl;
    cout << p.getProductID(productIds, products, 5, "camera") << endl;
    cout << p.getProductID(productIds, products, 5, "laptop") << endl;

    }
    catch(Exception_ID_Not_Found e)
    {
        cerr << e.what();
    }
    catch(...)
    {
        cerr << "Something went wrong in the search.";
    }

    return 0;
}



