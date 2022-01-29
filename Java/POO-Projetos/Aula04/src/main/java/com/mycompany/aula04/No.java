package com.mycompany.aula04;
//Nó
public class No {
    private int elemento;
    //Quando o prox é nulo temos o fim da lista.
    private No prox;
    
    public No (int elemento){
        this.elemento = elemento;
    }
    
    public void adicionar(int novo){
        if(prox == null){
            this.prox = new No(novo);
        }else{
            this.prox.adicionar(novo);
        }
    }
    
    public void listar(){
        System.out.println(elemento);
        if(prox != null){
            prox.listar();
        }
    }
}
