Create database Biblioteca;
use Biblioteca;
-- Tabelas
Create Table Assunto(
	sg_Assunto char(01) not null,
	ds_Assunto varchar(40));

Create Table Editora(
	cd_Editora int not null,
	nm_Editora varchar(40));

Create Table Autor(
	cd_Autor int not null,
	nm_Autor varchar(40),
	ds_EnderecoAutor varchar(50));

Create Table Livro(
	cd_Livro int not null,
	nm_Titulo varchar(30),
	vl_Livro money,
	dt_Lancamento datetime,
	sg_Assunto char(01),
	cd_Editora int);

-- Chaves Primarias
Alter Table Assunto
	Add Primary Key (sg_Assunto);

Alter Table Editora
	Add Primary Key (cd_Editora);

Alter Table Autor
	Add Primary Key (cd_Autor);

Alter Table Livro
	Add Primary Key (cd_Livro);
    
-- Chaves Estrangeiras
Alter Table Livro
	Add Foreign Key (sg_Assunto)
	References Assunto;

Alter Table Livro
	Add Foreign Key (cd_Editora)
	References Editora;

-- Registros
Insert Into Assunto
	Values 	('D','Drama'),
		('A','Aventura'),
		('C','Comédia');

Insert Into Editora
	Values 	(1,'Erica'),
		(2,'Campus');

Insert Into Autor
	Values 	(1,'MARIA DA SILVA','RUA DO GRITO, 45'),
		(2,'ANDRÉ CARDOSO','AV. DA SAUDADE,325'),
		(3,'TATIANA SOUZA','AV. BRASIL, 4011'),		
		(4,'MARCO ANDRADE','RUA DO IMPERADOR, 778');

Insert Into Livro
	(cd_Livro, nm_Titulo, cd_Editora, sg_Assunto, vl_Livro)
	Values 	(1,'Mar em F�ria',1,'D',65.00),
		(2,'O Aeroporto',2,'A',30.00),
		(3,'Einstein',2,'D',4.50),
		(4,'Mar sem fim',1,'A',58.00);
	



