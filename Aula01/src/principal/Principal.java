package principal;

import negocio.Aluno;

public class Principal {
    public static void main(String[] args) {
        Aluno cristian = new Aluno();

        System.out.println("Saudar sem setar dados");
        System.out.println(cristian.saudar());
        cristian.setNome("Cristian");
        System.out.println("Saudar setando dados");
        System.out.println(cristian.saudar());
    }
}
