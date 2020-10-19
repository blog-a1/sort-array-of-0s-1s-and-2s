#include<iostream>
using namespace std;
int swap012(int a[],int n)
{
	int low = 0, mid = 0, high = n-1;
	while(mid <=  high)
	{
		switch(a[mid])
		{
		case 0:
			swap(a[low++],a[mid++]);
			break;
		case 1:
			mid++;
			break;
		case 2:
			swap(a[mid],a[high--]);
			break;
		}
	}	
	for(int i = 0;i<n;i++)
	{
		cout<<a[i];
	}
}

int main()
{
	int arr[] = {1,2,0,1,2,0,2,2,2,1,1,0,0,0,0,1,1};
	int n = sizeof(arr) / sizeof(arr[0]);
	swap012(arr,n);
  
}
