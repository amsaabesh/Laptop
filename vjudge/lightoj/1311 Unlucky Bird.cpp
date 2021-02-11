#include<bits/stdc++.h>
using namespace std;
int main()
{
	double tim[3],v[5],ans,dis;
	int  t,cs;
	scanf("%d",&t);
	for (cs=1;cs<=t;cs++){
		scanf("%lf%lf%lf%lf%lf",&v[0],&v[1],&v[2],&v[3],&v[4]);
		tim[1]=v[0]/v[3];
		tim[2]=v[1]/v[4];
		tim[0]=max(tim[1],tim[2]);
		ans=tim[0]*v[2];
		dis=v[0]*tim[1]+0.5*-v[3]*pow(tim[1],2);
		dis+=v[1]*tim[2]+0.5*-v[4]*pow(tim[2],2);
		printf("Case %d: %.9lf %.9lf\n",cs,dis,ans);
	}
	return 0;
}
