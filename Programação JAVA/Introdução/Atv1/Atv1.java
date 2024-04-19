// Fazer uma lâmpada acender e apagar

public class Atv1{

    public static void main(String[] args){
    	   
    	Lampada lampada = new Lampada();
        
        lampada.mostrarEstado();
        lampada.acender();
        lampada.mostrarEstado();
        lampada.apagar();
        lampada.mostrarEstado();
        
    }

}