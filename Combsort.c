#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include<conio.h>


	void CheckSort(int a[], int n){
						
			for (int ii = 0; ii < n-1; ++ii) {     
				
				if(a[ii]>a[ii+1])
					printf("\nALERT!! %d is bigger than %d on spot %d and %d", a[ii], a[ii+1], ii, ii+1);
			
			}    
			
			printf("\nChecksort Done!");
			
		}
		
	void print(int data[], int n){
		
		printf("\nDatComb? ;]:\n");
		for (int ii = 0; ii < n; ++ii) {     
		printf ("%d\n", data[ii]);   }    
			
	}	
	
	int getNextGap(int gap) 
{ 
    // Shrink gap by Shrink factor 
    gap = (gap*10)/13; 
  
    if (gap < 1) 
        return 1; 
    return gap; 
} 

	void combSort(int data[], int n ){
			
		int gap = n;
		int shrink = 1.3;
		int sorted = 0;
		
		while(sorted == 0){
			gap = getNextGap(gap);
			if(gap > 1)
				sorted = 0;
			else
				sorted =1;
		
			for(int i = 0; i+gap<n; i++){
				if(data[i]> data[i+gap]){
					int tmp = data[i];
					data[i] = data[i+gap];
					data[i+gap] = tmp;
					sorted = 0;
					//print(data, 8);
				}
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
			
			combSort(randomNumbs, n);
			CheckSort(randomNumbs, n);
			
			
		
		int a[]={0, -3, 10, 3, 1, 4, 7, 1};
			
			print(a, 8);
			combSort(a, 8);
			
			print(a, 8);
			CheckSort(a, 8);
		
	}
				
				