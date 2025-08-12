#include<iostream>
using namespace std;

main()
{
    int n,a,count=0;
    cout<<"enter any number: ";
    cin>>n;

    int num=n;
    while(num!=0){
        count+=1;
        num/=10;
    }

    int sum =0;
    num=n;
    int pos=count;

    while(num!=0){
        a=num%10;

        int power=1;
        int i=1;
        while(i<=pos)
        {
            power*=a;
            i++;
        }
        sum+=power;
        num/=10;
        pos--;
    }
    (sum==n)?cout<<"It is a Disarium number.":cout<<"It is not a Disarium number.";
}