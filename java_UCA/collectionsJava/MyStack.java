package collectionsJava;

public class MyStack {
	
	int [] a ;
	int  top ;
	int size;
	
	
	
	public MyStack()
	{
		this.size = 10;
		a = new int[10];
		top = -1;
		
		
	}
	
	public MyStack(int size)
	{
		this.size = size;
		a = new int[this.size];
		top = -1;
	}
	
	
	public void push(int data)
	{
		if(top<size)
		{
			top++;
			a[top] = data;
		}
		else System.out.println("stack over flow");
	}
	
	
	public int pop()
	{
		if(top >= 0)
		{
			int t = a[top];
			top--;
			
			return t;
		}
	
		System.out.println("stack under flow");
	 return -1;
	
	}
	

	public static void main(String[] args) {
		MyStack s = new MyStack();
		s.push(1);
		System.out.print("Code ");
		System.out.print("Quotient and the ");
		System.out.println();
		System.out.print("  programming makes");
		System.out.print(" ");
		System.out.println("you great");
		System.out.println("come");
		System.out.println();
		System.out.println("in the academy.");
		

	}

}
