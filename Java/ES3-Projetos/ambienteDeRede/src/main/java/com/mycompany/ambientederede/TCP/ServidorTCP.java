package com.mycompany.ambientederede.TCP;

import java.net.*;
import java.io.*;


public class ServidorTCP {
    public static void main(String[] args) {

        //Acima de 1023
        int porta = 12258;

        try {
            //Numero de clientes que pode ser atendido na porta
            ServerSocket servidor = new ServerSocket(porta,2);
            System.out.println("Esperando conexão...");
            Socket conexao = servidor.accept(); //Servidor foi criado e ele esta esperando algum cliente se conectar
            

            DataOutputStream saida = new DataOutputStream(conexao.getOutputStream());// Por onde o numero sera enviado
            SocketAddress s = conexao.getRemoteSocketAddress(); // Pegando o endereço do cliente
            System.out.println("Enviando número ao cliente: "+s.toString()); 
            saida.writeInt(12);
            conexao.close();

        }catch(Exception error){
            System.out.println(error.toString());
        }
        
    }
     
}
