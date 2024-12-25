#include<bits/stdc++.h>
using namespace std;
//My approach
int NEWyear(int a,int b)
{   int d,x=5,i=2,count=0;
    int time=240;
    time=time-b;
   
    while(x<=time){
          if(a==count)
    {
    break;
    }
    x+=5*i;
    count++;
    i++;
   
}
  return count;

}

/* optimsed approach
int NEWyear(int a, int b) {
    int timeRemaining = 240 - b;
    int totalProblems = 0;
    int timeUsed = 0;

    for (int i = 1; i <= a; i++) {
        timeUsed += 5 * i;
        if (timeUsed > timeRemaining) break;
        totalProblems++;
    }

    return totalProblems;
}

*/

int main()
{
  int a,b;
  cin >>a>>b;
 int c=NEWyear(a,b);
   cout<<c;
   return 0;
}