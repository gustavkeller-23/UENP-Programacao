package Atv4;

public class Atv4 {

    public static void main(String[] args){
    
        Ponto ponto1 = new Ponto();
        Ponto ponto2 = new Ponto(12, 13);

        ponto1.plotar();
        ponto2.plotar();
        ponto1.setarXY(14, 18);
        ponto2.setarXY(23, 44);
        ponto1.plotar();
        ponto2.plotar();
    }

}
