package servidor_hora;

import javax.xml.ws.Endpoint;

public class Publica_WebService {
    
    public static void main(String[] args) {
        Endpoint.publish("http://127.0.0.1:9876/servidor_hora", new Implementa_SEI());
    }
    
}
