#include <stdio.h>
int max(int num[], int size)
{
    int max=-999999; //Initialize a variable to minimum value
    for(int i=0;i<size;i++)
    {
        if(num[i]>max)
        {
            max=num[i];
        }
    }
    return max;
}
int min(int num[], int size)
{
    int min =999999;//Iniialize a variable to maximum value
    for(int i=0;i<size;i++)
    {
        if(num[i]<min)
        {
            min=num[i];
        }
    }
    return min;
}
float average(int num[], int size)
{
    float sum=0;//initialize a variable to 0
    for(int i=0;i<size;i++)
    {
        sum+=num[i];
    }
    return (sum/size);
}
int mode(int num[], int size)
{
    int cnt[size];//making a cnt array
    int mdind=0;//mode's index in given array
    int max=-999999;
    //Initialising a count array
    for(int i=0;i<size;i++)
    {
        cnt[i]=0;
    }
    //Filling the count array with each counts
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(num[i]==num[j])
            {
                cnt[i]++;
            }
        }
    }
    //Finding the mode's index
    for(int i=0;i<size;i++)
    {
        if(cnt[i]>max)
        {
            mdind=i;
        }
    }
    //returning mode
    return (num[mdind]);
}
int factors(int num, int pfact[])
{
    int numb=num;/*store given number in another variable 
    to prevent loss of given number.*/
    int i=0;
    int pf[]={2,3,5,7,9,11,13,17,19};//making an array of primes
    int nump=(int)(sizeof(pf)/sizeof(int));//finding no. of primes used
    for(;numb!=1;i++)
    {
        for(int j=0;j<nump;j++)
        {
            if((numb%pf[j])==0)//check the divisibility with primes
            {
                pfact[i]=pf[j];//store prime factors in pfact array
                numb/=pf[j];
                break;
            }
            else
            {
                continue;
            }
        }
    }
    return i;
}
