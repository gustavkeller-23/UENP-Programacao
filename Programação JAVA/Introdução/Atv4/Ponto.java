package Atv4;

public class Ponto {
    int x, y;

    //Construtor
    Ponto(){
        x = 0;
        y = 0;
    }

    Ponto(int valorX, int valorY){
        x = valorX;
        y = valorY;
    }

    //Métricas
    void plotar(){
        System.out.println("x = " + x + ", y = " + y);
    }
            
    void setarXY(int novoX, int novoY){
        x = novoX;
        y = novoY;
    }
}
