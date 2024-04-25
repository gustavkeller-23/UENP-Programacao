package Atv5;

public class Atv5 {

    public static void main(String[] args) {
        Linha linha1 = new Linha();
        Linha linha2 = new Linha(8);
        Linha linha3 = new Linha(25);

        linha1.desenhar();
        linha2.desenhar();
        linha3.desenhar();
    }
    
}