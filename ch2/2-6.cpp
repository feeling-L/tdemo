# include <stdio.h>
 
int check(int abc,int def,int ghi)
{
    int a=0, b=0, c=0, d=0, e=0, f=0, g=0, h=0, i=0;
    a = abc/100;b = (abc-a*100)/10;c = (abc-b*10-a*100);
    d = def/100;e = (def-d*100)/10;f = (def-e*10-d*100);
    g = ghi/100;h = (ghi-g*100)/10;i = (ghi-g*10-h*100);
    int arr[]={a, b, c, d, e, f, g, h, i};
    for (int i=0;i<=8;i++)
    {
        for(int j=i+1;j<=8;j++)
        {
            if (arr[i]==arr[j]) return 0;
        }
    }
}
int main()
{
    for (int i = 123;i <= 329; i++)
    {
        int checking = 1;
        int abc=0,def=0,ghi=0;
        abc = i;
        def = 2*abc;
        ghi = 3*abc;
        checking = check(abc, def, ghi);
        if (checking) printf("%d %d %d\n", abc,def,ghi);
    }
}

//int main() 
//{ 
// double i; 
// for(i = 0; i != 10; i += 0.1) 
// printf("%.1f\n", i); 
// return 0; 
//}
