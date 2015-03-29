/* 
 * File:   Q2_HW2_CSC340
 * Author: Roxana del Toro
 * SID: 913645868
 * Compiled with: NETBEANS
 *
 * Created on February 17, 2014, 1:07 PM
 * 
 * This program has a user create a vector of doubles. A deep copy of the vector 
 * is then sorted with selection sort. The original vector values are then sorted 
 * using insertion sort.
 */

#include <cstdlib>
#include <iostream>
#include <vector>
#include <limits>

using namespace std;

void selectionSort(vector<double> V);
void insertionSort(vector<double> V);
void createVector(double i);



int main(int argc, char** argv) {

    vector<double> V;
    vector<double> V2;
    int i;
    
    cout << "Enter how many numbers you want to evaluate: ";
    cin >> i;
    cout << "Enter a set of numbers to sort, each separated by spaces, and then hit return: \n";
   
    double n;
    while (V.size() < i && cin >> n)
    {
        V.push_back(n);
    }

    cout << "\nThe numbers you entered are in a vector as: \n";
    for(int i = 0; i < V.size(); i++)
    {
        cout << V[i] << " ";
    }
        
    V2 = V;// deep copy of the doubles vector created
    selectionSort(V2);
    V2 = V;
    insertionSort(V2);
    
    return 0;
}




/*
 This function is passed a vector of doubles that it sorts using selection sort.
 @pre: the vector is unsorted
 @post: the vector is sorted
 @param: vector<double> V: the vector to sort 
 */

void selectionSort(vector<double> V)
{
    int size = V.size();
    int max, i, j;
    
    for(i = 1; i < size; i++)
    {
        max = i;  
        for(j = 0; j < size; j++)
        {
            if(V[j] > V[max])
            max = j;

            if(max !=i)
            {
                int temp = V[i];
                V[i] = V[max];
                V[max] = temp;
            }
        }
    }
    
    cout << "\nAfter being sorted with Selection Sort the numbers are: \n";
    for(int k = 0; k < size; k++)
    {
        cout << V[k] << " ";
    }
}




/*
 This function is passed a vector of doubles that it sorts using insertion sort.
 @pre: the vector is unsorted
 @post: the vector is sorted
 @param: vector<double> V: the vector to sort 
 */
void insertionSort(vector<double> V)
{   
    int size = V.size();
    int i, j, key;

    cout << "\n\nBefore being sorted with Insertion Sort the vector is: \n";
    for(int k = 0; k < size; k++)
    {
        cout << V[k] << " ";
    }
    
    for(i = 1; i < size; i++)    // Start with 1 (not 0)
    {
        key = V[i];
        for(j = i - 1; (j >= 0) && (V[j] > key); j--)   // Smaller values move up
        {
            V[j+1] = V[j];
        }
        V[j+1] = key;    //Put key into its proper location
    }
    cout << "\nAfter being sorted with Insertion Sort the numbers are: \n";
    for(int k = 0; k < size; k++)
    {
        cout << V[k] << " ";
    }
}


