import java.util.Scanner;

public class Watermelon {
    public static void main(String[] args) {
        int weight,i,flag=0;
        Scanner input= new Scanner(System.in);
        weight=input.nextInt();

        for(i=2;i<weight;i+=2){

            if((weight-i)%2==0){
                flag=1;
            }
        }
        if(flag==1)
            System.out.println("Yes");
        else
            System.out.println("No");
    }
}
