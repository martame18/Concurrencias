package filosofos;

public class Sillas {
	private int sillasLibres = 4;
	
	public synchronized void cojoSilla(int id) throws InterruptedException {
		while(sillasLibres == 4) wait();
		sillasLibres--;
		System.out.println(" El filosofo "+id+" coge una silla ");
	}
	
	public synchronized void devuelvoSilla(int id) {
		sillasLibres++;
		if(sillasLibres == 1) notify();
		System.out.println("  El filosofo "+id+" deja una silla ");
	}
}
