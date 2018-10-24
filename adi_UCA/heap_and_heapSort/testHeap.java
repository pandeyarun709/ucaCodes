public class testHeap {

	public static void main(String[] args) {
		
		Heap q = new Heap();
		
		int [] arr = new int[]{4,6,9,3,7,2};
         
		for(int i : arr)
		{
			q.enqueue(i);
			System.out.println("PEEK value = "+ q.peek());
		}
		
		int x =q.dequeue();
		System.out.println("deleted value = "+x);
	     x =q.dequeue();
	 	System.out.println("deleted value = "+x);
	}

}

