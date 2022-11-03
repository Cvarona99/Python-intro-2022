import java.util.Scanner;
class First {
public static void main(String[] args) throws Exception {
    Scanner name = new Scanner(System.in); // create scanner object
    System.out.println("Enter name");
    String name = name.nextLine(); // read user input
    System.out.println("Hello ," +name);
    }
}