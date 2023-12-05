/*____________________________________________________________
Develop a program that takes 5 array elements from user. Swap position [2] 
element with position [4] element
HOME TASK  8 Q#03
KASHIF NADEEM KAYANI            456466           ME-15 SEC A
*/
#include <iostream>
using namespace std;
 int main()
 {
int arr[5],a;   //declraing array and a 
cout<<"enter the elements of array ";   //input from user
for (int i=1;i<=5;i++)
{
	cin>>arr[i];
	 } 	
	 cout<<"entered array is ";   //printing entered array
	 for (int i=1;i<=5;i++){
	cout<<arr[i];
}
cout<<endl;

 
	a=arr[2];  //swapping elements 
	arr[2]=arr[4];
	arr[4]=a;
	
	cout<<"the swapped array is ";  //printing swapped array
	for (int i=1;i<=5;i++ )
{
		 	 cout<<arr[i];
}

return 0;
}  

