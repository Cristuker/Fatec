package Pagamento;

import org.junit.jupiter.api.AfterEach;
import org.junit.jupiter.api.AfterAll;
import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.BeforeAll;
import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.*;


public class SalarioTest {
    
    public SalarioTest() {
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
    public void testSet_salario() {
        System.out.println("set_salario");
        double salario = 2000.00;
        Salario instance = new Salario();
        instance.set_salario(salario);
        assertEquals(salario, instance.get_salario());
    }

    @Test
    public void testSet_horas_trabalhadas() {
        System.out.println("set_horas_trabalhadas");
        
        double horas_trabalhadas = 8.0;
        Salario instance = new Salario();
        instance.set_horas_trabalhadas(horas_trabalhadas);

        assertEquals(horas_trabalhadas, instance.get_horas_trabalhadas());
    }

    @Test
    public void testSet_dias_trabalhados() {
        System.out.println("set_dias_trabalhados");
        
        int dias_trabalhados = 30;
        Salario instance = new Salario();
        instance.set_dias_trabalhados(dias_trabalhados);
        
        assertEquals(dias_trabalhados, instance.get_dias_trabalhados());

    }


    @Test
    public void testGet_salario() {
        System.out.println("get_salario");
        
        Salario instance = new Salario();
        double expResult = 2000.0;
        instance.set_salario(expResult);
        double result = instance.get_salario();
        
        assertEquals(expResult, result);

    }


    @Test
    public void testGet_horas_trabalhadas() {
        System.out.println("get_horas_trabalhadas");
        
        Salario instance = new Salario();
        double expResult = 8.0;
        instance.set_horas_trabalhadas(expResult);
        
        double result = instance.get_horas_trabalhadas();
        
        assertEquals(expResult, result, 0.0);
    }

    @Test
    public void testGet_dias_trabalhados() {
        System.out.println("get_dias_trabalhados");
        
        Salario instance = new Salario();
        double expResult = 30;
        instance.set_dias_trabalhados(expResult);
        double result = instance.get_dias_trabalhados();
        
        assertEquals(expResult, result, 0.0);
    }
    
}
