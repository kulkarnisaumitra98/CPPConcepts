#include<vector>
#include<array>
#include"saumitra.h"

void merge(int *a,int min,int centre ,int max)
{
	int n1,n2;
	
	n1 = centre - min +1;
	n2 = max-centre;

	int L[n1],R[n2];

	for(int i=0;i<n1;i++)
	{
		L[i] = a[i+min];
	}	
	
	for(int i=0;i<n2;i++)
	{
		R[i] = a[i+centre+1];
	}

	int i=0,j=0,k=min;
	
	while((i < n1) && (j < n2))
	{
		if(L[i] > R[j])
		{
			a[k] = R[j];

			k++;
			j++;
		}
		else
		{
			a[k] = L[i];
			
			i++;
			k++;
		} 
	}
	
	while(i<n1)
	{
		a[k] = L[i];
		
		i++;
		k++;
	}
	while(j<n2)
	{
		a[k] = R[j];
		
		j++;
		k++;
	}
}


void mergesort(int *a,int min,int max)
{
	if(max>min)
	{	

		int centre = (min+max)/2;

		mergesort(a,min,centre);
		
		mergesort(a,centre+1,max);

		merge(a,min,centre,max);
	
	}
}

void merge(double *a,int min,int centre ,int max)
{
	int n1,n2;
	
	n1 = centre - min +1;
	n2 = max-centre;

	double L[n1],R[n2];

	for(int i=0;i<n1;i++)
	{
		L[i] = a[i+min];
	}	
	
	for(int i=0;i<n2;i++)
	{
		R[i] = a[i+centre+1];
	}

	int i=0,j=0,k=min;
	
	while((i < n1) && (j < n2))
	{
		if(L[i] > R[j])
		{
			a[k] = R[j];

			k++;
			j++;
		}
		else
		{
			a[k] = L[i];
			
			i++;
			k++;
		} 
	}
	
	while(i<n1)
	{
		a[k] = L[i];
		
		i++;
		k++;
	}
	while(j<n2)
	{
		a[k] = R[j];
		
		j++;
		k++;
	}
}


void mergesort(double *a,int min,int max)
{
	if(max>min)
	{	

		int centre = (min+max)/2;

		mergesort(a,min,centre);
		
		mergesort(a,centre+1,max);

		merge(a,min,centre,max);
	
	}
}

void merge(std::array<int,A_LENGTH>&a,int min,int centre ,int max)
{
	int n1,n2;
	
	n1 = centre - min +1;
	n2 = max-centre;

	int L[n1],R[n2];

	for(int i=0;i<n1;i++)
	{
		L[i] = a[i+min];
	}	
	
	for(int i=0;i<n2;i++)
	{
		R[i] = a[i+centre+1];
	}

	int i=0,j=0,k=min;
	
	while((i < n1) && (j < n2))
	{
		if(L[i] > R[j])
		{
			a[k] = R[j];

			k++;
			j++;
		}
		else
		{
			a[k] = L[i];
			
			i++;
			k++;
		} 
	}
	
	while(i<n1)
	{
		a[k] = L[i];
		
		i++;
		k++;
	}
	while(j<n2)
	{
		a[k] = R[j];
		
		j++;
		k++;
	}
}


void mergesort(std::array<int,A_LENGTH>&a,int min,int max)
{
	if(max>min)
	{	

		int centre = (min+max)/2;

		mergesort(a,min,centre);
		
		mergesort(a,centre+1,max);

		merge(a,min,centre,max);
	
	}
}

void merge(std::vector<int>&a,int min,int centre ,int max)
{
	int n1,n2;
	
	n1 = centre - min +1;
	n2 = max-centre;

	double L[n1],R[n2];

	for(int i=0;i<n1;i++)
	{
		L[i] = a[i+min];
	}	
	
	for(int i=0;i<n2;i++)
	{
		R[i] = a[i+centre+1];
	}

	int i=0,j=0,k=min;
	
	while((i < n1) && (j < n2))
	{
		if(L[i] > R[j])
		{
			a[k] = R[j];

			k++;
			j++;
		}
		else
		{
			a[k] = L[i];
			
			i++;
			k++;
		} 
	}
	
	while(i<n1)
	{
		a[k] = L[i];
		
		i++;
		k++;
	}
	while(j<n2)
	{
		a[k] = R[j];
		
		j++;
		k++;
	}
}


void mergesort(std::vector<int>&a,int min,int max)
{
	if(max>min)
	{	

		int centre = (min+max)/2;

		mergesort(a,min,centre);
		
		mergesort(a,centre+1,max);

		merge(a,min,centre,max);
	
	}
}

void merge(std::vector<double>&a,int min,int centre ,int max)
{
	int n1,n2;
	
	n1 = centre - min +1;
	n2 = max-centre;

	double L[n1],R[n2];

	for(int i=0;i<n1;i++)
	{
		L[i] = a[i+min];
	}	
	
	for(int i=0;i<n2;i++)
	{
		R[i] = a[i+centre+1];
	}

	int i=0,j=0,k=min;
	
	while((i < n1) && (j < n2))
	{
		if(L[i] > R[j])
		{
			a[k] = R[j];

			k++;
			j++;
		}
		else
		{
			a[k] = L[i];
			
			i++;
			k++;
		} 
	}
	
	while(i<n1)
	{
		a[k] = L[i];
		
		i++;
		k++;
	}
	while(j<n2)
	{
		a[k] = R[j];
		
		j++;
		k++;
	}
}


void mergesort(std::vector<double>&a,int min,int max)
{
	if(max>min)
	{	

		int centre = (min+max)/2;

		mergesort(a,min,centre);
		
		mergesort(a,centre+1,max);

		merge(a,min,centre,max);
	
	}
}
