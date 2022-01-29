package Pagamento;

import org.junit.jupiter.api.AfterEach;
import org.junit.jupiter.api.AfterAll;
import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.BeforeAll;
import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.*;

public class Calculo_SalarioTest {
    
    public Calculo_SalarioTest() {
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
    public void testCalculo_Salario() {
        System.out.println("Calculo_Salario");
        
        Salario salario = new Salario();
        salario.set_dias_trabalhados(1);
        salario.set_horas_trabalhadas(1);
        salario.set_salario(2000);
        
        Calculo_Salario instance = new Calculo_Salario();
        
        double expResult = 8.333333333333334;
        double result = instance.Calculo_Salario(salario);
        
        assertEquals(expResult, result);
        
    }
    
}
