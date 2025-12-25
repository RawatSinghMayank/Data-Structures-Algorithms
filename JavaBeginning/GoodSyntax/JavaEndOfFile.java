import java.util.Scanner;
public class JavaEndOfFile {

    public static void main(String[] args) {

        Scanner in = new Scanner (System.in);
        int lineNumber = 1;

        while (in.hasNext()){
            String line = in.nextLine();
            System.out.println (lineNumber + " " + line);
            lineNumber++;
        }

    }
}
