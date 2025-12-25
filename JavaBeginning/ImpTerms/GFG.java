// Java Program to Illustrate Execution of Static Block
// Before Constructors

// Class 1
// Helper class
class Test {

	// Case 1: Static variable
	public static int i;
	// Case 2: Non-static variable
	int j;
	// Case 3: Static blocks
	static
	{
		i = 0;
		i +=10;
		System.out.println("static block called ");
	}

	// Constructor calling
	Test() { System.out.println("Constructor called"); }
}

// Class 2
// Main class\
/* Class Test is loaded into memory (once per program run).
The static block is executed at this momen*/
class GFG {

	// Main driver method
	public static void main(String args[])
	{

		// Although we have two objects, static block is
		// executed only once.
		Test t1 = new Test();
		Test t2 = new Test();
		System.out.println (t1.i); //10
		System.out.println(t2.i);//10
	}
}
// static methods in Java are resolved at compile time because they are bound using static binding (early binding