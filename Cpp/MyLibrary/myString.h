#ifndef STRING_H
#define STRING_H

#include<cassert>
#include<iostream>

class myString
{
private:
	char *m_data{nullptr};
	int m_length{0};

public:
	myString(int length): m_length(length) 
	{
		assert(length > 0);

		m_data = new char[m_length + 1];

		m_data[m_length] = '\0';
	}


	myString(const char *source = "") // if parameter is string literal
	{
		while(source[m_length] != '\0') // for calculating the length of string literal. // h e l o \0
		{
			++m_length;
		}
	
		m_data = new char[m_length + 1];

		for(int i{0}; i < m_length; ++i)      // copy indually char by char 
		{		                       //since "m_data = p" wont work(const char* to char* warning )
			m_data[i] = source[i];
		}

		m_data[m_length] = '\0';
	}
	

	myString(const myString &s) // copy constructor
	{
		m_length = s.m_length;
 
   		if (s.m_data)
    		{
       	 		m_data = new char[m_length + 1];

 			for (int i=0; i < m_length ; ++i)
			{
            			m_data[i] = s.m_data[i];
			}
	
			m_data[m_length] = '\0';
    		}
	    	else
		{
        		m_data = nullptr;
		}
	}


	~myString()
	{
		delete[] m_data;
	}


	char& operator[](int index)
	{
		assert(index >= 0 && index < m_length);		
		
		return m_data[index];
	}


	myString& operator=(const myString &s1) // deep copying
	{
		if(this == &s1)
		{
			return *this;
		}

		this->erase();

		m_length = s1.m_length;

		if(s1.m_data)
		{
			m_data = new char[m_length + 1];
			
			for(int i{0}; i < m_length; i++)
			{
				m_data[i] = s1.m_data[i];
			}
			
			m_data[m_length] = '\0';
		}
		else
		{
			m_data = nullptr;
		}
	return *this;			
	}


	inline int getLength() {return m_length;}

	inline int getLength() const {return m_length;}


	void erase()
	{
		delete[] m_data;

		m_data = nullptr; 
		m_length = 0;
	}


	void uppercase() 
	{

		for(int i=0; i < m_length ; i++)
		{
			if(m_data[i] < 97 ) // if already uppercase then continue.
			{
				continue;
			}	

			m_data[i] -= 32;  
		}
	}


	void lowercase()
	{
		
		for(int i=0; i < m_length ; i++)
		{
			if(m_data[i] >= 97 ) // if already lowercase then continue.
			{
				continue;
			}	

			m_data[i] += 32;  
		}
	}


	friend myString operator+(const myString &s1,const myString &s2);

	friend bool operator==(myString &s1,myString &s2);

	friend std::ostream& operator<<(std::ostream &out, myString &s);

	friend std::istream& operator>>(std::istream &in, myString &s);
};


myString operator+(const myString &s1,const myString &s2) // combining two strings.
{
	int j=0;
	
	myString str(s1.getLength() + s2.getLength() );  // create new object with combined length.

	for(int i = 0; i < s1.getLength(); i++ ) 
	{
		str.m_data[j++] = s1.m_data[i];   // could have used str[j++] = s1[i] also 
	}					  // but it would have called operator[] on every iteration	
		
	for(int i = 0; i < s2.getLength(); i++ )
	{
		str.m_data[j++] = s2.m_data[i];
	}

	str.m_data[str.m_length] = '\0';
		
return str;
}


bool operator==(myString &s1,myString &s2) // compare 2 strings
{
	if(s1.m_length != s2. m_length) // if length not equal exit early.
	{
		return false;
	}
	else
	{	
		for(int i{0}; i < s1.getLength(); i++)
		{
			if(s1.m_data[i] != s2.m_data[i])
			{
				return false;
			}
		}
	return true;
	}
}	


std::ostream& operator<<(std::ostream &out, myString &s)
{
	std::cout<<s.m_data;
 
return out;
}


std::istream& operator>>(std::istream &in, myString &s)
{
	std::cin>>s.m_data;
						
	while(s.m_data[s.m_length] != '\0')// when we instantiate object like this myString s;    
	{		                   // then if we execute cin the m_length would still be zero.			
		++s.m_length;
	}
	
return in;
}


#endif
