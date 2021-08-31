// System Includes
#include <iostream>

// Non System Header Includes
#include "generic_class.h"
#include "generic_program.h"

// Name Space Shortcuts
using namespace std;            // for 'cin' and 'cout'.  ['std::cin' / 'std:cout']

// Function Definitions
// f: Flag (Error Trapping), r: result
int GenericProgram (  )
  {
  GenericClass GenericObject;   // create the date object.
  int f = 1, r = 0;

  while ( f == 1 )                                                              //if the flag is still 0 then ask for an integer input
    {
    r = GenericObject.GetValue (  );
    f = GenericObject.ErrorTrap ( r );
    }

  GenericObject.SetValue ( r );                                                 // Assign values to Object Members by way of 'methods'

  // Show the values contained in members of the Object.
  GenericObject.SeeValue (  );

  return ( 0 );
  }
