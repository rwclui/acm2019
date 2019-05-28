#include <iostream>
using namespace std;

int main()
{
	int a[10],i,j,sum,m,left1,left2;  // the number of packets whose size are i*i is a[i], the number of packets is sum, the minimal number of parcels is m; the number of parcels in which 2*2 can be packed is left2, the number of parcels in which 1*1 can be packed is left1
	int u[4]={0,5,3,1};           // u[a[3]% 4]
	while (1)
	{
		sum=0;
		for(i=1;i<=6;i++)       //Input he number of packets
		{
			cin>>a[i];
			sum+=a[i];
		}
		if(sum==0) break;   
			
		m=a[6]+a[5]+a[4]+(3+a[3])/4; // The number of parcels in which packets whose size are 6*6, 5*5, 4*4, and 3*3 are packed
		left2=a[4]*5+u[a[3]%4];  // the number of parcels in which 2*2 can be packed is left2
		if(a[2]>left2)        //If there are remaining 2*2 packets, new parcels are needed
			m+=(a[2]-left2+8)/9;
		left1=m*36-a[6]*36-a[5]*25-a[4]*16-a[3]*9-a[2]*4; // the number of parcels in which 1*1 can be packed is left1
		if(a[1]>left1)                     // If there are remaining 1*1 packets, new paracels are needed
			m+=(a[1]-left1+35)/36;
		cout<<m<<endl;                  // the minimal number of parcels
	}
	return 0;
}
