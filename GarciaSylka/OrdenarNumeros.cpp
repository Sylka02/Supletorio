#include<iostream>
using namespace std;
int main()
{
	float n1,n2,n3,p1,p2,p3,tmp,ord=0;
	cout<<"Ingrese tres numeros n1  n2  n3:";
	cin>>n1>>n2>>n3;
	do
	{
		if (n1<n2){
			p1=n1;
			if(n2<n3){
				p2=n2;
				p3=n3;
				ord=1;
			}else
			tmp=n2;
			n2=n3;
			n3=tmp;
		}else {
			tmp=n1;
			tmp=n2;
			n2=tmp;
		}
		}while(ord==0);
		cout<<"Los numeros ordenados son:"<<p1<<","<<p2<<","<<p3<<","<<endl;
		return=(0);
	}
	
