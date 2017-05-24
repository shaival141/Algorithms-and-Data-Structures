#include<bits/stdc++.h>
using namespace std;
int binary_search(int arr[],int x,int l,int r)
{
	if(l>r)
		return -1;
	int mid=(l+r)/2;
	if(arr[mid]==x)
		return mid;
	if(arr[mid]>x)
		return binary_search(arr,x,l,mid-1);
	else
		return binary_search(arr,x,mid+1,r);
}
int main()
{
	int arr[]={1,4,7,9,10,14,17,19,22,26};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<binary_search(arr,9,0,n-1)<<endl;
	cout<<binary_search(arr,22,0,n-1)<<endl;
	cout<<binary_search(arr,18,0,n-1)<<endl;
	return 0;
}