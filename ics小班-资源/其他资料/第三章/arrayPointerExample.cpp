#include<bits/stdc++.h>
using namespace std;
typedef int *intp;
typedef int (*array4)[4];
typedef int *pointerarray[4];
typedef intp parray[4];
int main()
{
	int a[3][4]={{0,1,2,3},{4,5,6,7},{8,9,10,11}};
	int b[4],*c[4];
	int (*d)[4]=a+1;
	cout<<"type"<<endl;
	cout<<typeid(a).name()<<endl;
	cout<<typeid(b).name()<<endl;
	cout<<typeid(a[0]).name()<<endl;
	cout<<typeid(*a).name()<<endl;
	cout<<typeid(c).name()<<endl;
	cout<<typeid(d).name()<<endl;
	cout<<typeid(intp).name()<<endl;
	cout<<typeid(array4).name()<<endl;
	cout<<typeid(pointerarray).name()<<endl;
	cout<<typeid(parray).name()<<endl;
	
	cout<<endl;
	cout<<"value"<<endl;
	for(int i=0;i<3;++i)
	{
		for(int j=0;j<4;++j)
			cout<<a[i][j]<<' ';
		cout<<endl;
	}
	cout<<d[1]<<endl;
	cout<<*d[1]<<endl;
	cout<<(*d)[1]<<endl;
	cout<<*(*d+1)<<endl;
	cout<<a[2]<<endl;
	cout<<*a[2]<<endl;
	cout<<(*a)[2]<<endl;
	cout<<*(*a+2)<<endl;
}
