#include <iostream>
using namespace std;

int main(int argc, char** argv) {

   int i,x,n,j;
   
   cout<<"Enter The Size: ";
   cin>>n;
   
   int array[n];
   int arr[n];
   
   for(i=0;i<n;i++)
   {
       cout<<"Enter Name: ";
       cin>>array[i];
       cout<<"Enter Number: ";
       cin>>arr[i];
   }
   
   cout<<"[1] - VIEW || [2] - SEARCH ";
   cout<<endl;
   cin>>x;
   
   if(x==1)
   {
       for(i=0;i<n;i++)
        {
           cout<<"Enter Name: ";
           cout<<array[i];
           cout<<endl;
           cout<<"Enter Number: ";
           cout<<arr[i];
           cout<<endl;
        }
   }
   else if (x==2)
   {
       cout<<"Enter Choice: ";
       cin>>j;
       
           j=j-1;
            cout<<"Name: ";
            cout<<array[j];
            cout<<endl;
            cout<<"Number: ";
            cout<<arr[j];
            cout<<endl; 
   }
   else
   {
       cout<<"You Input The Wrong One, Try again";
   }
	return 0;
}
