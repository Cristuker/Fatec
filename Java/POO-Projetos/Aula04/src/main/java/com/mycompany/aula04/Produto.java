package com.mycompany.aula04;

public class Produto {
    private double preco;
    private String nome;

    public Produto(String nome, double preco ) {
        this.preco = preco;
        this.nome = nome;
    }
    
    public void mostrarDados(){
        System.out.println("Nome: " + nome);
        System.out.println("Preço: " + preco);
    }
    
    public double getPreco(){
        return this.preco;
    }
}
