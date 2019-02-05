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
	
	void shellSort(int data[], int n) 
	{ 
	// Start with a big gap, then reduce the gap 
	for (int gap = n/2; gap > 0; gap /= 2) 
	{ 
		// Do a gapped insertion sort for this gap size. 
		// The first gap elements a[0..gap-1] are already in gapped order 
		// keep adding one more element until the entire array is 
		// gap sorted  
		for (int i = gap; i < n; i += 1) 
		{  
			// add a[i] to the elements that have been gap sorted 
			// save a[i] in temp and make a hole at position i 
			int temp = data[i]; 

			// shift earlier gap-sorted elements up until the correct  
			// location for a[i] is found 
			//print(data, 8);
			int j;             
			for (j = i; j >= gap && data[j - gap] > temp; j -= gap) 
				data[j] = data[j - gap]; 
			  
			//  put temp (the original a[i]) in its correct location 
			data[j] = temp; 
			
			
		} 
	} 
	 
	} 
				
		
		int main (int argc, char ** argv) {
			
			int n;
			scanf("%d", &n);
			
			int randomNumbs[n];
			
			
			for(int i = 0; i<n; i++){
						randomNumbs[i] = rand();
					}
			
		
			printf("\n");
			
			shellSort(randomNumbs, n);
			CheckSort(randomNumbs, n);
			
		//https://www.youtube.com/watch?v=ddeLSDsYVp8&t=173s*/
		
		int a[]={0, -3, 10, 3, 1, 4, 7, 1};
			
			shellSort(a, 8);
			
			print(a, 8);
			CheckSort(a, 8);
		}