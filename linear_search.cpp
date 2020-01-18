#include<iostream>
using namespace std;
int main()
{
	int arr[100],n,key,i,flag=0;
	cout << "Enter the number of elements in the array : ";
	cin >> n;
	cout << "Enter the elements in the array :" << endl;
	for(i=0;i<n;i++)
	cin >> arr[i];
	cout << "Enter the element to be searched : ";
	cin >> key;
	for(i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	cout << "The element is present in the array at the index "<< i+1 << endl;
	else
	cout << "The element is not present in the array..." << endl;
	return 0;
}
