package filosofos;



public class Tenedor {
	private int idt;
	private boolean libre = true;
	
	
	public Tenedor(int idt){
		this.idt = idt;
	}
	
	public synchronized void cogerTenedor(int id) throws InterruptedException{
		while(!libre) wait();    //preprotocolo
		libre = false;
		System.out.println("El filosofo "+id+" tiene el tenedor "+idt);
	}
	
	public synchronized void soltarTenedor(int id){
		
		System.out.println("     El filosofo "+id+" suelta el tenedor "+idt);
		libre = true;
		notify();
	}

}
//cada filófoso tiene que esperar a que el tenedor esté libre para cogerlo