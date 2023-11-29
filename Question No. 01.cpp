/*______________________________________________
Write a C++ program to calculate average of numbers of array
KASHIF NADEEM KAYANI       456466         ME-15 SEC A
*/

#include <iostream>
using namespace std;
int main(){ 
	int a[5] ;
float sum =0;

 for ( int i=0;i<5;i++)
 {
 	cin>>a[i];
 }
	for ( int i=0;i<5;i++  )
{
	sum+=a[i];
	}
	sum=sum/5;
	cout<<sum;	
	
	return 0;


} 
