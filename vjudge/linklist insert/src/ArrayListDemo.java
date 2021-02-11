import java.io.*; 
import java.util.ArrayList; 
  
public class ArrayListDemo { 
public static void main(String[] args) 
    { 
        ArrayList<Integer> arrlist = new ArrayList<Integer>(5); 
        arrlist.add(15); 
        arrlist.add(20); 
        arrlist.add(25); 
        for (Integer number : arrlist) { 
            System.out.println("Number = " + number); 
        } 
    } 
} 