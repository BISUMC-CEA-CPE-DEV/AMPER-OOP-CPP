#include<iostream>
using namespace std;

int main()
{
	int i,j,count;
	string str[100];
	
	
	cout<<"Enter String: ";
	
	for(i=0;;i++)  // loop input with terminator
	{
		cin>>str[i];
		if(cin.get()=='\n') // if "enter" na ang last mao ni iyang terminate
		{
			count = i; // for future count ni sa loop process kung pila ang na input sa ga input
			break;
		}
	}
	
	
	for(i=1;i<count;i++)  // Insertion sorting meaning mo depende ni sa imung gi input arun ma gana tong sakto na pama agi sa sorting
                  				 // same unta ni sa usa na sorting but mas maayo pa ni if sa string ug ganahan kas sakto ra ng pagka sorting na mo depende 
								 // kini sakto na ni siya hahaha	
	{ 
		string temp = str[i]; 			
		int j=i-1; 
		while (j>=0 && temp.length()<str[j].length()) 
		{ 
			str[j+1]=str[j]; 
			j--; 
		} 
		str[j+1]=temp; 
	} 
	
	cout<<"\n\nOutput: ";
		for (int i=0;i<=count;i++) 
		cout<<str[i]<<" "; 
	
	
	
	return 0;
}
