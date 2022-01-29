package com.mycompany.teste.poo;

abstract public class teste {
    abstract public void doSomething(int x);
}

class Bar extends teste {

    @Override
    public void doSomething(int x) {
        System.out.println("Suave");
    }
    
}

class Baz extends teste {

    @Override
    public void doSomething(int x) {
        System.out.println("baz");
    }
    
}


