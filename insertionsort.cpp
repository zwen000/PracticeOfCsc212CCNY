#include<iostream>
using namespace std;

void inserts(int *a,int size)
{
	int i ,j, tmp;
	for(i=1; i<size;i++)
	{
		tmp = a[i];
		for(j=i-1;j>=0;j--)
		{
			if(tmp < a[j] )
			{
				a[j+1]=a[j];
			}
			else
			{
				break;
			}
			
		}
		a[j+1] = tmp;
	} 
}



void showArr(int* a,int length)
{
		
	for(int j = 0;j<length;j++)
	{
		cout<<a[j]<<endl;
	}
	cout <<endl;
	
}

int main( ) 
{
	int *a = new int[10];
	int b=10;
	for(int i = 0;i<10;i++)
	{
		a[i]=b;
		b--;
	}
//	a[9]=12;
//	a[5]=0;
	showArr(a,10);
	inserts(a,10);
	showArr(a,10);
	return 0;
}
