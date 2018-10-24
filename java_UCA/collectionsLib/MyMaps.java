package collectionsLib;

import java.util.HashMap;

public class MyMaps {
	public static void main(String[] args) {
        HashMap<String,Integer> firstMap = new HashMap<>();
        firstMap.put("Arun", 1186);
        firstMap.put("Ayush", 1201);
        firstMap.put("Aryan", 1191);
       
        System.out.print("Content in Map : ");
        System.out.println(firstMap);
        System.out.println("Value corresponding to Arun  is : " + firstMap.get("Arun"));

	}
}
