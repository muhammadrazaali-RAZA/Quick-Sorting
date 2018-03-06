#include<iostream>
using namespace std;

class sort
{
	public :
	void swap(int *value_1,int *value_2)
	{
		int temp=*value_1;
		*value_1=*value_2;
		*value_2=temp;
	}
	
	int arrayCheck(int array[], int first, int last)
	{
		int i = array[last];
		int j = (first - 1);
	
		for (int k = first; k <= last- 1; k++)
		{
			if (array[k] <= i)
			{
				j++;
				swap (&array[j], &array[k]);
			}
		}
		swap (&array[j + 1], &array[last]);
		return (j + 1);
	}

	void quickSort(int Ary[], int i, int j)
	{
		if (i < j)
		{
			int integr = arrayCheck(Ary,i,j); 
			quickSort(Ary, i, integr - 1); 
			quickSort(Ary, integr + 1,j);
		}
	}
};



int main()
{
	class sort st; 
	int ary[10];
	for (int i=0; i<10; i++)
	{
		cout<<"Enter "<<i+1<<" number :";
		cin>>ary[i];
	}
	st.quickSort(ary,0,9);
	for (int i=0; i<10; i++)
	{
		cout<<ary[i]<<" ";
	}
}
