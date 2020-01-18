#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

void expr(int n)
{
    switch(n)
    {
        case 0: cout<<"ling";break;
        case 1: cout<<"yi";break;
        case 2: cout<<"er";break;
        case 3: cout<<"san";break;
        case 4: cout<<"si";break;
        case 5: cout<<"wu";break;
        case 6: cout<<"liu";break;
        case 7: cout<<"qi";break;
        case 8: cout<<"ba";break;
        case 9: cout<<"jiu";
    }
}

int main()
{
    char s[100];
    int len,sums,sum=0,suml=0;
    cin>>s;                            //    scanf("%s",s); 
    len=strlen(s);
    for(int i=0;i<len;i++)
    {
        sum+=int(s[i]-'0');
    }
    sums=sum;
    while(sums)
    {
        sums/=10;
        suml++;
    }
    //对一个数的每一个数位取数，方法是将待取数位运算至操作数最低位后，取10的余 
    while(suml)
    {
        sums=sum;
        for(int i=0;i<suml-1;i++)
        {
            sums/=10;
        }
        expr(sums%10);
        suml--;
        if (suml) cout<<" ";
    }
    cout<<endl;
    return 0;
}
