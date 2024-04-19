package Atv3;

public class Data {
    int dia, mes, ano;

    //Construtores
    Data(){
    }

    Data(int Ano){
        dia = 1;
        mes = 1;
        ano = Ano;
    }

    Data(int Dia, int Mes, int Ano){
        dia = Dia;
        mes = Mes;
        ano = Ano;
    }

    //Métodos
    void formatarData(char formatadorEscolhido){
        System.out.print(dia);
        System.out.print(formatadorEscolhido);
        System.out.print(mes);
        System.out.print(formatadorEscolhido);
        System.out.println(ano);
    }
}
