package Atv6;

public class Dupla {
    
    String aluno1;
    String aluno2;

    Dupla(){
        aluno1 = "";
        aluno2 = "";
    }

    Dupla(String aluno1, String aluno2){
        this.aluno1 = aluno1;
        this.aluno2 = aluno2;
    }

    void mostrarAlunos(){
        System.out.println("Dupla: \n - "+aluno1+ "\n - "+aluno2);
    }

}
