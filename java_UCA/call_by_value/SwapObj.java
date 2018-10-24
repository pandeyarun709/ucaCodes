class Swap{

  int a;
  int b;

  swap2(int a,int b)
  {
     this.a = a;
     this.b = b;
  }
  
/*  void change( Swap2 s1,Swap2 s2)
  { 
     int temp = s1.a;
     s1.a = s2.a;
     s2.a = temp;

     temp = s2.b;
     s1.b = s2.b;
     s2.b = temp;


  } 
*/


  Swap3 change(Swap2 s1,Swap2 s2)
  {
     return s1;
  }

}



class Swap2{

  public static void main( String [] args)
  { 
     Swap s1 = new Swap(10,20);
     Swap s2 = new Swap(5,10);
    
     s1 =    s1.change(s2 , s2=s1);
    

  }

}







