<?xml version="1.0" encoding="ISO-8859-1"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
  <xsl:template match="/">
     <html>
       <head><title>Lista de usuários</title>
       </head>
       <body>
        <h3>Listagem de Usuários</h3>
        <table border="1">
           <tr bgcolor="#c0c0c0">
              <td><b>Nome</b></td>
		      <td><b>Sexo</b></td>
              <td><b>E-Mail</b></td>
              <td><b>Idade</b></td>
           </tr>
		  <xsl:for-each select="/pessoas/pessoa">
          <xsl:sort select="nome" order="ascending"/>		  
             <tr>
				<xsl:if test="idade &lt; 50">
						<td bgcolor="#ADFF2F"><xsl:value-of select="nome"/></td>
						<td bgcolor="#ADFF2F"><xsl:value-of select="nome/@sexo"/></td>
						<td bgcolor="#ADFF2F"><xsl:value-of select="email"/></td>
						<td bgcolor="#ADFF2F"><xsl:value-of select="idade"/></td>
                </xsl:if>
             </tr>
        </xsl:for-each>
         </table>
       </body>
     </html>
   </xsl:template>
</xsl:stylesheet>
