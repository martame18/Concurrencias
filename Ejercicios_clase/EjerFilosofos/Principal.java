package filosofos;

public class Principal {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Sillas s = new Sillas();
		Tenedor[] ten = new Tenedor[5];
		for (int i=0; i<ten.length; i++){
			ten[i] = new Tenedor(i);
		}
		Filosofo[] f = new Filosofo[5];
		for (int i=0; i<f.length; i++){
			f[i] = new Filosofo(i,ten[i],ten[(i+1)%5],s);
		}
	//	int j = f.length-1;
	//	f[j] = new Filosofo(j,ten[(j+1)%5],ten[j]);
		for (int i=0; i<f.length; i++){
			f[i].start();
		}
	}

}
