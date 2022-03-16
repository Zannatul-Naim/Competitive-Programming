import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t;
        t = input.nextInt();
        int i = 1;
        while(t > 0)
        {
            int n = input.nextInt();
            System.out.println("resposta " + i + ": " + n);
            i++;
            t--;
        }
 
    }
 
}
