package barca;

public class Barca extends Thread{
	
	private static final int C = 4;
	

	

	/**
	 * Un estudiante con m�vil android llama a este m�todo 
	 * cuando quiere cruzar el r�o. Debe esperarse a montarse en la
	 * barca de forma segura, y a llegar a la otra orilla del antes de salir del
	 * m�todo
	 * @param id del estudiante android que llama al m�todo
	 * @throws InterruptedException
	 */
	
	public synchronized void android(int id) throws InterruptedException{
		
		
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