package fileHandling;

import java.io.FileReader;
import java.io.FileWriter;

public class FileImp {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		FileWriter f = null;
		String str = "hello";
		
		try {
			
			f = new FileWriter("F:/file.txt");
			f.write(41);
			f.write(str);
			
			for(int i=0; i< str.length();i++)
				 f.write(str.charAt(i));
			
		}catch(Exception e){}
		finally{
			try {
				f.close();
			}
			catch(Exception e1)
			{
				
			}
		}
		
		
/*################# file reader ###########*/
		FileReader f1 = null;
		try {
			
			f1 = new FileReader("F:/file.txt");
			System.out.println(f1.read());
			int data;
			
			while((data = f1.read()) != -1)
				 System.out.print((char)data);
		}catch(Exception e){}
			
		finally{
				try {
					f.close();
				}catch(Exception e1)
				{
					
				}
			}
		

	}

}
