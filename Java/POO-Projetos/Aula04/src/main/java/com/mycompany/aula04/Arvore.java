/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.mycompany.aula04;

/**
 *
 * @author csilva
 */
public class Arvore {
    private int elemento;
    private Arvore esq, dir;
    
    public Arvore(int elemento){
        this.elemento = elemento;
    }
    
    public void inserir(int novo){
        if(novo <= elemento){
            if(esq == null){
                esq = new Arvore(novo);
            }else{
                esq.inserir(novo);
            }
        }else{
            if(dir == null){
                dir = new Arvore(novo);
            }else{
                dir.inserir(novo);
            }
        }
    }
    
    public void emOrdem(){
        if(esq != null){
            esq.emOrdem();
        }
        System.out.println(elemento);
        if(dir != null){
            dir.emOrdem();
        }
    }
}
