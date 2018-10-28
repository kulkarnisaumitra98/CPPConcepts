#ifndef INT_ARRAY
#define INT_ARRAY

#include<cassert>
#include<initializer_list>
#include<iostream>

class IntArray
{
private:
	int *m_data;
	int m_length;
public:
	IntArray(): m_data(nullptr), m_length(0) {}
	

	IntArray(int length): m_length(length)
	{
		assert(length > 0); // sanity check.
	
		m_data = new int[length];
	}

	
	IntArray(const std::initializer_list<int>&list): IntArray(list.size())
	{
		int count = 0;
		for(const auto &ref : list)
		{
			m_data[count] = ref;
			count++;
		}
	}


	~IntArray()
	{
		delete[] m_data;
	}

	// return by reference due to l value issue eg.  a[5] = 3;  will evaluate to  5 = 3 if value at index 5 is 5.

	int& operator[](const int index)
	{
		assert(index >= 0 && index < m_length);

		return m_data[index];
	}

	IntArray& operator=(const std::initializer_list<int>&list)
	{
		if(list.size() != m_length)
		{
			reallocate(list.size());
		}
	
		int count = 0;
		for(const auto &ref : list)
		{
			m_data[count] = ref;
			count++;
		}
	return *this;	
	}

	// convert to normal int array
	operator int* ()
	{
		return m_data;
	}


	void erase()
	{
		delete[] m_data;

		// since the object itself isn't deleted yet so we have to set its members accordingly to this context.
		// Check aggregation lesson comments for clarification. 
	
		m_data = nullptr; 
		m_length = 0;
	}


	int getLength() {return m_length;}


	void resize(int newLength) // will resize keeping exisiting elements same.
   	{
	        if (newLength == m_length)
	            return;

	        if (newLength <= 0)
	        {
	            erase();
	            return;
	        }
		
		// allocate new data for this porpose this copy it from m_data

	        int *data = new int[newLength];
 
	        if (m_length > 0)
	        {
		    // if newlength greater than m_length can copy elements on till m_length
		    // so use appropriate length for copying.	

	            int elementsToCopy = (newLength > m_length) ? m_length : newLength;
 
	            for (int index=0; index < elementsToCopy ; ++index)
	                data[index] = m_data[index];
       		}
 
        	delete[] m_data;
 	
        	m_data = data;
        	m_length = newLength;

    	}


	void reallocate(int length)  // to delete exisiting elements and allocate entire new array.
	{
		assert(length > 0);

		erase();
		
		m_length = length;
		m_data = new int[m_length];
	}


	void remove(int index) // remove a particular element of that index 
	{
		assert(index > 0 && index < m_length);

		// if only one element then it is as good as removing the element.

		if(m_length == 1)
		{
			erase();
			return;
		}
		
		// allocate new array for copying.

		int *data = new int[m_length-1];

		// removing logic.

		for(int i=0; i <index; i++)
			data[i] = m_data[i];
		
		for(int i=index+1; i<m_length; i++)
			data[i-1] = m_data[i];
		
		// copy address of data to m_data, and now length is decresed.
		delete[] m_data;

		m_data = data;
		--m_length;
	}
		
	
	void insertBefore(int value, int index) // 1, 2, 4  // 1, 2, 3, 4  
	{
		assert(index >= 0 && index <= m_length);

		int *data = new int[m_length+1];

		for(int i=0; i <index; i++)
			data[i] = m_data[i];

		data[index] = value;
		
		for(int i=index; i<m_length; i++)
			data[i+1] = m_data[i];

		delete[] m_data;
		m_data = data;
		++m_length;
		
	}


	friend std::ostream& operator<<(std::ostream &out, IntArray &array)
	{
		for(int i=0; i < array.getLength(); i++)
		{
			std::cout<<array[i]<<" ";
		}

		std::cout<<'\n';

	return out;
	}


	friend std::istream& operator>>(std::istream &in, IntArray &array)
	{
		for(int i=0; i < array.getLength(); i++)
		{
			std::cin>>array[i];
		}

	return in;
	}
};

#endif
