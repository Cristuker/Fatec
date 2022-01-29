package com.mycompany.aula05;

import java.util.ArrayList;

public class Produto {
    private String descricao;
    private double preco;
    private Categoria categoria;
    private ArrayList<Cliente> clientes;

    public Produto(String descricao, double preco, Categoria categoria) {
        this.descricao = descricao;
        this.preco = preco;
        this.categoria = categoria;
    }
    
    public void mostrarDados() {
        System.out.println("Descrição: " + this.descricao);
        System.out.println("Preço: " + this.preco);
        System.out.println("Categoria: " + this.categoria);
    }

    public double getPreco() {
        return preco;
    }

    public Categoria getCategoria() {
        return categoria;
    }
    
    public void mostrarCliente() {
        System.out.println("Clientes que comparam " + descricao);
        for(Cliente c : clientes){
            System.out.println(c.getNome());
        }
    }
}
