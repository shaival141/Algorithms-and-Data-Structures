#include <iostream>
using namespace std;
int linear_search(int arr[],int n,int key)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==key)
			return i;
	}
	return -1;
}
int main()
{
	int arr[]={1,2,4,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	int key=2;
	cout<<linear_search(arr,n,key);
	return 0;
}
