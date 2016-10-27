
#include <iostream>
using namespace std;
void main(){
    setlocale(LC_ALL, "rus");
    int i,x,s=1,n,t=1;
	cin >>n;
	int*arr= new int[n];
	cout << "Массив до сдвига :";
	for (int i=0; i<n;i++)
	{
		arr[i] = -n +rand() % n;
		cout <<arr[i]<< " ";
		
	}
    cout << endl;
    for (i = 0; i < s; i++)
    { int w = arr[0];
        while (t <n ) arr[t - 1] = arr[t++];
        arr[t - 1] = w;}
    cout << "Массив после сдвига влево: ";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";}
    cout << endl;
    system("pause");
}