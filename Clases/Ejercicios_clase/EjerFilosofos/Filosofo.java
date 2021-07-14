package filosofos;

import java.util.*;
public class Filosofo extends Thread{
	private static Random r = new Random();
	private int id;
	private Tenedor izdo, der;
	private Sillas s;
	
	public Filosofo(int id,Tenedor izdo,Tenedor der, Sillas s){
		this.id = id;
		this.izdo = izdo;
		this.der = der;
		this.s = s;

	}
	
	
	public void run(){
		while (true){
			try {
				// Thread.sleep(r.nextInt(100)); //pensando
				s.cojoSilla(id);
				izdo.cogerTenedor(id);
				der.cogerTenedor(id);
				Thread.sleep(r.nextInt(200)); //comer
				der.soltarTenedor(id);
				izdo.soltarTenedor(id);
				s.devuelvoSilla(id);
				
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}
	}

}
