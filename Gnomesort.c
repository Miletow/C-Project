#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include<conio.h>
#define MAXNUM 400

	void CheckSort(int a[], int n){
						
			for (int ii = 0; ii < n-1; ++ii) {     
				
				if(a[ii]>a[ii+1])
					printf("\nALERT!! %d is bigger than %d on spot %d and %d", a[ii], a[ii+1], ii, ii+1);
			
			}    
			
			printf("\nChecksort Done!");
			
		}
		
		
		void print(int data[], int n){
		
		printf("\nCocktail? ;]:\n");
		for (int ii = 0; ii < n; ++ii) {     
		printf ("%d\n", data[ii]);   }    
			
	}
	
	void gnomeSort(int data[], int n){
		
		int first = 1; 
		
		while(first<n)
		{
			if(data[first - 1] <= data[first])
			{
				first++;
				
			}
			else{
				int tmp = data[first-1];
				data[first-1] = data[first];
				data[first] = tmp;
			//	print(data, n);
				if(-- first == 0)
				{
					first = 1;
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
			
			gnomeSort(randomNumbs, n);
			CheckSort(randomNumbs, n);
			
			
			int a[]={0, -3, 10, 3, 1, 4, 7, 1};
			
			gnomeSort(a, 8);
			
			print(a, 8);
			CheckSort(a, 8);
	}