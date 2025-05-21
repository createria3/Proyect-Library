#include <iostream>
#include "sqlite.h"

// Función de callback para ejecutar consultas SQL
static int callback(void* data, int argc, char** argv, char** azColName) {
    for (int i = 0; i < argc; i++) {
        std::cout << azColName[i] << ": " << argv[i] << std::endl;
    }
    std::cout << std::endl;
    return 0;
}

int main() {
    sqlite3* db;
    char* errMsg = nullptr;
    int rc = sqlite3_open("linkedin.db", &db);

    if (rc != SQLITE_OK) {
        std::cout << "Error al abrir la base de datos: " << sqlite3_errmsg(db) << std::endl;
        return rc;
    }

    // Crear tabla para almacenar los datos de usuario
    std::string createTableSQL = "CREATE TABLE IF NOT EXISTS usuarios("
                                 "id INTEGER PRIMARY KEY AUTOINCREMENT,"
                                 "nombres TEXT NOT NULL,"
                                 "apellido TEXT NOT NULL,"
                                 "empresa TEXT NOT NULL,"
                                 "carrera TEXT NOT NULL,"
                                 "twitter TEXT NOT NULL,"
                                 "facebook TEXT NOT NULL);";

    rc = sqlite3_exec(db, createTableSQL.c_str(), nullptr, nullptr, &errMsg);

    if (rc != SQLITE_OK) {
        std::cout << "Error al crear la tabla: " << errMsg << std::endl;
        sqlite3_free(errMsg);
        return rc;
    }

    // Insertar datos de ejemplo
    std::string insertSQL = "INSERT INTO usuarios (nombres, apellido, empresa, carrera, twitter, facebook) "
                            "VALUES ('John', 'Doe', 'ABC Company', 'Ingeniería de Software', '@johndoe', 'JohnDoe');";

    rc = sqlite3_exec(db, insertSQL.c_str(), nullptr, nullptr, &errMsg);

    if (rc != SQLITE_OK) {
        std::cout << "Error al insertar datos: " << errMsg << std::endl;
        sqlite3_free(errMsg);
        return rc;
    }

    // Realizar consulta para recuperar los datos
    std::string selectSQL = "SELECT * FROM usuarios;";

    rc = sqlite3_exec(db, selectSQL.c_str(), callback, nullptr, &errMsg);

    if (rc != SQLITE_OK) {
        std::cout << "Error al realizar la consulta: " << errMsg << std::endl;
        sqlite3_free(errMsg);
        return rc;
    }

    sqlite3_close(db);
    return 0;
}

