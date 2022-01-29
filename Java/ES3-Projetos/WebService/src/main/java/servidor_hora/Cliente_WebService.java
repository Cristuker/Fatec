package servidor_hora;


import javax.xml.namespace.QName;
import javax.xml.ws.Service;
import java.net.URL;

public class Cliente_WebService {
    
    public static void main (String args[]) throws Exception {
        URL url = new URL("http://localhost:9876/servidor_hora?wsdl");
        QName qname = new QName("http://servidor_hora/", "Implementa_SEIService");
        
        Service servico = Servico.create(url, qname);
        
        Interface_Servico sei = servico.getPort(Interface_Servico.class);
        
        System.out.println(sei.getTimeAsString());
        System.out.println(sei.getTimeAsElapsed());
    }
    
}
