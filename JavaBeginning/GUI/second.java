import javax.swing.*;

public class second {

    public static void main (String []args){

        JFrame frame = new JFrame ("JTextArex Example");
        JTextArea area = new JTextArea ("Enter your comments here  ...?",10,30);

        area.setLineWrap (true);
        area.setWrapStyleWord(true);

        JScrollPane scroll = new JScrollPane (area);

        frame.add (scroll);

        frame.setSize (400,300);
        frame.setDefaultCloseOperation (JFrame.EXIT_ON_CLOSE);
        frame.setVisible (true);
    }
}