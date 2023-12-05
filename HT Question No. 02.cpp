/*____________________________________________________________
Let’s say an array is a[8] = {13, 15, 17, 9, 99, 77, 65, 43}. Find largest and 
smallest element
HOME TASK  8 Q#03
KASHIF NADEEM KAYANI            456466           ME-15 SEC A
*/
#include <iostream>
using namespace std;
 int main()
 {
int arr[8]={13, 15, 17, 9, 99, 77, 65, 43} , max=0 ; int min=arr[0];  //declaring max and minimum
for (int i=0;i<8;i++)  //using for loop
{
	if ( max<arr[i]) {   //if maximum is less than each number of array
	max= arr[i];
	 } 
	 if (min>arr[i]){
	 	min=arr[i];
	 }
	 } 
		cout<<"the maximum number in given array is "<<max<<endl;  //printing largest number
		cout<<"the minimum number in array is "<<min<<endl;  //printing smallest
	return 0;
	 }
	 
