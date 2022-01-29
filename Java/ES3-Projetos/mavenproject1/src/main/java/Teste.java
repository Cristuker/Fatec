public class Teste {
         public static void main(String[] args){
            Boolean b = new Boolean(false); // Essa linha é desncessaria apenas a atribuição de um boolean é necessário pra criar um boolean. Seria interessa usar dessa forma se fosse para um valor como um número
            Object o = (Object) b; // O código quebra nesta pois o tipo booleano não suporta casting e também outros tipos não passam dessa pois nao conseguem ser convertidos para classe. O ideal é que seja apenas entre tipos primitivos
            String p = (String) o; // Essa linha nunca é executada
            System.out.println(p.length());  // Essa linha nunca é executada
     }
}
