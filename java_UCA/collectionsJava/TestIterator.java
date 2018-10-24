package collectionsJava;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

public class TestIterator {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
			
		List<Integer> s = new ArrayList<>();
		
		s.add(1000);
		s.add(2001);
		s.add(105);
		s.add(2050);
		s.add(140);
		s.add(212);
/*######### using inbuilt of iterator ################*/		
		Iterator<Integer> ite = s.iterator();
		
		while(ite.hasNext())
		{
			System.out.println(ite.next());
		}
/*################ Using cumtom iterator on our linkList ###############*/
		
		MyLinkedList list = new MyLinkedList();
		list.add(1000);
		list.add(2001);
		list.add(105);
		list.add(2050);
		
		
		Iterator<Integer> itr = list.iterator() ;
		
		 while(itr.hasNext())
		 {
			 System.out.println("=>> "+ itr.next());
		 }
		
		
		
		
	}

}
