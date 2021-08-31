//''#ifndef' Check.
#ifndef GENERIC_CLASS_H
#define GENERIC_CLASS_H

// Class Declarations.
class GenericClass
  {
	public:
    // Initialize Constructor with default values if not provided.
    GenericClass ( int = 0 );    // This method shares the same class name, always.

    // Member Method Declarations for (~)Destructor.  Shares the same ''~ClassName', always.
    ~GenericClass (  );          // Returns no value and accepts no arguments, always.

    // Member Method Declarations.
    // Set Method Declarations.
    void SetValue ( int );      // set value

    // Get Method Declarations.
    int GetValue (  );          // get value

    // Show Method Declarations.
	  void SeeValue (  );         // set value

    // Error Trapping method
    int ErrorTrap ( int );

	private:
    int GenericValue;

  };

#endif
