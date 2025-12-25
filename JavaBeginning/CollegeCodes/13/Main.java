abstract class Temperature {
    
	 double temp;
    	
	public  void setTempData (double temp){
		this.temp = temp;
	}
	public abstract void changeTemp();

}

class Fahrenheit extends Temperature {
	Fahrenheit(){}
	private double ctemp;
		
	@Override
	public void changeTemp (){
		
		ctemp = 5/9.0 * (temp - 32);
	
		System.out.printf ("Temperature in Celsius: %.4f\n" , ctemp);
	}
}

class Celsius extends Temperature {
	Celsius (){}
	private double ftemp;
	
	@Override
	public void changeTemp (){
		
		ftemp = 9/5.0 * temp + 32;
	
		System.out.printf("Temperature in Fahrenheit: %.4f\n " ,ftemp);
	}
}

public class Main {
	
	public static void main (String []args){
		Temperature temp = new Fahrenheit();
        temp.setTempData (100.02);
        temp.changeTemp();

        temp = new Celsius();
        temp.setTempData(39.23);
        temp.changeTemp();

    }
}