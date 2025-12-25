import java.util.Scanner;

//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {

        int choice;
        Scanner in = new Scanner (System.in);
        choice = in.nextInt();

        switch (choice){
            case 1:
                System.out.println("It was " + 1);
                break;

            case 2: case 3: case 4:
                System.out.println("It was 2 or 3 or 4");
            default:
                System.out.println("Wrong Choice");
        }
        in.nextLine();
        String choice2;

        choice2 = in.nextLine();
        switch (choice2.toLowerCase()){
            case "mayank":
                System.out.println("It was " + "Mayank");
                break;

            case "pankaj": case "swati": case "ritu":
                System.out.println("They were family members");
                break;
            default:
                System.out.println("Wrong Choice");
        }

      // Just trying out new functions  System.out.println(Math.sqrt(169));

        int x = 10;
        while (x > 0){
            System.out.println(x);
            x--;
        }
        x = 1;
        do {
            System.out.println(x);
            x--;
        } while(x > 0);

    }
}
