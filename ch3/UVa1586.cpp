//C, H, O, N��ԭ�����ֱ�Ϊ 12.01, 1.008, 16.00, 14.01����λ��g/mol����

//�����ַ���

//�����ַ���
//�����ǰ�ַ�����һ���ַ������־�����ټӣ�������Ǿ����
//������

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
//#include <ctype.h> // Ϊ��ʹ�� isdigit ����
//
//#define Cm 12.01
//#define Hm 1.008
//#define Om 16.00
//#define Nm 14.01
//#define maxn 100 // �����������С�����ɸ����Ļ�ѧʽ
//
//int main() {
//    char arr[maxn];
//    double sum = 0.0;
//    scanf("%s", arr);
//    int i = 0;
//    while (arr[i] != '\0') { // ʹ�� while ѭ���������ַ���ֱ��ĩβ
//        if (arr[i] == 'C' || arr[i] == 'H' || arr[i] == 'O' || arr[i] == 'N') {
//            int count = 0;
//            // �����һ���ַ��Ƿ������֣�����������
//            if (isdigit(arr[i + 1])) {
//                count = arr[i + 1] - '0'; // ���ַ�ת��Ϊ����
//                i += 2; // ����Ԫ�ط��ź�����
//            } else {
//                count = 1; // ���û�����֣���Ĭ������Ϊ1
//                i += 1; // ֻ����Ԫ�ط���
//            }
//            // ����Ԫ�ط����ۼ�Ħ������
//            switch (arr[i - 2]) { // ע�������� i-2����Ϊ�����Ѿ������� i
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
//            i += 1; // �������Ԫ�ط��ţ���򵥵������������������������Ч�ģ�
//        }
//    }
//    printf("%.3lf g/mol\n", sum); // ʹ�� %.2lf �����������С�������λ
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
		if (isalpha(s[i])) { c = f(s[i]); sum += c; }//isalpha() ��һ����׼�⺯�������ڼ�鴫�ݸ������ַ��Ƿ�Ϊ��ĸ
		else  { sum += (f(s[i]) - 1)*c; }
	}
	cout << sum << endl;
	return 0;
}
