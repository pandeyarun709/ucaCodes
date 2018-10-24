import java.lang.*;
import java.util.*;

public class Employee{

    private int empid;
    private String names;
    private int salary;


   public Employee()
   {
      this.empid = -1;
      this.names  = "";
      this.salary = 0;
   
   } 


   public void set(int empid,String names, int salary )
   {
      this.empid = empid;
      this.names = names;
      this.salary = salary; 
  
   }  

   public static void print(Employee [] e)
   {
      for(Employee i : e)
      {
         System.out.println(i);
      }

   }
  
   public String toString()
   {
        return "Id = "+empid+" Name = "+names+" Salary = "+salary;
   } 

   public static class Idsort implements Comparator<Employee>{
 
        @Override
        public int compare(Employee e1,Employee e2)
        {
            return ((Integer)e1.empid).compareTo((Integer)e2.empid);
        }
   }
  public static final Comparator<Employee> idSort = new Idsort();


/*############### main function #########################*/
   public static void main(String []  args)
   {
       Employee [] e = new Employee[3];
        //public static final Comparator<Employee> idSort = new Idsort();

  
       Scanner sc =  new Scanner(System.in);
       int empid,salary;
       String names;  
       for(int i=0;i<3;i++)
       {
          System.out.println("Enter the detail ");
           empid = sc.nextInt();
           names = sc.nextLine();
           salary = sc.nextInt();
           
          e[i] = new Employee();
          e[i].set(empid,names,salary);
       }
      
        print(e); // print the answer
        
        System.out.println("After sorting : ");
        Arrays.sort(e,Employee.idSort); 
        print(e);     
        
        sc.close();
   }
}
