package collectionsJava;

import java.util.*;

public class MyLinkedList implements Iterable<Integer>{
	
	
	private class Node{
		
		private int data;
		private Node next;
		
		public Node(int data) {
			
			this.data = data;
			this.next = null;
		}
	}
	
	private Node head;
	
	public MyLinkedList() {
		head = null;
	}
	
	public void add(int data) {
		
		if(head == null)
		{
			head = new Node(data);
		}
		else {
			Node nn = new Node(data);
			nn.next = head;
			head = nn;
		}
	}
  public Iterator<Integer> iterator(){
	  return new CustomIterator();
  }
  
/*########################### CUSTOM ITERATOR ###############################*/  

	private class CustomIterator implements Iterator<Integer>{
	
		private Node temp  = head;
		@Override
		public boolean hasNext() {
			// TODO Auto-generated method stub
			
			return temp != null;
		}
	
		@Override
		public Integer next() {
			// TODO Auto-generated method stub
			int t= temp.data;
			temp = temp.next;
			return t;
		}
		  
	  }
}
