package com.mycompany.aula05;

import java.util.ArrayList;

public class Cliente {
    private String nome;
    private ArrayList<Produto> carrinho;

    public Cliente(String nome) {
        this.nome = nome;
        this.carrinho = new ArrayList<Produto>();
    }

    public String getNome() {
        return nome;
    }
    
    public void adicionar(Produto produto) {
        if(produto != null){
            carrinho.add(produto);
        }
    }
    
    public void remover(Produto produto){
        if(produto != null){
            carrinho.remove(produto);
        }
    }
     public void listar(){
        for(Produto produto: carrinho){
                produto.mostrarDados();
        }
    }
     
     public double calcularTotalGame() {
         double soma = 0;
         for (Produto produto: carrinho) {
             if(produto.getCategoria() == Categoria.GAMES){
                soma = soma + produto.getPreco();
             }
         }
         return soma;
     }
}
