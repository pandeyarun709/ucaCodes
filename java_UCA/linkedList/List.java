public class List{

   public static void main( String [] args)
   {
      LinkedList list = new LinkedList();
      for(int i=0;i<5;i++)
      {
         list.push(i);
      }
      
      list.print();
      
      System.out.println("Reverse is ");
      
      list.reverse();
      
      list.print(); 
 
   }

}
