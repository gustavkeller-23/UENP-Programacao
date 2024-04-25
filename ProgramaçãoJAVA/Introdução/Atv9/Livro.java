package Atv9;

public class Livro {
    String titulo;
    int qtdPaginas;
    String editora;
    String autor;

    Livro(){
        this.titulo = "";
        this.qtdPaginas = 0;
        this.editora = "";
        this.autor = "";
    }

    Livro(String titulo, int qtdPaginas, String editora, String autor){
        this.titulo = titulo;
        this.qtdPaginas = qtdPaginas;
        this.editora = editora;
        this.autor = autor;
    }
}
