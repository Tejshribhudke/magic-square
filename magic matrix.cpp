//============================================================================
// Name        : magic1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <iostream>
using namespace std;
# define n 3
class magic {
int x[n][n];
public:
	magic();
	void takeuserinput();
	void display();
	void checkmagic();
};
magic::magic() {
for(int i=0;i<n;i++)
{	for(int j=0;j<n;j++)
	{
		x[i][j]=0;
	}
}
}
void magic::takeuserinput() {
	cout<<"enter elements of matrix "<<endl;
for(int i=0;i<n;i++)
{	for(int j=0;j<n;j++)
	{
		cin>>x[i][j];
	}
}
}
void magic::display()
{
	for(int i=0;i<n;i++)
	{	for(int j=0;j<n;j++)
		{
			cout<<x[i][j];
		}cout<<endl;
	}
}
void magic::checkmagic() {
	int reqsum=((n*n)*(n*n+1))/2;//sum of all the elements of matrix
	int magic = reqsum / n;//sum of each row and column should be equal to this
	int rsum=0,csum=0;
	//checking row sum
	for(int i=0;i<n;i++)
	{	for(int j=0;j<n;j++)
		{	rsum=rsum+x[i][j];
		}
		if(magic!=rsum)
		{	cout<<"NOT MAGIC SQUARE"<<endl;
			return;
		}
		rsum=0;
	}
	//checking column sum
	for(int i=0;i<n;i++)
	{	for(int j=0;j<n;j++)
		{	csum=csum+x[j][i];
		}
		if(magic!=csum)
		{	cout<<"NOT MAGIC SQUARE"<<endl;
			return;
		}csum=0;
	}
	cout << "YESSSS...... IT IS A MAGIC SQUARE" << endl;
}
int main() {
	magic m;
	m.takeuserinput();
	m.display();
	m.checkmagic();
	return 0;
}

