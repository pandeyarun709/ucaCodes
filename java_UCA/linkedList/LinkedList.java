public class LinkedList{


	private class Node{

		private int data;
		private	Node next;

		public Node(int data)
		{
			this.data = data;
			this.next = null;

		} 
	}
	private Node head; 

	/*##################  methods #########*/
	public LinkedList()
	{
		this.head = null;
	} 

	public void push(int data)
	{
		if(head == null)
		{
			head =  new Node(data);

		}
		else{

			Node c = head;
			while(c.next != null)
			{
				c = c.next;
			}
			c.next = new Node(data);

		}

	} 

	public void reverse(){
               Node t = reverse(head);
               t.next = null;
        }

        private Node reverse(Node first){
                if(first.next == null){
                     head = first;
                     return first;
                }
		Node nn = reverse(first.next);
                nn.next = first;
                return first;		
	}    


	public void print()
	{
		Node c = head;
		while( c!= null)
		{
			System.out.print(c.data + " ");
			c = c.next;
		}
	}

}
