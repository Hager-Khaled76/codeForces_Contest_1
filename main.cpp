
#include<bits/stdc++.h>
#include <cmath>
#include<iomanip>

using namespace std;

int main()
{
    /*****************************************

     /******************A. winter sale***********************/
     /*
    double priceF , discount , priceB;
    cin>>discount>>priceF;
    priceB = priceF/(1-(discount/100));
    cout<<priceB;
    */
    /*****************B. Memo and Momo*********************/
        /*
    long long n1,n2,n3;
    cin>>n1>>n2>>n3;
    if(n1%n3==0 && n2%n3==0)
        cout<<"Both";
    else if(n1%n3==0 && n2%n3!=0)
        cout<<"Memo";
    else if(n1%n3!=0 && n2%n3==0)
        cout<<"Momo";
    else
        cout<<"No One";

        */
    /****************C. Next Alphabet*****************/
    /*
    char alpha,next;
    cin>>alpha;
    next= alpha+1;
    if(alpha =='z')
        cout<<'a';
    else
        cout<<next;
        */
    /**************D. Ali Baba and Puzzles***********/
    /*
    long long n1,n2,n3,res;
    cin>>n1>>n2>>n3>>res;
    if(res ==((n1*n2)+n3))
        cout<<"YES";
    else if(res==((n1*n2)-n3))
        cout<<"YES";
    else if(res==((n1+n2)-n3))
        cout<<"YES";
    else if(res==((n1-n2)+n3))
        cout<<"YES";
    else if(res==(n1-(n2*n3)))
        cout<<"YES";
    else if(res==(n1+(n2*n3)))
        cout<<"YES";
    else
        cout<<"NO";

        */

    /**************E. Interval Sweep*******************/
    /*
    int num1,num2;
    cin>>num1>>num2;
    if((num1==0 && num2==0)||((num1-num2>=2)||num2-num1>=2))
        cout<<"NO";
    else
        cout<<"YES";

    */

    /*************F. Adding Bits***************/
    /*
    int a,b , c;
    cin>>a>>b;
    c=a^b;
    cout<<c;
    */

    // another methode
/*int a,b,x,y,dec=0;
    cin>>a>>b;
    for(int i=0;i<=32;i++)
    {
        x=a%2;   //
        a/=2;
        y=b%2;
        b/=2;
        if(x!=y)
        {
            dec+=pow(2,i);
        }
    }
    cout<<dec;
 */

    /***********************G. Katryoshka***************************/

    long long e,b,m, res=0;
    cin>>e>>m>>b;                        // 2 2 1       90 24 89
    long long minn = min({e,m,b});      //1             24
    res+=minn;                         //0+1=>1         24
    e-=minn;                          //2-1=>1          66
    b-=minn;                         //2-1=>1           0
    m-=minn;                        //1-1=>0            65
    minn = min(e/2 , b);           // 1 human has two eye , one body  // 0 eye
    res+=minn;                    //1+0=>1              57
    cout<<res;


     /******************H. Data Type Guessing*********************/
    /*
     double n,k,a;
     cin>>n>>k>>a;
     long long res1 =(n*(k/a));
     double res2 =(n*(k/a));
     double test =res2 -res1;
     if(test >0)
         cout<<"double";
    else if(res2 >2147483647)
        cout<<"long long";
    else
        cout<<"int";

      */

    /*********************I. Lucky Numbers*****************/
    /*
    int num, a,b;
    cin>>num;     //39
    a =num%10;    //9
    b =num/10;    //3
    if(a%b==0 || b%a==0)
        cout<<"YES";
    else
        cout<<"NO";
   */
return 0;
}
