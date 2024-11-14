//C, H, O, N，原子量分别为 12.01, 1.008, 16.00, 14.01（单位：g/mol）。

//读入字符串

//遍历字符串
//如果当前字符的下一个字符是数字就相乘再加，如果不是就相加
//输出结果

//# include <stdio.h>
//# include <string.h>
////# define LOCAL
//# define Cm 12.01
//# define Hm 1.008
//# define Om 16.00
//# define Nm 14.01
//# define maxn 20
// 
//int main(){
//	int i=0;
//	char arr[maxn];
//	double sum=0;
//	scanf("%s",arr);
//	for(i;i<maxn;i++){
//		if(arr[i+1]<'A'){
//			switch(arr[i])
//				case 'C':
//					sum+=Cm*arr[i+1];
//					break;
//				case 'H':
//					sum+=Hm*arr[i+1];
//					break;
//				case 'O':
//					sum+=Om*arr[i+1];
//					break;
//				case 'N':
//					sum+=Nm*arr[i+1];
//					break;
//				default:
//					break;
//			i+=1;
//		}
//	}
//	printf("%lfg/mol",sum);
//	return 0;
//} 



//#include <stdio.h>
//#include <string.h>
//#include <ctype.h> // 为了使用 isdigit 函数
//
//#define Cm 12.01
//#define Hm 1.008
//#define Om 16.00
//#define Nm 14.01
//#define maxn 100 // 增加了数组大小以容纳更长的化学式
//
//int main() {
//    char arr[maxn];
//    double sum = 0.0;
//    scanf("%s", arr);
//    int i = 0;
//    while (arr[i] != '\0') { // 使用 while 循环来遍历字符串直到末尾
//        if (arr[i] == 'C' || arr[i] == 'H' || arr[i] == 'O' || arr[i] == 'N') {
//            int count = 0;
//            // 检查下一个字符是否是数字，并计算数量
//            if (isdigit(arr[i + 1])) {
//                count = arr[i + 1] - '0'; // 将字符转换为整数
//                i += 2; // 跳过元素符号和数字
//            } else {
//                count = 1; // 如果没有数字，则默认数量为1
//                i += 1; // 只跳过元素符号
//            }
//            // 根据元素符号累加摩尔质量
//            switch (arr[i - 2]) { // 注意这里是 i-2，因为我们已经增加了 i
//                case 'C':
//                    sum += Cm * count;
//                    break;
//                case 'H':
//                    sum += Hm * count;
//                    break;
//                case 'O':
//                    sum += Om * count;
//                    break;
//                case 'N':
//                    sum += Nm * count;
//                    break;
//            }
//        } else {
//            i += 1; // 如果不是元素符号，则简单地跳过它（这里假设输入是有效的）
//        }
//    }
//    printf("%.3lf g/mol\n", sum); // 使用 %.2lf 来限制输出到小数点后两位
//    return 0;
//}


//# include <stdio.h>
////# include <string.h>
//# define maxn 90
////# define LOCAL
//const char* s="CHON";
//const double value[]={12.01,1.008,16.00,14.01};
//int main()
//{
//    # ifdef LOCAL
//        freopen("in.txt", "r", stdin);
//        freopen("out.txt", "w", stdout);
//    # endif
//    char arr[maxn];
//    int T;
//    scanf("%d", &T);
//    while (T--)
//    {
//        int num=1;
//        double sum=0.0;
//        int i=0;
//        //memset(arr,'Z',sizeof(arr));
//        int check = 0;
//        scanf("%s", arr);
//        for (i=0;i<maxn;i++)
//        {
//            num = 1;
//            check = 0;
//            if (arr[i]=='\0') break;
//            if(arr[i+1]>='0'&&arr[i+1]<='9')
//            {
//                check = 1;
//                if (arr[i+2]>='0'&&arr[i+2]<='9')
//                {
//                    check = 2;
//                    num = (arr[i+1]-'0')*10+(arr[i+2]-'0');
//                    //i = i+2;
//                }
//                else 
//                {
//                    num = arr[i+1]-'0';
//                    //i = i+1;
//                }
//            }
//            
//            
//                int LC=0;
//                //char lett=arr[i];
//                for (int j=0;j<4;j++)
//                {
//                    if (s[j]==arr[i]) 
//                    {
//                        LC=j;
//                        break;
//                    } 
//                }
//                sum += value[LC]*num;
//            if (check!=0) 
//            {
//                i = i+check;
//            }
//        }
//        printf("%.3lf\n", sum);
//    }
//    # ifdef LOCAL
//        fclose(stdin);
//        fclose(stdout);
//    # endif
//    return 0;
//}



#include<iostream>
#include<string.h>
#include<math.h>
#include<ctype.h>
using namespace std;
double f(char s)
{
	if (s == 'C') return 12.01;
	if (s == 'H') return 1.008;
	if (s == 'O') return 16.00;
	if (s == 'N') return 14.01;
	return double(s - '0');
 
}
int main()
{
	char s[122];
	double c, h, o, n,sum;
	c = h = o = n = sum =0;
	cin >> s;
	int len = strlen(s);
	int i, j;
	for (i = 0; i < len; i++)
	{
		if (isalpha(s[i])) { c = f(s[i]); sum += c; }//isalpha() 是一个标准库函数，用于检查传递给它的字符是否为字母
		else  { sum += (f(s[i]) - 1)*c; }
	}
	cout << sum << endl;
	return 0;
}
