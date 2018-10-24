class SwapCallByValue{
  
  public static void main(String [] args)
  {
     int num1 =2 ;
     int num2 = 3;
/*################## method 1#################*/
     int [] a = new int[2];
     a[0] = num1;
     a[1] = num2;

     swap(a);
     num1 = a[0]; 
     num2 = a[1];
     System.out.println("num1 = " + num1 + " num2 = " + num2);
     
      /*################# method 2 #############*/
     
     num1 = swap2(num2, num2=num1);
     System.out.println(num1 + "  " + num2);

   } 


  public static void swap1(int a[])
  {
     int temp = a[0];
      a[0] = a[1];
      a[1] = temp;
  } 
  
  public static int swap2(int num1,int num2)
  {
     return num1;
  } 

}
