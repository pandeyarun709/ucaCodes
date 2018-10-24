#include<iostream>
#include<stack>
using namespace std;

int main(){

  int a[9] = { 100, 106 , 60 , 70 , 60 , 75 , 85,95 , 500 };
  int size = 9;

  int x,max=-1,i=0;

  stack<int> s ;
   
  for(i=0;i<size ; i++)
  {
     if(s.empty() || a[s.top()] >= a[i])
          s.push(i);
      else{

          while(!s.empty() && a[s.top()]<= a[i])
          {

                s.pop();

           }

           if(s.empty())
            {

                    max = i+1;
            }
          else if(max <= (i-s.top()) )
                    max = i - s.top();

         s.push(i);
      }
  }
 cout<<max<<endl;
}

