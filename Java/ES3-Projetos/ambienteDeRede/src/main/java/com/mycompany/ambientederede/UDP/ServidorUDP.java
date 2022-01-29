package com.mycompany.ambientederede.UDP;

import java.net.DatagramSocket;
import java.net.DatagramPacket;


public class ServidorUDP {
    public static void main(String[] args) {
        try{
            DatagramSocket socket = new DatagramSocket(2654); // Numero da porta
            
            byte[] num = new byte[1]; // Arranjo de bytes 1 = numero de 8 digitos
            DatagramPacket datagrama = new DatagramPacket(num, 1);
            socket.receive(datagrama);
            byte[] recebido = datagrama.getData();
            
            System.out.println("O número recebido foi" + recebido[0]);
        }catch(Exception error){
            System.out.println(error.toString());
        }
    }
}
