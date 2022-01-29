package servidor_hora;


import javax.jws.WebService;
import javax.jws.WebMethod;
import javax.soap.SOAPBinding;
import javax.soap.SOAPBinding.Style;

        @WebService
        @SOAPBinding(style = Style.RPC)
        
public interface Interface_Servico {
        
        @WebMethod String getTimeAsString();
        @WebMethod long getTimeAsElapsed();
}
