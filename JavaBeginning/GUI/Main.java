import java.awt.event.*;
import javax.swing.*;

public class AddTwoNumbers extends JFrame implements ActionListener {
    JLabel label1, label2, resultLabel;
    JTextField text1, text2;
    JButton addButton,mulButton;

    AddTwoNumbers() {
        setTitle("Add Two Numbers");
        setSize(550, 450);

        label1 = new JLabel("Enter First Number: ");
        label1.setBounds(30, 30, 150, 25);

        text1 = new JTextField();
        text1.setBounds(180, 30, 150, 25);

        label2 = new JLabel("Enter Second Number: ");
        label2.setBounds(30, 70, 150, 25);

        text2 = new JTextField();
        text2.setBounds(180, 70, 150, 25);

        addButton = new JButton("Add");
        addButton.setBounds(130, 110, 100, 30);
        addButton.addActionListener(this);

        mulButton = new JButton("Multiply");
        mulButton.setBounds(230, 110, 100, 30);
        mulButton.addActionListener(this);

        resultLabel = new JLabel("Result:");
        resultLabel.setBounds(30, 150, 300, 25);

        // Add Components to frame
        add(label1);
        add(text1);
        add(label2);
        add(text2);
        add(addButton);
        add(mulButton);
        add(resultLabel);
        
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setVisible(true);
    }

    public void actionPerformed(ActionEvent e) {
        int num1 = Integer.parseInt(text1.getText());
        int num2 = Integer.parseInt(text2.getText());
        if(e.getActionCommand().equals("Add")){
        try {
            int sum = num1 + num2;
            resultLabel.setText("Result: " + sum);
        } catch (NumberFormatException ex) {
            resultLabel.setText("Please Enter Valid Integers");
        }
    }
    else{
        try{
        int mul=num1*num2;
        resultLabel.setText("Result: "+mul);
        }
        catch(NumberFormatException ex){
            resultLabel.setText("Please Enter Valid Integers");
        }
    }
}

    public static void main(String args[]) {
        new AddTwoNumbers();
    }
}