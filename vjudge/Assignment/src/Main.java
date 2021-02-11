import java.util.LinkedList;
import java.util.Scanner;

public class Main{
    
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        LinkedList<Integer> linkedList = new Linkedlist();
        while(true){
            int input = scanner.nextInt();
            if(linkedList.contains(input)){
                linkedList.remove((Integer) input);
                linkedList.add(input);
                System.out.println("NumberTi agei chilo, ekhon muche dilam ebong notun kore add korlam");
                System.out.println(linkedList);
            }
            else{
                linkedList.add(input);
                System.out.println("Shofol vabe jog kora hoyeche");
                System.out.println(linkedList);
            }
        }
    }
}