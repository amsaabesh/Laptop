import java.util.Stack;
public class StackExample {
    public static void main(String[] args){
        Stack<String> s = new Stack<>();
        s.push("5.");
        s.push("8");
        String aabesh = s.pop();
        System.out.println("stack"+s+"  pop"+aabesh);
        s.push("2");
        s.push("5");
        aabesh = s.pop();
        System.out.println("stack"+s+"  pop"+aabesh);
        aabesh = s.pop();
        System.out.println("stack"+s+"  pop"+aabesh);
        aabesh = s.pop();
        System.out.printf("now my stack is\n" + s + "\n\n"+"  pop"+aabesh);
        s.push("1");
        aabesh = s.pop();
        System.out.printf("pop korlam\n" + aabesh + "\n\n");
        //System.out.printf("Ekhon Stack ti holo\n" + s + "\n\n");
        //aabesh = s.peek();
        //System.out.printf("peek\n" + aabesh + "\n\n");
        //System.out.printf("Ekhon Stack ti holo\n" + s + "\n");

    }
}