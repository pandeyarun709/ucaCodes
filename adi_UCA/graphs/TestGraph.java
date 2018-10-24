package graphs;

public class TestGraph {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
         
		Graphs grp = new Graphs(7);
		
		grp.insert(0 ,1 );
		grp.insert(0 ,2 );
		grp.insert(1 ,2 );
		grp.insert(1 ,3 );
		grp.insert(2 ,6 );
		grp.insert(3 ,6 );
		grp.insert(3 ,4 );
		grp.insert(6 ,5 );
		grp.insert(5,4 );
		
		grp.print();
	}

}
