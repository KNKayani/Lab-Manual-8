/*______________________________________________________________
. Implement Bubble Sort on an array of 5 integers.
KASHIF NADEEM KAYANI           456466              ME-15 SEC A
*/

#include <iostream>
using namespace std;
int main(){
	int i,j,temp;   //declaring three variables 
	int a[5]={5,4,6,2,8} ;  //declaring aray a with 6 elements

	
	 for (int i=0; i<5; i++)    //again using for loop
	{
	for(j=0; j<5; j++){    //using nested for loop
			if(a[j]>a[j+1]){    //if previous number is greater than following number 
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}}
	for(i=1; i<=5; i++){   //using for loop for printing 
		cout<<a[i]<<", ";   //printing results
	}
	return 0;
}

