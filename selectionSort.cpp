#include<iostream>
using namespace std;



void selections(int *a,int size)
{
	int i, j, min,tmp;
	
	for(i=0;i<size-1;i++)
	{
		min=i;
		for(j=i+1;j <size;j++)
		{
			if(a[j] <a[min])
				min=j;
		}
		tmp=a[i];
		a[i]=a[min];
		a[min]=tmp;
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
//	a[9]=1;
	a[5]=-1;
	showArr(a,10);
	selections(a,10);
	showArr(a,10);
	return 0;
}
