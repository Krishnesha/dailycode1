class Counter {
    static int count = 0;
    public void increment() {
        count++;
        System.out.println("Count is: " + count);
    }
}
public class MainClass29{
    public static void main(String[] args) {
        Counter c1 = new Counter();
        Counter c2 = new Counter();
        c1.increment();  // Line A
        c2.increment();  // Line B
        c1.increment();  // Line C
    }
}