public class Disciplina {
    String nome;
    int carga;
    Curso curso;
    
    //O construtor é chamado implicitamente, mesmo quando não existe um construtor implicito
    Disciplina(String nome, int carga, Curso curso){
        this.nome = nome;
        this.curso = curso;
        this.carga = carga;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public int getCarga() {
        return carga;
    }

    public void setCarga(int carga) {
        this.carga = carga;
    }

    public Curso getCurso() {
        return curso;
    }

    public void setCurso(Curso curso) {
        this.curso = curso;
    }

    void mostrarDados(){
        System.out.println("Nome: " + nome);
        System.out.println("Carga: " + carga);
        System.out.println("Curso: " + curso);
    }

    void mostrarMensagem(){
        switch (curso){
            case ADS: {
                System.out.println("To aprenedndo java");
                break;
            }
            case SI :{
                System.out.println("Curso de designer");
                break;
            }
            case GE: {
                System.out.println("Curso de ADM");
                break;
            }
            case GP: {
                System.out.println("Curso de navio");
                break;
            }
            default:{
                System.out.println("Curso");
            }
        }
    }
}
