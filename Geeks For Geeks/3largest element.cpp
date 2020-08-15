// C++ code to find largest 
// three elements in an array 
#include<bits/stdc++.h> 
using namespace std; 

void find3largest(int arr[], int n) 
{ 
	sort(arr, arr + n); //It uses Tuned Quicksort with 
					//avg. case Time complexity = O(nLogn) 
		
	int check = 0, count = 1; 
		
	for(int i = 1; i <= n; i++) 
	{ 
			
		if(count<4) 
		{ 
			if(check != arr[n - i]) 
			{ 
				// to handle duplicate values 
				cout << arr[n - i] << " "; 
				check = arr[n - i]; 
				count++; 
			} 
		} 
		else
			break; 
	} 
} 
	
// Driver code 
int main() 
{ 
	int arr[] = {7,10,4,3,20,15}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	find3largest(arr, n); 
} 

// This code is contibuted by Rajput-Ji 
