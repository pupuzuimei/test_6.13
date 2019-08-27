#include <iostream>
#include<fstream>
#include <algorithm>
#include<string>
#define statistics 7
using namespace std;
struct student{
    string number;
    string name;
    string sex;
    string phone;
    int age;
    double score[7];
    double ave;
}a[statistics];
struct people{
    string referee;
    string number1;
    string name1;
    string sex1;
    string phone1;
    double score[7];
};
bool cmp(student s1,student s2)
{
    return s1.ave>s2.ave;
}
int main() {
    student t[statistics];
    people k[statistics];
    int i,j;
    ofstream inf("/Users/s20181106278/Desktop/myinf.txt");
    ifstream onf("/Users/s20181106278/Desktop/onf.txt");
    ifstream enf("/Users/s20181106278/Desktop/enf.txt");
    ifstream unf("/Users/s20181106278/Desktop/unf.txt");
    if(onf.is_open())
    {
        for(i=0;i<statistics;++i)
        {
            onf>>a[i].number>>a[i].name>>a[i].sex>>a[i].age>>a[i].phone;
        }
        onf.close();
    }
    if(unf.is_open())
    {
        for(i=0;i<statistics;++i)
        {
            unf>>k[i].number1>>k[i].name1>>k[i].sex1>>k[i].phone1;
        }
        onf.close();
    }
    if(enf.is_open())
    {
        for(j=0;j<7;j++)
        {
            enf>>k[j].referee;
        }
        for(j=0;j<statistics;++j)
        {
            for(i=0;i<7;++i)
            {
                enf>>a[j].score[i];
            }
            enf>>a[j].number;
        }
        enf.close();
    }
    /*for(i=0;i<statistics;i++)
        sort(a[i].score,a[i].score+7);*/
    void sort(int *p,int num)
    {
        int i,j,temp;
        for(i=0;i<num;i++)
        {
            for(j=i+1;j<num;j++)
                if(p[i]<p[j])
                {
                    temp=p[i];
                    p[i]=p[j];
                    p[j]=temp;
                }
        }
    }
    void output(int *p,int num)
    {
        for(p=a;p<a+10;p++)
        int i;
        for(i=0;i<num;i++)
            
            printf("%d ",*(p+i));
    }
    int main()
    {
        int a[10];
        input(a,10);
        sort(a,10);
        output(a,10);
        return 0;
    }
    for(j=0;j<statistics;++j)
    {
        for(i=1;i<6;++i)
        {
            a[j].ave+=a[j].score[i];
        }
        a[j].ave/=5;
    }
    sort(a,a+statistics,cmp);
    if(inf.is_open())
    {
        for(int i=0;i<statistics;i++)
        {
            inf<<a[i].number<<" "<<a[i].name<<" "<<a[i].sex<<" "<<a[i].age<<" "<<a[i].phone<<" "<<a[i].ave<<endl;
            for(j=0;j<7;j++)
            {
                inf<<a[i].score[j]<<" ";
            }
            inf<<endl;
        }
        inf.close();
    }
    return 0;
}
