#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include<conio.h>

	
	void CheckSort(int a[], int n){
						
			for (int ii = 0; ii < n-1; ++ii) {     
				
				if(a[ii]>a[ii+1])
					printf("\nALERT!! %d is bigger than %d on spot %d and %d", a[ii], a[ii+1], ii, ii+1);
			
			}    
			
			printf("\nChecksort Done!");
			
		}
		
	void print(int data[], int n){
		
		printf("\nCycleSort? ;]:\n");
		for (int ii = 0; ii < n; ++ii) {     
		printf ("%d\n", data[ii]);   }    
			
	}
	
	int * swap(int a[], int i, int j){
		
		int tmp;
			tmp = a[i];
			a[i] = a[j];
			a[j] = tmp;
			
			return a;
		
	}

	
		
		void cycleSort(int arr[], int n) 
	{ 
	int tmp;
    // count number of memory writes 
    int writes = 0; 
  
    // traverse array elements and put it to on 
    // the right place 
    for (int cycle_start = 0; cycle_start <= n - 2; cycle_start++) { 
        // initialize item as starting point 
        int item = arr[cycle_start]; 
  
        // Find position where we put the item. We basically 
        // count all smaller elements on right side of item. 
        int pos = cycle_start; 
        for (int i = cycle_start + 1; i < n; i++) 
            if (arr[i] < item) 
                pos++; 
  
        // If item is already in correct position 
        if (pos == cycle_start) 
            continue; 
  
        // ignore all duplicate  elements 
        while (item == arr[pos]) 
            pos += 1; 
  
        // put the item to it's right position 
        if (pos != cycle_start) { 
         			
			tmp = arr[pos];
			arr[pos] = item;
			item = tmp;			
            writes++; 
			print(arr, 8);
        } 
  
        // Rotate rest of the cycle 
        while (pos != cycle_start) { 
            pos = cycle_start; 
  
            // Find position where we put the element 
            for (int i = cycle_start + 1; i < n; i++) 
                if (arr[i] < item) 
                    pos += 1; 
  
            // ignore all duplicate  elements 
            while (item == arr[pos]) 
                pos += 1; 
  
            // put the item to it's right position 
            if (item != arr[pos]) { 
                			
				tmp = arr[pos];
				arr[pos] = item;
				item = tmp;	
				print(arr, 8);
                writes++; 
            } 
        } 
	//	print(arr, 8);
    } 
	
	}
	
	int main (int argc, char ** argv) {
		
			/*int n;
			scanf("%d", &n);
			
			int randomNumbs[n];
			
			
			for(int i = 0; i<n; i++){
						randomNumbs[i] = rand();
					}
			
		
			printf("\n");
			
			cycleSort(randomNumbs, n);
			CheckSort(randomNumbs, n);
			*/
			
		
		int a[]={0, -3, 10, 3, 1, 4, 7, 1};
			
			print(a, 8);
			cycleSort(a, 8);
			
			print(a, 8);
			CheckSort(a, 8);
  
    
} 