import java.util.Scanner;

public class Domino_piling {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int m,n;
        m=input.nextInt();
        n=input.nextInt();
        int result = (m*n)/2;
        System.out.println(result);
    }
}
