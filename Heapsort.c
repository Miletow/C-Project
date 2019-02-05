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
		
		printf("\nHeapsort? ;]:\n");
		for (int ii = 0; ii < n; ++ii) {     
		printf ("%d\n", data[ii]);   }    
			
	}
	
		int leftChild(int i){ int d = 2*i +1;
		return d;}
		int rightChild(int i){ int d = 2*i +2;
		return d;}
		int iParent(int i){ double d = floor((i-1)/2);

		return d;}

		void siftDown(int a[], int start, int end){


		int tmp;
		int root = start;

		while(leftChild(root)<= end){
			
			int child = leftChild(root);
			int swap = root;
			
			if(a[swap] < a[child]){
				swap = child;
			}
			if(child+1 <= end && a[swap] < a[child+1]){
				swap = child +1;
			}
			if (swap == root){
				break;
			}
			else{
			
			tmp = a[root];
			a[root] = a[swap];
			a[swap] = tmp;
			root = swap;
			
			
			}
		}

		}





		void heapify(int a[], int n){

		int start = iParent(n-1);

				
		while(start>= 0){
			
			siftDown(a, start, n-1);
			
			start = start-1;
		}
		printf("HeybBaberiba!");
	//	print(a, 8);


		}

		void swap(int a[], int i, int j){

		int tmp;
			tmp = a[i];
			a[i] = a[j];
			a[j] = tmp;
			
				
		}

		void heapsort(int a[], int n){


		heapify(a, n);

		int end = n-1;
		while(end>0){
			
			swap(a, end, 0);
			
			--end;
			
			siftDown(a, 0, end);
			//print(a, 8);
			
			
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
			
			heapsort(randomNumbs, n);
			CheckSort(randomNumbs, n);
			
			
		int a[]={0, -3, 10, 3, 1, 4, 7, 1};
			
			print(a, 8);
			heapsort(a, 8);
			
			print(a, 8);
			CheckSort(a, 8);
		
			
	}