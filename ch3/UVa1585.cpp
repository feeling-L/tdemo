//#include <stdio.h> 
//#include <string.h>
//
//#define maxn 100
//int main() { 
//	int n;
//	char arr[maxn];
//	scanf("%d",&n);
//
//	while(n--)
//	{
//		scanf("%s",arr);
//		int i=0;
//		int sum=0;
//		for(int j=0;j<maxn;j++){
//			if(arr[j]=='Y')
//				break;
//			else if(arr[j]=='X')
//				i=0;
//			else if(arr[j]=='O')
//				sum+=++i;
//		}
//		printf("%d\n",sum);
//		memset(arr, 'Y', sizeof(arr));
//		//将arr指向的内存区域中的每个字节都设置为字符'Y'的ASCII值
//	}
//
//	return 0; 
//}

# include <stdio.h>
# include <string.h>
//# define LOCAL
# define maxn 85
 
int main()
{
    # ifdef LOCAL
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    # endif
    char arr[maxn];
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int i=0;
        int sum=0;
        scanf("%s", arr);
        for (int j=0;j<maxn;j++)
        {
            if (arr[j]=='Y') break;
            else if (arr[j]=='X') 
            {
                i=0;
            }
            else if (arr[j]=='O')
            {
                sum += ++i;
            }
        }
        printf("%d\n", sum);
        memset(arr, 'Y', sizeof(arr));
    }
    # ifdef LOCAL
        fclose(stdin);
        fclose(stdout);
    # endif
    return 0;
}
