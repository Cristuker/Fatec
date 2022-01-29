package Recursos_Humanos;

import Identificacao.Empresa;
import Identificacao.Funcionario;
import Pagamento.Calculo_Salario;
import Pagamento.Salario;
import org.junit.jupiter.api.AfterEach;
import org.junit.jupiter.api.AfterAll;
import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.BeforeAll;
import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.*;

public class RH_CentralTest {
    
    public RH_CentralTest() {
    }
    
    @BeforeAll
    public static void setUpClass() {
    }
    
    @AfterAll
    public static void tearDownClass() {
    }
    
    @BeforeEach
    public void setUp() {
    }
    
    @AfterEach
    public void tearDown() {
    }


    @Test
    public void testValores() {
        System.out.println("valores");
        Salario r = new Salario();
        
        r.set_salario(1234.90);
        r.set_horas_trabalhadas(8.8);
        r.set_dias_trabalhados(28);
        
        Salario expResult = r;
        Salario result = RH_Central.valores(r);
        assertEquals(expResult, result);
    }
    
}
