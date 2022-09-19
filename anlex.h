/*********** Librerias utilizadas **************/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

/************* Definiciones ********************/

//Codigos
/*
#define PROGRAM		256
#define TYPE		257
#define VAR			258
#define ARRAY		259
#define BEGIN		260
#define END			261
#define PR_DO		262
#define TO			263
#define DOWNTO		264
#define THEN		265
#define OF			266
#define FUNCTION	267
#define PROCEDURE	268
#define PR_INTEGER	269
#define PR_REAL		270
#define PR_BOOLEAN	271
#define PR_CHAR		272
#define PR_FOR		273
#define PR_IF		274
#define PR_ELSE		275
#define PR_WHILE	276
#define REPEAT		277
#define UNTIL		278
#define PR_CASE		279
#define RECORD		280
#define WRITELN		281
#define WRITE		282
#define CONST		283
#define NUMBER		284
#define ID			285
#define TRUE		286
#define FALSE		287
#define STRING		288
#define NOT			289
#define OPREL		290
#define OPSUMA		291
#define OPMULT		292
#define DOS_PUNTOS	293
#define USER_TYPE	294
#define L_CORCHETE	295
#define R_CORCHETE	296
#define COMA		297
#define L_LLAVE		298
#define R_LLAVE		299
#define L_PARENTESIS	300
#define R_PARENTESIS	301
#define CAR 302*/
#define DOS_PUNTOS	"DOS_PUNTOS"
#define L_CORCHETE	"L_CORCHETE"
#define R_CORCHETE	"R_CORCHETE"
#define COMA		"COMA"
#define L_LLAVE		"L_LLAVE"
#define R_LLAVE		"R_LLAVE"
#define L_PARENTESIS	"L_PARENTESIS"
#define R_PARENTESIS	"R_PARENTESIS"
#define NUMBER "NUMBER"
#define TRUE		"PR_TRUE"
#define FALSE		"PR_FALSE"
#define STRING		"STRING"
#define CHAR	"CHAR"
#define PR_NULL	"NULL"

// Fin Codigos
#define TAMBUFF 	5
#define TAMLEX 		50
#define TAMHASH 	101

/************* Estructuras ********************/

typedef struct entrada{
	//definir los campos de 1 entrada de la tabla de simbolos
	char *compLex;
	
	char lexema[TAMLEX];	
	struct entrada *tipoDato; // null puede representar variable no declarada	
	// aqui irian mas atributos para funciones y procedimientos...
	
} entrada;

typedef struct {
	char *compLex;
	entrada *pe;
} token;

/************* Prototipos ********************/
void insertar(entrada e);
entrada* buscar(const char *clave);
void initTabla();
void initTablaSimbolos();
void getToken();
