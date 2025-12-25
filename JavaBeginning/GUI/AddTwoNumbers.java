import java.awt.event.*;
import javax.swing.*;

public class AddTwoNumbers extends JFrame implements ActionListener {
    JCheckBox cb1, cb2;
    JButton btn;

    AddTwoNumbers() {
        setTitle("Add Two Numbers");
        setSize(300, 250);
        setLayout(null);

        cb1 = new JCheckBox("Java");
        cb1.setBounds(50, 50, 100, 30);
        cb2 = new JCheckBox("Python");
        cb2.setBounds(50, 90, 100, 30);
        
        btn = new JButton("Submit");
        btn.setBounds(50, 140, 100, 30);
        btn.addActionListener(this);

        add(cb1);
        add(cb2);
        add(btn);

        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setVisible(true);
    }

    public void actionPerformed(ActionEvent e) {
        String msg = "Selected:";
        if (cb1.isSelected()) {
            msg += " Java";
        }
        if (cb2.isSelected()) {
            msg += " Python";
        }
        JOptionPane.showMessageDialog(this, msg);
    }

    public static void main(String args[]) {
        new AddTwoNumbers();
    }
}