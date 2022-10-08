#include<bits/stdc++.h>
using namespace std;

int selectSort(int a[], int size){
	int i, j, min, temp;
	
	//outer loop 
	for(i = 0; i < size-1; i++){
		min = i;
		
		//inner loop
		for(j = i+1; j < size; j++){
            
			if(a[min] > a[j])
			    //update the new min if the condition is true
				min = j;
				
				//swap the element present in a[min] with element present in a[i]
				temp = a[min];
				a[min] = a[i];
				a[i] = temp;
		}
	}
	return 0;
	
}

int print(int a[], int size) 
{  
    int i;  
    for (i = 0; i < size; i++)  
        cout<<a[i]<<" ";
  return 0;
}

int main(){
	
	//declaration and initialisation of an array
	int a[] = {109,223,18,190,119};
	
	//calculatingg the size of array
	int size = sizeof(a)/sizeof(a[0]);
	
	//calling the selectSort() function
	selectSort(a, size);
	
	//calling the print() function
	print(a, size);
	
	return 0;
}
