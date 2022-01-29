package negocio;

public class Aluno {
    private String nome, email;

    public String saudar() {
        return "Olá, meu nome é " + this.nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }
}
