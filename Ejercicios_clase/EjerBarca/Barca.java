package barca;

public class Barca extends Thread{
	
	private static final int C = 4;
	
	private int nAnd = 0;
	private int nIph = 0;
	
	
	private boolean libreAnd = true;  //true sii puede subirse a la barca de forma segura
	private boolean libreIph = true;
	private boolean finViaje = false;

	/**
	 * Un estudiante con m�vil android llama a este m�todo 
	 * cuando quiere cruzar el r�o. Debe esperarse a montarse en la
	 * barca de forma segura, y a llegar a la otra orilla del antes de salir del
	 * m�todo
	 * @param id del estudiante android que llama al m�todo
	 * @throws InterruptedException
	 */
	
	public synchronized void android(int id) throws InterruptedException{
		while (!libreAnd) wait();
		nAnd++;
		System.out.println("Sube android"+id);
		if(nAnd == 2 && nIph == 1) libreAnd = false;
		else if(nAnd == 1 && nIph == 2) libreIph = false;
		else if(nAnd == 3) libreIph = false;
		if (nAnd+nIph < 4) {
			while(!finViaje) wait();
		} else {
			libreAnd = false;
			libreIph = false;
			finViaje = true;
			notifyAll();
		}
		// se baja de la barca
		nAnd--;
		System.out.println("Baja android" +id);
		if (nAnd+nIph == 0) {
			libreAnd = true;
			libreIph = true;
			finViaje = false;
			notifyAll();
		}
	}
	
	/**
	 * Un estudiante con m�vil android llama a este m�todo 
	 * cuando quiere cruzar el r�o. Debe esperarse a montarse en la
	 * barca de forma segura, y a llegar a la otra orilla del antes de salir del
	 * m�todo
	 * @param id del estudiante android que llama al m�todo
	 * @throws InterruptedException
	 */

	public synchronized void iphone(int id) throws InterruptedException{
		
		
	}
	
}

//CS-IPhone: no puede subirse a la barca hasta que esté en modo subida, haya sitio 
// y no sea peligroso

//CS-Android: no puede subirse a la barca hasta que esté en modo subida, haya sitio 
//y no sea peligroso

//CS-Todos: no pueden bajarse de la barca hasta que haya terminado el viaje