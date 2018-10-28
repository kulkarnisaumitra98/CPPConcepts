#include<array>
#include<vector>
#include"saumitra.h"

int binarysrch(std::array<int,A_LENGTH>&a,int x,int min,int max) { 

	while(max>=min) {

		int centre = (min+max)/2;
	
		if(a[centre] > x) {
			
			max = centre-1;
		}

		else if(a[centre] < x) {
		
			min =centre+1;
		}

		else if(a[centre] == x) {

			return centre;
		}
		
	}
return -1;

}

int binarysrch(std::array<double,A_LENGTH>&a,int x,int min,int max) { 

	while(max>=min) {

		int centre = (min+max)/2;
	
		if(a[centre] > x) {
			
			max = centre-1;
		}

		else if(a[centre] < x) {
		
			min =centre+1;
		}

		else if(a[centre] == x) {

			return centre;
		}
		
	}
return -1;

}

int binarysrch(int *a,int x,int min,int max) { 

	while(max>=min) {

		int centre = (min+max)/2;
	
		if(a[centre] > x) {
			
			max = centre-1;
		}

		else if(a[centre] < x) {
		
			min =centre+1;
		}

		else if(a[centre] == x) {

			return centre;
		}
		
	}
return -1;

}

int binarysrch(double *a,int x,int min,int max) { 

	while(max>=min) {

		int centre = (min+max)/2;
	
		if(a[centre] > x) {
			
			max = centre-1;
		}

		else if(a[centre] < x) {
		
			min =centre+1;
		}

		else if(a[centre] == x) {

			return centre;
		}
		
	}
return -1;

}

int binarysrch(std::vector<int>&a,int x,int min,int max) { 

	while(max>=min) {

		int centre = (min+max)/2;
	
		if(a[centre] > x) {
			
			max = centre-1;
		}

		else if(a[centre] < x) {
		
			min =centre+1;
		}

		else if(a[centre] == x) {

			return centre;
		}
		
	}
return -1;

}

int binarysrch(std::vector<double>&a,int x,int min,int max) { 

	while(max>=min) {

		int centre = (min+max)/2;
	
		if(a[centre] > x) {
			
			max = centre-1;
		}

		else if(a[centre] < x) {
		
			min =centre+1;
		}

		else if(a[centre] == x) {

			return centre;
		}
		
	}
return -1;

}
