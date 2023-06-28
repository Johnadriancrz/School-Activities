#include <iostream>
using namespace std;


int main(int argc, char** argv) {
	
	int arr[10];
    int total, sum=0;
    
    for(int a=0; a<10; a++)
    {
        cout<<"enter a number: ";
        cin>>arr[a];
    }
    for(int x=0; x<10; x++)
    {
        if(arr[x]%2==0)
        {
            sum+= arr[x];
            total+=1;
        }
    }
    cout<<"sum of all even numbers: "<<sum<<endl;
    cout<<"Total: "<<total;
        
	return 0;
}
