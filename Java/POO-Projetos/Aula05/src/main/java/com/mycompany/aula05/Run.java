
package com.mycompany.aula05;

public class Run {
    public static void main(String[] args) {
        Produto p1 = new Produto("Um jogo de skate", 200, Categoria.GAMES);
        Produto p2 = new Produto("Smartwatch", 500, Categoria.ACESSORIO);
        Produto p3 = new Produto("GTX 3090", 10000, Categoria.PC);
        Produto p4 = new Produto("Tekken 5", 50, Categoria.GAMES);

        Cliente c1 = new Cliente("Cristian");
        
        c1.adicionar(p1);
        c1.adicionar(p2);
        c1.adicionar(p3);
        c1.adicionar(p4);
        c1.listar();
        c1.remover(p2);
        System.out.println(c1.calcularTotalGame());
        p3.mostrarDados();
        
    }
}