#pragma once
#include <mysql.h>
#include <iostream>
using namespace std;

class ConexionBD {
private: MYSQL* conectar;
public:
	void abrir_conexion() {
		conectar = mysql_init(0);
		conectar = mysql_real_connect(conectar, "localhost", "usr_compa�ia", "compa�ia123.", "db_compa�ia", 3306, NULL, 0);
	}
	void cerrar_conexion() {
		mysql_close(conectar);
	}
	MYSQL* getConectar() {
		return conectar;
	}
};