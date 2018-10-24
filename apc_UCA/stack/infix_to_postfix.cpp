#include<iostream>
#include<stdlib.h>
#include<stack>
#include<string.h>

using namespace std;

int prec(char a)
{
   if(a == '+' || a == '-')
        return 1;
   else if(a == '*' || a == '/')
          return 2;
    
   return -1;   
 
}


int main()
{
   char a[50] = "((a*b)+c*x/(y+z)-u)\0";//(a+b)/c*d\0";//((a*b)+c*x/(y+z)-u)
   
   stack<char> s;

  char *exp =(char *)malloc(sizeof(char)*(strlen(a)+1));
  int i=0,k=0;
   //it i=0
  for(i=0;a[i] != '\0';i++)
  {
     if((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z'))
         exp[k++] = a[i];
     else if(a[i] == '(') s.push(a[i]);
     else if(a[i] == ')')
       {
            while(s.top() != '(')
            {
                 char c= s.top();
                  s.pop();
                 exp[k++] = c;
             }
         s.pop(); 
       } 
    else{

      while( !s.empty() && prec(a[i]) <= prec(s.top()))
      {
        char c= s.top();
        s.pop();
        exp[k++] = c;

      }
     s.push(a[i]);         
 
  }
 }  
  exp[k++] = '\0';

  cout<<"Result is "<<exp<<endl; 
   
}

