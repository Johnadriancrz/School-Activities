#include <iostream>
#include <string>
using namespace std;



int main(int argc, char** argv) 
{
	
	int n,x,i,j,f,row,col;

	cout<<"Enter Row: ";
	cin>>n;
	cout<<"Enter Column: ";
	cin>>x;
	
	int array[n] [x];
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<x; j++)
		{
			cout<<"Value: ";
			cin>>array[i][j];
			
		}
	}
	
	//frequency
	
	int xholder = 0, nholder = 0, fcounter=0;
	
	cout<<"Enter number to find it frequency: ";
	cin>>f;
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<x; j++)
		{
			if(array[i][j] == f)
			{
				fcounter++;
			}
		}
	}
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<x; j++)
		{
			cout<<array[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	cout<<"The frequency of the number above is: "<<f<<endl;
	cout<<"The frequency is: "<<fcounter<<endl;
	
	//Index of row & column [][]
	for(row=0; row<n; row++)
	{
		for(col=0; col<x; col++)
		{
			if(array[row][col] == f)
			{
				cout<<"The 1st encounter of this number is in index " <<"["<<row<<"]"<<"["<<col<<"]";
				return 0;
			}
		}
	}

	return 0;
}
