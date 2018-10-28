#include"saumitra.h"
#include<array>
#include<vector>

void bubble(int *a,int min,int max) 
{
	int n = max - min + 1;
	
	while(true)
	{
		int j=0;

		for(int i=0;i<n-1;i++)
		{
			if(a[i]>a[i+1])
			{
				swap(a[i],a[i+1]);
				j++;
			}			
		}

		n--;
		
		if(j==0)
		{
			return;
		}
			
	}
}

void bubble(double *a,int min,int max) 
{
	int n = max - min + 1;
	
	while(true)
	{
		int j=0;

		for(int i=0;i<n-1;i++)
		{
			if(a[i]>a[i+1])
			{
				swap(a[i],a[i+1]);
				j++;
			}			
		}

		n--;
		
		if(j==0)
		{
			return;
		}
			
	}
}

void bubble(std::array<int,A_LENGTH>&a,int min,int max) 
{
	int n = max - min + 1;
	
	while(true)
	{
		int j=0;

		for(int i=0;i<n-1;i++)
		{
			if(a[i]>a[i+1])
			{
				swap(a[i],a[i+1]);
				j++;
			}			
		}

		n--;
		
		if(j==0)
		{
			return;
		}
			
	}
}

void bubble(std::array<double,A_LENGTH>&a,int min,int max) 
{
	int n = max - min + 1;
	
	while(true)
	{
		int j=0;

		for(int i=0;i<n-1;i++)
		{
			if(a[i]>a[i+1])
			{
				swap(a[i],a[i+1]);
				j++;
			}			
		}

		n--;
		
		if(j==0)
		{
			return;
		}
			
	}
}

void bubble(std::vector<double>&a,int min,int max) 
{
	int n = max - min + 1;
	
	while(true)
	{
		int j=0;

		for(int i=0;i<n-1;i++)
		{
			if(a[i]>a[i+1])
			{
				swap(a[i],a[i+1]);
				j++;
			}			
		}

		n--;
		
		if(j==0)
		{
			return;
		}
			
	}
}

void bubble(std::vector<int>&a,int min,int max) 
{
	int n = max - min + 1;
	
	while(true)
	{
		int j=0;

		for(int i=0;i<n-1;i++)
		{
			if(a[i]>a[i+1])
			{
				swap(a[i],a[i+1]);
				j++;
			}			
		}

		n--;
		
		if(j==0)
		{
			return;
		}
			
	}
}

