#include <iostream>
using namespace std;
int main ()
{
int size =11;
int myarray [size];
myarray[0]=20;
myarray[1]=81;
myarray[2]=71;
myarray[3]=13;
myarray[4]=19;
myarray[5]=50;
myarray[6]=40;
myarray[7]=30;
myarray[8]=18;
myarray[9]=15;
myarray[10]=12;
myarray[11]=0;
for (int i=size-1;i>0;i--)
{
cout << myarray [i]<<" "<<endl;
}

}
