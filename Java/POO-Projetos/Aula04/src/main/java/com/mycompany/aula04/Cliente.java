
package com.mycompany.aula04;

public class Cliente {
    private String nome;
    private Endereco endereco;
    private int maxProd;
    private int qtdAtual;
    private Produto[] carrinho;

    public Cliente(String nome, Endereco endereco, int maxProd) {
        this.nome = nome;
        this.endereco = endereco;
        this.maxProd = maxProd;
        this.carrinho = new Produto[Math.max(1,maxProd)];
    }
    
    public void adicionar(Produto prod){
        if(qtdAtual < maxProd){
            carrinho[qtdAtual] = prod;
            qtdAtual++;
        }else{
            System.out.println("Carrinho cheio não é possivel adicionar mais produtos");
        }
        
    }

    
    public void mostrarCarrinho(){
        System.out.println("Carrinho de "+ nome);
        for(int i = 0; i <= qtdAtual; i++){
            carrinho[i].mostrarDados();
        }
    }
    
    public void mostrarDados(){
        System.out.println("Nome: "+ nome);
        endereco.mostrarEndereco();
    }
}
