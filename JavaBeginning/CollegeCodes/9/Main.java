import java.util.Scanner;

class Bank {
    private String depositorName;
    private String depositorAddress;
    private int accountNumber;
    private double balance;

    // Static variable to generate unique account number for each depositor
    private static int accountCounter = 1001;

    // Constructor to initialize the depositor details
    public Bank(String name, String address, double balance) {
        this.depositorName = name;
        this.depositorAddress = address;
        this.accountNumber = accountCounter++;
        this.balance = balance;
    }

    // Method to display depositor information and balance
    public void displayInformation() {
        System.out.println("Account Number: " + accountNumber);
        System.out.println("Depositor Name: " + depositorName);
        System.out.println("Depositor Address: " + depositorAddress);
        System.out.println("Balance: " + balance);
    }

    // Method to deposit amount into the account
    public void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            System.out.println("Deposited " + amount + " to account " + accountNumber);
        } else {
            System.out.println("Deposit amount should be greater than 0.");
        }
    }

    // Method to withdraw amount from the account
    public void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            System.out.println("Withdrew " + amount + " from account " + accountNumber);
        } else {
            System.out.println("Invalid withdrawal amount or insufficient balance.");
        }
    }

    // Method to change the address of the depositor
    public void changeAddress(String newAddress) {
        this.depositorAddress = newAddress;
        System.out.println("Address updated for account " + accountNumber);
    }

    // Getters for account number and balance (optional for future operations)
    public int getAccountNumber() {
        return accountNumber;
    }

    public double getBalance() {
        return balance;
    }

    // Static method to create a list of depositors
    public static Bank[] createDepositors(int numDepositors) {
        
        Scanner scanner = new Scanner(System.in);
        Bank[] depositors = new Bank[numDepositors];

        for (int i = 0; i < numDepositors; i++) {
            System.out.println("Enter details for depositor " + (i + 1) + ":");

            System.out.print("Name: ");
            String name = scanner.nextLine();

            System.out.print("Address: ");
            String address = scanner.nextLine();
            
            System.out.print("Initial Balance: ");
            double balance = scanner.nextDouble();
            scanner.nextLine();
    
            depositors[i] = new Bank(name, address, balance);
        }

        return depositors;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number of depositors: ");
        int numDepositors = scanner.nextInt();
        scanner.nextLine(); // Consume the newline character

        // Create depositors
        Bank[] depositors = createDepositors(numDepositors);

        // Main loop for performing operations
        boolean exit = false;
        while (!exit) {
            System.out.println("\nSelect an operation:");
            System.out.println("1. Display depositor information");
            System.out.println("2. Deposit amount");
            System.out.println("3. Withdraw amount");
            System.out.println("4. Change address");
            System.out.println("5. Exit");
            int choice = scanner.nextInt();
            scanner.nextLine(); // Consume the newline character

            switch (choice) {
                case 1:
                    // Display depositor information
                    System.out.print("Enter account number to view details: ");
                    int accountNumber = scanner.nextInt();
                    scanner.nextLine(); // Consume newline
                    boolean found = false;
                    for (Bank depositor : depositors) {
                        if (depositor.getAccountNumber() == accountNumber) {
                            depositor.displayInformation();
                            found = true;
                            break;
                        }
                    }
                    if (!found) {
                        System.out.println("Account number not found.");
                    }
                    break;

                case 2:
                    // Deposit amount
                    System.out.print("Enter account number to deposit into: ");
                    accountNumber = scanner.nextInt();
                    System.out.print("Enter deposit amount: ");
                    double depositAmount = scanner.nextDouble();
                    scanner.nextLine(); // Consume newline
                    found = false;
                    for (Bank depositor : depositors) {
                        if (depositor.getAccountNumber() == accountNumber) {
                            depositor.deposit(depositAmount);
                            depositor.displayInformation();
                            found = true;
                            break;
                        }
                    }
                    if (!found) {
                        System.out.println("Account number not found.");
                    }
                    break;

                case 3:
                    // Withdraw amount
                    System.out.print("Enter account number to withdraw from: ");
                    accountNumber = scanner.nextInt();
                    System.out.print("Enter withdrawal amount: ");
                    double withdrawAmount = scanner.nextDouble();
                    scanner.nextLine(); // Consume newline
                    found = false;
                    for (Bank depositor : depositors) {
                        if (depositor.getAccountNumber() == accountNumber) {
                            depositor.withdraw(withdrawAmount);
                            depositor.displayInformation();
                            found = true;
                            break;
                        }
                    }
                    if (!found) {
                        System.out.println("Account number not found.");
                    }
                    break;

                case 4:
                    // Change address
                    System.out.print("Enter account number to change address: ");
                    accountNumber = scanner.nextInt();
                    scanner.nextLine(); // Consume newline
                    System.out.print("Enter new address: ");
                    String newAddress = scanner.nextLine();
                    found = false;
                    for (Bank depositor : depositors) {
                        if (depositor.getAccountNumber() == accountNumber) {
                            depositor.changeAddress(newAddress);
                            depositor.displayInformation();
                            found = true;
                            break;
                        }
                    }
                    if (!found) {
                        System.out.println("Account number not found.");
                    }
                    break;

                case 5:
                    // Exit
                    exit = true;
                    break;

                default:
                    System.out.println("Invalid choice! Please try again.");
            }
        }

        scanner.close();
    }
}
