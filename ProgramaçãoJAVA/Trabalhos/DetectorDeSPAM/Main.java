package ProgramaçãoJAVA.Trabalhos.DetectorDeSPAM;

public class Main {
    public static void main(String[] args) {
        
        String termos[][] = new String[10][2];
        termos[0][0] = "r$"; termos[0][1] = "7";
        termos[1][0] = "último dia"; termos[1][1] = "4";
        termos[2][0] = "uma compra foi realizada"; termos[2][1] = "10";
        termos[3][0] = "você ganhou"; termos[3][1] = "7";
        termos[4][0] = "desconto"; termos[4][1] = "6";
        termos[5][0] = "clique aqui para reivindicar sua recompensa."; termos[5][1] = "9";
        termos[6][0] = "atenção! sua conta foi comprometida."; termos[6][1] = "7";
        termos[7][0] = "tentaram falar com você agora"; termos[7][1] = "8";
        termos[8][0] = "seu pedido está pendente. clique aqui para confirmar."; termos[8][1] = "10";
        termos[9][0] = "aproveite"; termos[9][1] = "6";

        String caminho = "C:\\Users\\Gamer\\Desktop\\Projetos\\UENP-Programacao\\ProgramaçãoJAVA\\Trabalhos\\DetectorDeSPAM\\texto.txt";
        String texto;
        int pontSPAM = 0;

        LeitorArquivo arquivo = new LeitorArquivo();
        texto = arquivo.lerArquivo(caminho);
        texto = texto.toLowerCase();

        for(int i = 0; i < 10; i++){
            if (texto.contains(termos[i][0])) {
                pontSPAM += Integer.parseInt(termos[i][1]);
            }
        }

        if (pontSPAM < 5) {
            System.out.println("Não é uma mensagem de SPAM. Com "+pontSPAM+" pontos.");
        } else if(pontSPAM < 30){
            System.out.println("É uma mensagem fracamente suspeita de SPAM. Com "+pontSPAM+" pontos.");
        } else if(pontSPAM < 70){
            System.out.println("É uma mensagem potencialmente suspeita de SPAM. Com "+pontSPAM+" pontos.");
        } else {
            System.out.println("É uma mensagem de SPAM. Com "+pontSPAM+" pontos.");
        }
    }
}
