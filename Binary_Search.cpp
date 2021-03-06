// # Binary-Search-Cpp
// Author: Aslam Khan
// Email : aslamkhanofficial@yahoo.com
// Institute : Air University Islamabad

#include<iostream>
using namespace std;
int main()
{
	int arr[10];		// Array Decleratioin
	for(int i=0;i<10;i++) // Input value in Array
	{
		cout<<"Enter Value "<<i+1<<" = 	";
		cin>>arr[i];
		
	}
	int temp; // used to store variable Temprory
	for(int i=0;i<10;i++)// Loop for Sorting Array
	{
		for(int j= i;j<10;j++)// This loop will compare every value of array with whole array
		{
			if(arr[i]>arr[j])
			{
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
	cout<<"Array After Sorting = ";
	for(int i=0;i<10;i++) // Loop for Output Sorted Array
	{
		cout<<arr[i]<<"  ";
	}
	
	int left, right, mid;
	left= 0;// Fist Index is 0
	right = 9; // 		Last Index is 9
	cout<<endl<<"Enter Value to Search = ";
	int x; 	// Value to search
	cin>>x;
	int index; // To Store the Index of search value
	while(left <= right)
	{
		mid = left + (right - left) / 2; // It will devide the array into parts 
		if(arr[mid] == x) 
		{
			index = mid;
			break;
		
		}
		else if(x> arr[mid]) // As Array is Sorted Then if the 'X' is greater then Mid INdex VAlue
		{
			left = mid+1; //	Then the We will Search the Value at right side of Mid Index
		}
		else // If X is less then Mid Value then we will search the value at Left side of Mid index
		{
			right = mid -1; 
		}
	}
	
	cout<<"Value Found at Index "<<index<<endl;
	
	system("pause");
}
