package graphs;

import java.util.*;

public class Graphs {
     
	private List<Integer> [] node;
	private int size ;
	
	
	public Graphs(int size)
	{
		this.size  =  size;
		node  = new LinkedList[this.size];
		
		for(int i=0;i<size ; i++)
			 node[i] = new LinkedList<>();
	}
    
	
	public void insert( int u , int v)
	{
		node[u].add(v);
	}
    
	public void print()
	{
		for(int i = 0 ; i < size; i++)
		{
			System.out.print(i+" connected -> ");
			for(Integer j :  node[i])
				 System.out.print(" -> "+ j );
			
			System.out.println();
		}
	}
	
}
