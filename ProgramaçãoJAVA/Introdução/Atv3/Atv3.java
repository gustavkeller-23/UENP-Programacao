package Atv3;

public class Atv3 {

    public static void main(String[] args){
    
        Data data1 = new Data();
        Data data2 = new Data(2004);
        Data data3 = new Data(27, 8, 2004);
        
        data1.formatarData('/');
        data1.formatarData('-');
        data2.formatarData('/');
        data2.formatarData('-');
        data3.formatarData('/');
        data3.formatarData('-');
    }

}
