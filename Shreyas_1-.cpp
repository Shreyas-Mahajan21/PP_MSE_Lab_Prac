#include<iostream>
using namespace std;
int i;
double sum;

double Avg(int a, int n1, double sum) {
for(i=0;i<n1;i++){
cout<<"Enter Element:";
cin>>a;
sum=sum+a;
}
sum=sum/n1;
return sum;
}

double Avg(float f, int n1, double sum){
for (i=0;i<n1;i++){
cout<<"Enter Element:";
cin>>f;
sum=sum+f;
}
sum-sum/n1;
return sum;
}

int main(){
int n,n1;
double c;
cout<<"Enter number of elements:";
cin>>n1;
cout<<"Enter 1 if number is int else 2:";
cin>>n;
 if(n==1){
int a=0;
c=Avg(a,n1, sum);
 }
else{
float f=0;
c=Avg(f,n1, sum);
}
cout<<"Average of "<<n1<<" numbers is:"<<c;
return 0;
}
