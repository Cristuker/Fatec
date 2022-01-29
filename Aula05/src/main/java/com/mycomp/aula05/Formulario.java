/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.mycomp.aula05;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;
import javax.swing.WindowConstants;

/**
 *
 * @author cristian
 */
public class Formulario {
    
    private javax.swing.JFrame form;
    private javax.swing.JLabel lbNome;
    private javax.swing.JTextField txtNome;
    private javax.swing.JButton btnSauder;
    
    public Formulario() {
        this.inicializarComponentes();
    }
    
    public void inicializarComponentes() {
        // Instancia objeto do tipo JFrame
        this.form  = new JFrame("Meu primeiro JFrame");
        // Configuração posição (x,y) e tamnho (width, heigth)
        this.form.setBounds(350, 200, 500, 250);
        this.form.setDefaultCloseOperation(WindowConstants.EXIT_ON_CLOSE);
        
        //Instancia JLabel
        this.lbNome = new JLabel("Nome: ");
        this.form.getContentPane().add(this.lbNome);
        
        //Instancia input
        this.txtNome = new JTextField();
        this.txtNome.setBounds(150, 40, 200, 30);
        this.form.getContentPane().add(this.txtNome);
        
        //Instancia botao
        //this.btnSauder = new JButton();
        //this.btnSauder.setBounds(15, 40, 20, 30);
        //this.form.getContentPane().add(this.btnSauder);
        
                this.form.setVisible(true);

    }
    
}
