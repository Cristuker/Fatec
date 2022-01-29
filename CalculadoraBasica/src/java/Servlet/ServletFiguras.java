/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Servlet;

import RegraNegocio.Circulo;
import RegraNegocio.Quadrado;
import java.io.IOException;
import java.io.PrintWriter;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 *
 * @author Usuário
 */
@WebServlet(name = "ServletFiguras", urlPatterns = {"/ServletFiguras"})
public class ServletFiguras extends HttpServlet {

    /**
     * Processes requests for both HTTP <code>GET</code> and <code>POST</code>
     * methods.
     *
     * @param request servlet request
     * @param response servlet response
     * @throws ServletException if a servlet-specific error occurs
     * @throws IOException if an I/O error occurs
     */
    protected void processRequest(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        response.setContentType("text/html;charset=UTF-8");
        try (PrintWriter out = response.getWriter()) {
            
            out.println("<!DOCTYPE html>");
            out.println("<html>");
            out.println("<head>");
            out.println("<title>RESULTADO</title>");            
            out.println("</head>");
            out.println("<body>");
            out.println("<h1>RESULTADO:</h1>");
            
            String figura = request.getParameter("figura");
            Float parametro = Float.parseFloat(request.getParameter("valor"));

            if(parametro == 0) {
                request.setAttribute("error", "<h1>ERRO: Por favor adicionar um valor válido</h1>");
                request.getRequestDispatcher("index.jsp").forward(request, response);
            }
            if(figura.equalsIgnoreCase("Circulo")) {
                Circulo circulo = new Circulo(parametro);
                circulo.calcularArea();
                circulo.calcularPerimetro();
                out.println(String.format("<h3>Area: %s</h3>", circulo.getArea()));
                out.println(String.format("<h3>Perimetro: %s</h3>", circulo.getPerimetro()));
            }
            
            if(figura.equalsIgnoreCase("Quadrado")) {
                Quadrado quadrado = new Quadrado(parametro);
                quadrado.calcularArea();
                quadrado.calcularPerimetro();
                out.println(String.format("<h3>Area: %s</h3>", quadrado.getArea()));
                out.println(String.format("<h3>Perimetro: %s</h3>", quadrado.getPerimetro()));
            }
            
            out.println("</body>");
            out.println("</html>");
        }
    }

    // <editor-fold defaultstate="collapsed" desc="HttpServlet methods. Click on the + sign on the left to edit the code.">
    /**
     * Handles the HTTP <code>GET</code> method.
     *
     * @param request servlet request
     * @param response servlet response
     * @throws ServletException if a servlet-specific error occurs
     * @throws IOException if an I/O error occurs
     */
    @Override
    protected void doGet(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        processRequest(request, response);
    }

    /**
     * Handles the HTTP <code>POST</code> method.
     *
     * @param request servlet request
     * @param response servlet response
     * @throws ServletException if a servlet-specific error occurs
     * @throws IOException if an I/O error occurs
     */
    @Override
    protected void doPost(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        processRequest(request, response);
    }

    /**
     * Returns a short description of the servlet.
     *
     * @return a String containing servlet description
     */
    @Override
    public String getServletInfo() {
        return "Short description";
    }// </editor-fold>

}
