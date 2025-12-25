class PrivateExample {
    private int data = 40;

    private void display() {
        System.out.println("Private method: " + data);
    }

    public void accessPrivate() {
        display(); 
    }
}

public class TestPrivate {
    public static void main(String[] args) {
        PrivateExample obj = new PrivateExample();
        obj.accessPrivate(); 
        
    }
}
