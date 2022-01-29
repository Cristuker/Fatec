package Identificacao;

import org.junit.jupiter.api.AfterEach;
import org.junit.jupiter.api.AfterAll;
import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.BeforeAll;
import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.*;

public class FuncionarioTest {
    
    public FuncionarioTest() {
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
    public void testSet_nome_funcionario() {
        System.out.println("set_nome_funcionario");
        String nomeFuncionario = "Matheus";
        Funcionario instance = new Funcionario();
        
        instance.set_nome_funcionario(nomeFuncionario);
        
        assertEquals(nomeFuncionario, instance.get_nome_funcionario());
    }

    @Test
    public void testSetMatricula() {
        System.out.println("setMatricula");
        
        String matricula = "1234";
        
        Funcionario instance = new Funcionario();
        
        instance.setMatricula(matricula);
        assertEquals(matricula, instance.getMatricula());
    }

    @Test
    public void testGet_nome_funcionario() {
        System.out.println("get_nome_funcionario");
        
        Funcionario instance = new Funcionario();
        String expResult = "Matheus";
        instance.set_nome_funcionario(expResult);
        
        String result = instance.get_nome_funcionario();
        assertEquals(expResult, result);
    }

    @Test
    public void testGetMatricula() {
        System.out.println("getMatricula");
        
        Funcionario instance = new Funcionario();
        String expResult = "1234";
        instance.setMatricula(expResult);
        String result = instance.getMatricula();
        
        assertEquals(expResult, result);
    }
    
}
