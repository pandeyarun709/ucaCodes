package fileHandling;

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.FileWriter;

public class ProgramSum {



	public static void main(String[] args) {
		// TODO Auto-generated method stub
		


		
/*################# file reader ###########*/
		FileReader f1 = null;
		try {
			
			f1 = new FileReader("F:/file.txt");
			BufferedReader br = new BufferedReader(f1);
			String line = "";
			int sum =0;
			while((line = br.readLine()) != null)
			{
				
				sum += Integer.parseInt(line);
			}
			
			System.out.println(sum);
			
			
		
		}catch(Exception e){}
			
		finally{
				try {
					f1.close();
				}catch(Exception e1)
				{
					
				}
			}
		

	}


}
