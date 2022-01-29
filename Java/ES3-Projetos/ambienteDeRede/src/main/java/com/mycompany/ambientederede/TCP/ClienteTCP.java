package com.mycompany.ambientederede.TCP;

import java.net.*;
import java.io.*;


public class ClienteTCP {
    public static void main(String[] args) {
        
        String enderecoServidor = "127.0.0.1";
        int portaServidor = 12258;
        
        try{
            Socket conexao = new Socket(enderecoServidor, portaServidor);
            DataInputStream entrada = new DataInputStream(conexao.getInputStream());
            System.out.println("Número recebido: "+ entrada.readInt());
            conexao.close();
        }catch(Exception error){
            System.out.println(error.toString());
        }
    }
}
