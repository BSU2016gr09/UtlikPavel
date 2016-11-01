#include "stdio.h"
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
        const int N=10;
        int A[N], col=0, i, j;
       for (int i=0; i<N;i++){
	
		A[i] = 1 +rand() % 10;
		cout <<A[i]<< " ";}
        for(i=0; i<N; i++)
        {
            int temp=0;
            for(j=0; j<i; j++)
                if(A[i]==A[j])
                    temp++;
                if(temp==0)
                {
                    for(j=i+1; j<N; j++)
                        if(A[i]==A[j])
                            temp++;
                        if(temp>1)
                            col++;
                }
        }
       cout<<endl;
	   cout<<"Количество элементов встречающихся более 2 раз:"<<col<<" ";
     
		 system("pause");
}