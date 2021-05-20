package filosofos;



public class Tenedor {
	private int idt;

	
	
	public Tenedor(int idt){
		this.idt = idt;
	}
	
	public synchronized void cogerTenedor(int id) throws InterruptedException{
		
		System.out.println("El filosofo "+id+" tiene el tenedor "+idt);
	}
	
	public synchronized void soltarTenedor(int id){
		
		System.out.println("El filosofo "+id+" suelta el tenedor "+idt);

	}

}
//cada filófoso tiene que esperar a que el tenedor esté libre para cogerlo