import java.util.Scanner;

public class calculator{
    public static void main(String[] args) {
        float a,b;
        int o=1;
        char c;
        Scanner input =new Scanner(System.in);
        while(o!=8008){
            System.out.print("CALCULATION : ");
            a=input.nextFloat();
            c=input.next().charAt(0);
            b=input.nextFloat();
            switch(c){
                case '+':
                System.out.println(a+"+"+b+"="+(a+b));
                break;
                case '-':
                System.out.println(a+"-"+b+"="+(a-b));
                break;
                case '*':
                System.out.println(a+"*"+b+"="+(a*b));
                break;
                case '/':
                System.out.println(a+"/"+b+"="+(a/b));
                break;
                case '%':
                System.out.println(a+"%"+b+"="+(a%b));
                break;
                case '^':
                System.out.println(a+"^"+b+"="+Math.pow(a,b));
                break;
            }
            System.out.println("TO KILL PROCESS ENTER 8008 OR TO CONTINUE ENTER 0 : ");
            o=input.nextInt();
        }
    }
}