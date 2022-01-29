
package com.mycompany.aula04;


public class Init {
    public static void main(String[] args) {
        Endereco e = new Endereco("Rua: Araguacu", "Guarujá", Estado.SP);
        Cliente aluno = new Cliente("Cristian Silva", e,10);
        aluno.mostrarDados();
        No n = new No(5);
        n.adicionar(5);
        n.adicionar(10);
        n.listar();
        Arvore a = new Arvore(12);
        a.inserir(7);
        a.inserir(14);
        a.inserir(10);
        a.inserir(6);
        a.emOrdem();
        
        aluno.adicionar(new Produto("Caderno",1));
        aluno.adicionar(new Produto("Lapis",1));
        Produto p = new Produto("Caneta",2.3);
        aluno.mostrarCarrinho();
        
    }
}
