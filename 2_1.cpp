#include <iostream>
#include <time.h>
using namespace std;
int main()
{
	int i,n,j,k;
	cin >>n;
	int*arr= new int[n];
	for (int i=0; i<n;i++)
	{
		arr[i] = 1 +rand() % n;
		cout <<arr[i]<< " ";
		
	}
	cout<<endl;
j=n-1;
for (int i=0; i<n/2;i++)
{
k=arr[i];
arr[i]=arr[j];
arr[j]=k;
j--;
}
for (int i=0;i <n ;i++)
{
	cout<<arr[i]<<" ";
}
	system ("pause");
}