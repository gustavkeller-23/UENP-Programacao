public class Lampada {
    
    boolean ligada;
            
    //Construtor
    Lampada(){
        ligada = false;
    }
            
    // Métodos
    void acender(){
        ligada = true;
    }
    void apagar(){
        ligada = false;
    }
    void mostrarEstado(){
        if (ligada == true) 
            System.out.println("A lampada está acesa!");
        else
            System.out.println("A lampada está apagada!");
    }
}
