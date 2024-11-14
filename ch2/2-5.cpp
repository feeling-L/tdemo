#include<stdio.h> 
int main()
{
	int a,b,c;
	int pile=1;

	while(scanf("%d %d %d",&a,&b,&c)==3){
		if(a==0&&b==0&&c==0)
			break;
		double ret = (double)a/b;
		printf("Case %d: %.*lf\n",pile,c,ret);
		pile++;
	}
	
	
	return 0;
}
