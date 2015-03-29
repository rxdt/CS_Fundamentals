/* 
 * File:   prod.h
 * Author: rxdt
 *
 * Created on March 12, 2014, 11:31 AM
 */
#include <cstdlib>
#include <iostream>
#include <string>
#include <exception>
#include <stdexcept>
using namespace std;

#ifndef PROD_H
#define	PROD_H


class Product {

    public:
        int getProductID(int ids[], string names[], int numProducts, string target);
    
};


class Exception_ID_Not_Found : public exception
{
    public:
      
      virtual const char* what() const throw() 
      {
          return "Item not found.";
      }
};


#endif	/* PROD_H */

