 /*______________________________________________
Implement Selection Sort on an array of 5 integers.
KASHIF NADEEM KAYANI       456466         ME-15 SEC A
*/

#include <iostream>
using namespace std;
int main(){
	
	
	int arr [5] = {1,4,2,7,3 };  //declaring array with 5 variables
	int a=0;
	
	for ( int i =0; i<5;i++)
	{ 
		a= arr[i];
		for ( int j=i;j<5;j++  ) { 
		
		if ( a>arr[j] )
		{
			a=arr[j];   //applying selection sort
			arr[j] = arr[i];
			arr[i]=a;
			
		}   } 
	} 
	
	for ( int i=0; i<5;i++ )  {
		cout<<arr[i]<<" ";   //orinting output.
	 } return 0;
	 
	 }
