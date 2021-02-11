import java.util.LinkedList;
import java.util.Queue;
public class QueueExample {
    public static void main(String[] args){
        Queue<String> a = new LinkedList<>();
        a.add("Potato Crackers");
        a.add("Alooz");
        a.add("Mr. Twist");
        a.add("Ring Chips");
        a.add("Cheese Ball");

        System.out.printf("My Queue: " + a+ "\n\n");
        String n = a.remove();
        System.out.printf("Remove korbo: " + n + " | Remove korar por : " + a + "\n\n");
        n = a.poll();
        System.out.printf("Abar remove korbo: " + n + " | 2nt bar remove er por: " + a +"\n\n");
    }
}