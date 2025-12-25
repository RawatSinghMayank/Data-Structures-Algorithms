import java.util.Scanner;

class NegativeException extends Exception {
    public NegativeException(String message) {
        super(message);
    }
}

class MyCalculator {
    public long power(int n, int p) throws NegativeException {
        if (n < 0 || p < 0) {
            throw new NegativeException("n or p should not be negative.");
        }
        if (n == 0 && p == 0) {
            throw new NegativeException("n and p should not be zero.");
        }
        return (long) Math.pow(n, p);
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        MyCalculator calc = new MyCalculator();

        // Read multiple test cases
        while (scanner.hasNextInt()) {
            int n = scanner.nextInt();
            int p = scanner.nextInt();
            try {
                long result = calc.power(n, p);
                System.out.println(result);
            } catch (NegativeException e) {
                System.out.println("java.lang.Exception: " + e.getMessage());
            }
        }

        scanner.close();
    }
}
