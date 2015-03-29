/* 
* prod.h
* 
* Q1, HW4, CSC 340
* Author: Roxana del Toro SID# 913645868
* email: rxdeltoro@gmail.com
* 
* Created on March 12, 2014, 11:51 AM
* 
* This is the header file for a program that tests an item against an array 
* of items. It returns the id number of the item if it is contained in the array 
* and throws an exception if the item is not found.
*/

#include "prod.h"



int Product::getProductID(int ids[], string names[], int numProducts, string target)
{
    Exception_ID_Not_Found NotFoundExc;
    
    bool found = false;
    int i;
    for (i=0; i < numProducts; i++)
    {
        if (names[i] == target)
        {
            found = true;
            return ids[i];
        }
                
    }
    if(found == false)
    {
        throw NotFoundExc; // not found
    }
    
}

