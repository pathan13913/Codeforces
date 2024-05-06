import java.util.Scanner;
public class Way__Too__Long__Words {
    public static void main(String[] args) {
        Scanner input= new Scanner(System.in);
        int i;
        int num=input.nextInt();
        Name name[]=new Name[num];

        for(i=0;i<num;i++){

            name[i]=new Name();
            name[i].n= input.next();
        }
        System.out.println("\n");

        for(i=0;i<num;i++){

            int l= name[i].n.length();
            if(l>10){
                System.out.println(name[i].n.charAt(0)+""+(l-2)+""+name[i].n.charAt(l-1));
            }
            else {
                System.out.println(name[i].n);
            }
        }
    }
}
class Name{
    String n;
}
