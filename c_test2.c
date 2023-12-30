// q1 pointer
	// A pointer is defined as a derived data type that can store the address of other C variables or a memory location. We can access and manipulate the data stored in that memory location using pointers.
	
	// declaration
		int *ptr;
	// intialization
		int a = 40;
		ptr = &a;

// q2 string
	// A String in C programming is a sequence of characters terminated with a null character ‘\0’. The C String is stored as an array of characters. The difference between a character array and a C string is that the string in C is terminated with a unique character ‘\0’.
	
	// declaration
		char string_name[size];
	//initialization
		char str[] = "This is a string!";
		char str[14] = {'h','e','l','l','o','\0'};
		
// q3 functions
	// A function in C is a set of statements that when called perform some specific task. It is the basic building block of a C program that provides modularity and code reusability. The programming statements of a function are enclosed within { } braces, having certain meanings and performing certain operations.
	
	// types
		// pre-defined or library functions
			printf("hello");
		// user defined functions
			int square(int x){
				return x*x;
			}

// q4 recursive function
	// A Recursive function can be defined as a routine that calls itself directly or indirectly.
	// recursive function for factorial
		long int multiplyNumbers(int n){
		    if (n>=1)
		        return n*multiplyNumbers(n-1);
		    else
		        return 1;
		}

// q5 function calling aspects
	// A function that has no arguments and has no return value.
		void func1(){
			printf("Function called");
		}
		func1();
	// A function that has no arguments but has a return value.
		int func2(){
			return 10;
		}
		func2();
	// A function that has arguments but has no return value.
		void func3(int x){
			printf("%d was passed", x);
		}
		func3(5);
	// A function that has arguments and also has a return value.
		int func4(int n){
			return n*(n+1);
		}
		func4(18);
