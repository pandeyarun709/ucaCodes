public class commandLine{
    public static void main(String [] args)
   {
     if(args.length != 0)
     {
	for(int i=0;i<args.length ;i++)
		System.out.println(args[i]);
       
        int i = Integer.parseInt(args[0]);
	int j = Integer.parseInt(args[1]);
 	
	System.out.println(i+" "+j);
	  	
     }	
   }
 
}
