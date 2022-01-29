<%@page contentType="text/html" pageEncoding="UTF-8"%>

<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>JSP Page</title>
    </head>
    <body>
        <h1>Calculo de Area/Perimetro</h1>
        <br/>
        <form action="ServletFiguras" method="post">
            <div>
                <label>Nome da figura: </label>
                <select name="figura" id="figura">
                    <option value="Quadrado">Quadrado</option>
                    <option value="Circulo">Circulo</option>
                </select>
            </div>
            <br>
            <div>
                <label>Raio ou lado: </label>
                <input type="number" name="valor" placeholder="Raio ou lado" />
            </div>
            <br />
            <input type="submit" name="btnCalcular" value="Calcular">
        </form>
    </body>
    
    ${error}
</html>
