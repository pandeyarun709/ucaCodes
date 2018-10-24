package collectionsLib;

import java.util.*;

public class MySets {


	public static void main(String [] args)
	{
		Scanner sc = new Scanner(System.in);
		
	        HashSet<Integer> set1 = new HashSet<>();
	        HashSet<Integer> set2 = new HashSet<>();
	        
	        int size,num;
	        		System.out.println("Enter number of values you have for set1");
	        		
	        		
	        		size = sc.nextInt();
	        		
	        		for(int i=0 ; i < size ;i++)
	        		{
	        			System.out.println("Enter number ");
	        			num = sc.nextInt();
	        			
	        			set1.add(num);
	        		}
	        		
	        		
                  System.out.println("Enter number of values you have for set2");
	        		
	        		
	        		size = sc.nextInt();
	        		
	        		for(int i=0 ; i < size ;i++)
	        		{
	        			System.out.println("Enter number ");
	        			num = sc.nextInt();
	        			
	        			set2.add(num);
	        		}
	        		
	        		sc.close();


	           
	            System.out.println("Value in Set 1 : " + set1);
	            System.out.println("Value in Set 2 : " + set2);
	           
	            set1.retainAll(set2); //retains common value
	            
	            System.out.println("Intersection of Set1 and Set2 : " + set1);
	            
	}    

}
