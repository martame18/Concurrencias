package barca;

public class Principal {

	public static void main(String[] args) {

		Android[] android = new Android[4];
		IPhone[] iphone = new IPhone[4];
		Barca b = new Barca();
		
		for (int i = 0; i<android.length; i++){
			android[i] = new Android(b,i);
		}

		for (int i = 0; i<iphone.length; i++){
			iphone[i] = new IPhone(b,i);
		}
		
		System.out.println("INICIO DEL PROGRAMA");
		b.start();
		
		for (int i = 0; i<iphone.length; i++){
			iphone[i].start();
		}
		
		for (int i = 0; i<android.length; i++){
			android[i].start();
		}
	}
}
