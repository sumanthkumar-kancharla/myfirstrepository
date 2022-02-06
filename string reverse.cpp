#include<iostream>
using namespace std;
int main()
{
	int i,k=0;
	char ch[25];
	cout<<"enter any string"<<endl;
	
	cin>>ch;
	
	for(i=0;ch[i]!='\0';i++)
	{
		k++;
	}
	cout<<"reverse string is ";
	for(i=k-1;i>=0;i--)
	{
		cout<<ch[i];
	}
}
