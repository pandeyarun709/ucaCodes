public class Heap implements QueueIntf {
	
	private int [] arr;
	private int SIZE;
	
	public Heap()
	{
		arr = new int[1000];
		SIZE =0;
	}
	
	public void enqueue(int d)
	{
		arr[SIZE] = d;
		swim(SIZE);
		SIZE++;
		
	/*	for(int i=0;i<SIZE ;i++ )
		{
			//q.enqueue(i);
			System.out.print(arr[i] + " ");
			
		}
		System.out.println();*/
	}
	
	public int dequeue()
	{
		int temp = arr[0];
		swap(0, SIZE-1);
		SIZE--;
		sink(0);
		
		return temp;
	}
	
	public int peek()
	{
		return arr[0];
	}
	public boolean isEmpty()
	{
		if(SIZE == 0)
			return true;
		return false;
 	}

	public int size()
	{
		return SIZE;
	}
	
	private void swim(int i)
	{
		if(arr[i] <= arr[i/2])
		 return;
		
		swap(i/2,i);
		swim(i/2);
	}
	
	private void sink(int i)
	{
		if(i >= SIZE)
			 return;
		
		int left = 2*i;
		int right = 2*i + 1;
		
		int max = i;
		
		if(left < SIZE && arr[left] > arr[max]) max =left;
		
		if(right < SIZE && arr[right] > arr[max]) max = right;
		
		if(max != i)
			swap(max,i);
		else return;
		
		sink(max);
	}
	
	private void  swap(int i , int j)
	{
		int t = arr[i];
		arr[i] = arr[j];
		arr[j] = t;
	}
	
	

}

