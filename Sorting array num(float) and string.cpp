#include<iostream>
#include<sstream>
#include<regex>
using namespace std;


bool number(const std::string &token)  // true or false statement
{
    return std::regex_match(token, std::regex("(\\+|-)?[0-9]*(\\.?([0-9]+))$"));
}


int main()
{
	int i,count,ncount=0,wcount=0;
	float num[100],nsort;
	
	string str[100],temp,word[100],wsort;
	
	cout<<"enter: ";
	
	for(i=0;;i++)  // loop input with terminator
	{
		cin>>str[i];
		if(cin.get()=='\n') // if "enter" na ang last mao ni iyang terminate
		{
			count = i; // for future count ni sa loop process kung pila ang na input sa ga input
			break;
		}
	}
	
	for(i=0;i<=count;i++)
	{
		temp = str[i];
			
		if(number(str[i]) == 1)  // if ang true or false statement kay ming 1 meaning float siya (in short ga determine if float or string)
	       {
		    stringstream book(temp); // conversion string to float
			
			float x = 0;
			book >> x;
		
			num[ncount] = x;
			ncount++;
	     	}
		else  // if 0 ang true or false statement meaning string sya
		{
		    word[wcount] = temp;
		    wcount++;
		}
	}
	
	
			for(i=0;i<ncount;i++)  // sorting for float
			{
				for(int j=0; j<ncount-1; j++)
				{
					if(num[i] < num[j])
					{
						nsort = num[i];
						num[i] = num[j];
						num[j] = nsort;
					}
				}
			}

		    for(i=0;i<wcount;i++) // sorting for string using length of string
			{
				for(int j=0; j<wcount-1; j++)
				{
					if(word[i].length() < word[j].length()) // instead strlen ming gamit kog .length()
					{
						wsort = word[i];
						word[i] = word[j];
						word[j] = wsort;
					}
				}
			}
	
	cout<<"\nOutput\n\n";
	for(i=0;i<ncount;i++) // output for float
	{
		cout<<num[i]<<" ";
	}
	
    for(i=0;i<wcount;i++) // output for string
	{
		cout<<word[i]<<" ";
	}
	
	return 0;
}
