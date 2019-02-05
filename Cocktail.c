#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include<conio.h>
#define MAXNUM 400

	
	void print(int data[], int n){
		
		printf("\nCocktail? ;]:\n");
		for (int ii = 0; ii < n; ++ii) {     
		printf ("%d\n", data[ii]);   }    
			
	}
	
	
	void CockTail(int data[], int n){


	  
	int tmp;      

	int StartIx, EndIx;
	StartIx = 0;
	EndIx = n-1;
	int sw = 1;

	while(sw == 1){
		
		sw = 0;
		//	print(data, 8);	
		for (int i = StartIx; i < EndIx; ++i) {       
			if (data[i] > data[i + 1]) {         
			tmp = data[i];         
			data[i] = data[i + 1];         
			data[i + 1] = tmp;      
			sw = 1;
			
			
			}
		}      
			//print(data, 8);
		if(sw == 0)
			break;
		
		sw = 0;
		
		--EndIx;
		
		for (int i = EndIx -1; i >= StartIx; --i) {       
			if (data[i] > data[i+1]) {         
			tmp = data[i];         
			data[i] = data[i + 1];         
			data[i + 1] = tmp;      
			sw = 1;
			
			
			}
		}  

		++StartIx;			    

	}


}
	
	void CheckSort(int a[], int n){
					
		for (int ii = 0; ii < n-1; ++ii) {     
			
			if(a[ii]>a[ii+1])
				printf("\nALERT!! %d is bigger than %d on spot %d and %d", a[ii], a[ii+1], ii, ii+1);
		
		}    
		
		printf("\nChecksort Done!");
		
	}
	
		
	
		
		
		int main (int argc, char ** argv) {
			
			
			int n;
			scanf("%d", &n);
			
			int randomNumbs[n];
			
			
			for(int i = 0; i<n; i++){
						randomNumbs[i] = rand();
					}
			
		
			printf("\n");
			
			CockTail(randomNumbs, n);
			CheckSort(randomNumbs, n);
			
			
			
			
			int a[]={0, -3, 10, 3, 1, 4, 7, 1};
			
			CockTail(a, 8);
			
			print(a, 8);
			CheckSort(a, 8);
			
		}