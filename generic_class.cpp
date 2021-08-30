// System Includes
#include <iostream>

// Name Space Shortcuts
using namespace std;  // for 'cin' and 'cout'.  ['std::cin' / 'std:cout']

// Header for 'date.cpp'.  (Think of them in pairs. 1 file :1 file, 1 .h : 1 .cpp)
#include "generic_class.h"

// Class Constructor Definition.  Written like: 'ClassName::ClassName ( Arguments )'
// v: value
GenericClass::GenericClass ( int v ) // constructor with parameters
  { SetValue ( v ); }

// Class Destructor Definition.  Take special note of the '~' = Destucto!
GenericClass::~GenericClass (  )
  { cout << "\nDeleting Object, Program is ending."; }

// Member Method Definition.
// 'Set Method' Definitions.  Methods are apart of Classes that interact with Objects.
// v: Value
void GenericClass::SetValue ( int v )
  { GenericValue = v; }

// 'Get Method' Definitions.  Remember these are not Functions
// v: value
int GenericClass::GetValue (  ) //get month
	{
  int v = 0;      // If the user inputs a non integer then the 'v' value defaults to (int) 0.

  // Request input from the user.
  cout << "Letter Grade Calculator: " << endl;
  cout << "\nEnter the Students' grade: ";
  cin >> v;

  return ( v );
  }

// 'View Method' Definitions.
// Evaluats GenericClass.GenericValue (Public Member)
// For now this function outputs the exersise results.
void GenericClass::SeeValue (  ) //display date in mm/yyyy format
	{
  cout << "\nThe Student Grade is: " << GenericValue << "%" << endl;

  if ( GenericValue == 100 )
    { cout << "'A': Supirior & Perfect; A Flawless Victory!   ;)   " << endl; }

  if ( GenericValue <= 90 && GenericValue >= 99 )
    { cout << "'A': Excelent' A 'Good Game (gg)' indeed!" << endl; }

  if ( GenericValue >= 80 && GenericValue <= 89 )
    { cout << "'B': Good; Keep up the nice work." << endl; }

  if ( GenericValue >= 70 && GenericValue <= 79 )
    { cout << "'C': Average; An average Joe Americana.  Got Milk and Mushrooms?" << endl; }

  if ( GenericValue >= 60 && GenericValue <= 69 )
    { cout << "'D': Below Average; Does the Sutdent needs after school toutering?" << endl; }

  if ( GenericValue >= 0 && GenericValue <= 59 )
    { cout << "'F': Failing; Perhaps it is time for the school counselor and nurse?" << endl; }
  }

// 'Error Trapping Method' Definitions.
// r: Result, f: flag
int GenericClass::ErrorTrap ( int r )
  {
  int f = 1;

  if ( r >= 0 && r <= 100 )
    { f = 0; }

  return ( f );
  }
