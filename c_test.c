// q1 How to declare and initialize a Two-dimensional array? Discuss with examples.

	// declare 2d array:
		// Syntax
			data_type array_name[m][n];
		// Example
			int x[20][10];
	// declaration and initialization:
		int a[4][3] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
		//OR
		int a[4][3] = {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}, {9, 10, 11}};
		//OR
		int a[m][n];
		for(int i = 0; i < m; i++){
		    for(int j = 0; j < n; j++){
		        x[i][j] = i * j + 1;
		    }
		}
		
// q2 Write a program to print multiplication of two matrices.

	#include <stdio.h>

	// function to get matrix elements entered by the user
	void getMatrixElements(int matrix[][10], int row, int column) {
	
	   printf("\nEnter elements: \n");
	
	   for (int i = 0; i < row; ++i) {
	      for (int j = 0; j < column; ++j) {
	         printf("Enter a%d%d: ", i + 1, j + 1);
	         scanf("%d", &matrix[i][j]);
	      }
	   }
	}
	
	// function to multiply two matrices
	void multiplyMatrices(int first[][10],
	                      int second[][10],
	                      int result[][10],
	                      int r1, int c1, int r2, int c2) {
	
	   // Initializing elements of matrix mult to 0.
	   for (int i = 0; i < r1; ++i) {
	      for (int j = 0; j < c2; ++j) {
	         result[i][j] = 0;
	      }
	   }
	
	   // Multiplying first and second matrices and storing it in result
	   for (int i = 0; i < r1; ++i) {
	      for (int j = 0; j < c2; ++j) {
	         for (int k = 0; k < c1; ++k) {
	            result[i][j] += first[i][k] * second[k][j];
	         }
	      }
	   }
	}
	
	// function to display the matrix
	void display(int result[][10], int row, int column) {
	
	   printf("\nOutput Matrix:\n");
	   for (int i = 0; i < row; ++i) {
	      for (int j = 0; j < column; ++j) {
	         printf("%d  ", result[i][j]);
	         if (j == column - 1)
	            printf("\n");
	      }
	   }
	}
	
	int main() {
	   int first[10][10], second[10][10], result[10][10], r1, c1, r2, c2;
	   printf("Enter rows and column for the first matrix: ");
	   scanf("%d %d", &r1, &c1);
	   printf("Enter rows and column for the second matrix: ");
	   scanf("%d %d", &r2, &c2);
	
	   // Taking input until
	   // 1st matrix columns is not equal to 2nd matrix row
	   while (c1 != r2) {
	      printf("Error! Enter rows and columns again.\n");
	      printf("Enter rows and columns for the first matrix: ");
	      scanf("%d%d", &r1, &c1);
	      printf("Enter rows and columns for the second matrix: ");
	      scanf("%d%d", &r2, &c2);
	   }
	
	   // get elements of the first matrix
	   getMatrixElements(first, r1, c1);
	
	   // get elements of the second matrix
	   getMatrixElements(second, r2, c2);
	
	   // multiply two matrices.
	   multiplyMatrices(first, second, result, r1, c1, r2, c2);
	
	   // display the result
	   display(result, r1, c2);
	
	   return 0;
	}
	
// q3 Write a program to print the sum of upper and lower triangular matrix.

	#include <stdio.h>
	
	int main()
	{
	    int m,n;                 //Matrix Size Declaration
	    printf("Enter the number of rows and column: \n");
	    scanf("%d %d",&m,&n);   //Matrix Size Initialization
	    int arr[10][10];        //Matrix Size Declaration
	    printf("\nEnter the elements of the matrix: \n");
	    for(int i=0;i<m;i++)    //Matrix Initialization
	    {
	        for(int j=0;j<n;j++)
	        {
	            scanf("%d",&arr[i][j]);
	        }
	    }
	    printf("\nThe elements in the matrix are: \n");
	    for(int i=0;i<m;i++)     //Print the matrix
	    {
	        for(int j=0;j<n;j++)
	        {
	            printf("%d ",arr[i][j]);
	        }
	        printf("\n");
	    }
	    if(m==n)               //If number of rows and columns equal
	    {
	       int upsum=0;
	       for(int i=0;i<m;i++)
	       {
	          for(int j=0;j<n;j++)
	          {
	               if(i<=j)          //Traverse only in the upper triangle
	               upsum=upsum+arr[i][j];    //Add the elements 
	          }
	        }
	        //Print the sum of upper triangular elements
	        printf("\nThe sum of upper triangular matrix is %d",upsum);
	    }
	    else
	    {                   //Not possible to declare upper triangular elements 
	        printf("Not Possible to display lower triangular elements sum");
	    }
	    return 0;
	}

// q4 Write a program to accept elements of an array from user and sort and display them in ascending order.

	#include <stdio.h>    
	     
	int main()    
	{    
	    //Initialize array     
	    int arr[] = {5, 2, 8, 7, 1};     
	    int temp = 0;    
	        
	    //Calculate length of array arr    
	    int length = sizeof(arr)/sizeof(arr[0]);    
	        
	    //Displaying elements of original array    
	    printf("Elements of original array: \n");    
	    for (int i = 0; i < length; i++) {     
	        printf("%d ", arr[i]);     
	    }      
	        
	    //Sort the array in ascending order    
	    for (int i = 0; i < length; i++) {     
	        for (int j = i+1; j < length; j++) {     
	           if(arr[i] > arr[j]) {    
	               temp = arr[i];    
	               arr[i] = arr[j];    
	               arr[j] = temp;    
	           }     
	        }     
	    }    
	        
	    printf("\n");    
	        
	    //Displaying elements of array after sorting    
	    printf("Elements of array sorted in ascending order: \n");    
	    for (int i = 0; i < length; i++) {     
	        printf("%d ", arr[i]);    
	    }    
	    return 0;    
	}     
	
// q5 Write a program to delete any element from the array and print a new array.

	#include <stdio.h>
	#include <stdlib.h>
	 
	int main(){
	    int i, n, index, arr[10];
	    printf("Enter the size of the array: ");
	    scanf("%d", &n);
	    printf("Enter the elements of the array: \n");
	    for (i = 0; i < n; i++){
	        printf("arr[%d] = ", i);
	        scanf("%d", &arr[i]);
	    }
	    printf("Enter the index of the element to be deleted: ");
	    scanf("%d", &index);
	    if (index >= n+1){  
	        printf (" \n Deletion is not possible in the array.");  
	    }  
	    else{  
	        for (i = index; i < n - 1; i++)
	            arr[i] = arr[i + 1];
	            printf("The array after deleting the element is: ");
	        for (i = 0; i < n - 1; i++)
	            printf("%d ", arr[i]);
	        return 0;
	    }
	}