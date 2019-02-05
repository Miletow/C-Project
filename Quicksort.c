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
		
		printf("\nHeapsort? ;]:\n");
		for (int ii = 0; ii < n; ++ii) {     
		printf ("%d\n", data[ii]);   }    
			
	}
	
	int partition(int A[], int lo, int hi){
		int pivot, j , i, tmp;
		
			//Furthest to the right
			pivot = A[hi];
			i = lo;
			
			for(j = lo; j<hi; j++){
				if(A[j]<pivot){
					
						tmp = A[i];
						A[i] = A[j];
						A[j] = tmp;
						i++;
					// i Increases when shift occur. i is the split for next recursion.
					
				}
			}
			tmp = A[i];
			A[i] = A[hi];
			A[hi] = tmp;
			
			//print(A, 8);
			return i;
			
	}
	
	void quicksort(int A[], int lo, int hi){
		if (lo < hi){
			int p = partition(A, lo, hi);
			quicksort(A, lo, p-1);
			quicksort(A, p+1, hi);
		
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
			
			quicksort(randomNumbs,0, n-1);
			CheckSort(randomNumbs, n);
			
			
		
		
		int a[]={0, -3, 10, 3, 1, 4, 7, 1};
			
			print(a, 8);
			quicksort(a,0, 7);
			
			print(a, 8);
			CheckSort(a, 8);
			
		
		
	}
				
				