package Atv6;

public class Atv6 {
    
    public static void main(String[] args) {
        Aluno aluno1 = new Aluno("Nelso", 123);
        Aluno aluno2 = new Aluno("Paulo", 124);
        Aluno aluno3 = new Aluno("Juliana", 125);
        Aluno aluno4 = new Aluno("Andresa", 126);
        
        Dupla dupla1 = new Dupla(aluno1.nome, aluno3.nome);
        Dupla dupla2 = new Dupla(aluno2.nome, aluno4.nome);

        dupla1.mostrarAlunos();
        dupla2.mostrarAlunos();
    }

}
