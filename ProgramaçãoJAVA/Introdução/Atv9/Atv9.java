package Atv9;

public class Atv9 {
    
    public static void main(String[] args) {
        
        Autor autor1 = new Autor();
        Autor autor2 = new Autor("Pablo marçal", "N tenho certeza");

        Livro livro1 = new Livro();
        Livro livro2 = new Livro("A volta de quem n foi", 365, "Saraivada", autor2.nome);

        
        System.out.println(livro1.titulo+" "+livro1.qtdPaginas+" "+livro1.editora+" "+livro1.autor+".");
        System.out.println(livro2.titulo+" "+livro2.qtdPaginas+" "+livro2.editora+" "+livro2.autor+".");
        
        System.out.println(autor1.nome+" "+autor1.genero+".");
        System.out.println(autor2.nome+" "+autor2.genero+".");

    }

}
