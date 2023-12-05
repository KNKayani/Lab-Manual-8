/*____________________________________________________________
Take an array and find the most repeated element in that array.
HOME TASK  8 Q#01
KASHIF NADEEM KAYANI            456466           ME-15 SEC A
*/

#include<iostream>
using namespace std;
int main ()

{
	int n,count;
	cin>>n;  //no. of elements of array 
	int arr[n];
	for ( int i=0;i<n;i++ ){      //inputting array 
		
		cin>> arr[i]; }
    for ( int i=0;i<n;i++ ){  
        count=0;
    	for (int j=0;j<n;j++)   { 
	if (arr[i]==arr[j])     {
		count++;   //incrementing 1 in count
	
	}
	
}
	cout<<"the repeated element is "<<arr[i]<<" and is repeated "<<count<< " times "<<endl;
}
return 0;
}

