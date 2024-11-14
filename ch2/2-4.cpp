#include<stdio.h> 
int main()
{
	int n,m;
	int pile=1;

	while(scanf("%d %d",&n,&m)==2){
		if(n==0&m==0)
			break;
		double sum;
		while(n<=m){
			sum+=1.0/n/n;
			n++;
		}
		printf("Case %d: %.5lf\n",pile,sum);
		pile++;
	}
	
	
	return 0;
}

//# include <stdio.h>
////# define LOCAL
// 
//int main()
//{
//    # ifdef LOCAL
//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);
//    # endif
//    int n,m,pile;
//    while (scanf("%d %d", &n,&m)==2)
//    {
//        if (n==0&&m==0) break;
//        double sum = 0;
//        while (n<=m)
//        {
//            sum += 1.0/n/n;
//            n++;
//        }
//        pile ++;
//        printf("Case %d: %.5lf\n", pile, sum);
//    }
//    # ifdef LOCAL
//    fclose(stdin);
//    fclose(stdout);
//    # endif
//    return 0;
//}
