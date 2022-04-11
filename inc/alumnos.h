/*=====[Module Name]===========================================================
 * Copyright 2019 Esteban Daniel VOLENTINI <evolentini@gmail.com>
 * All rights reserved.
 * License: BSD-3-Clause <https://opensource.org/licenses/BSD-3-Clause>)
 *
 * Version: 0.1.0
 * Creation Date: 2019/03/01
 */

/*=====[Avoid multiple inclusion - begin]====================================*/

#ifndef _ALUMNOS_H_
#define _ALUMNOS_H_

/*=====[Inclusions of public function dependencies]==========================*/

#include <stdbool.h>
#include <stddef.h>

/*=====[C++ - begin]=========================================================*/

#ifdef __cplusplus
extern "C" {
#endif

/*=====[Definition macros of public constants]===============================*/

/*=====[Public function-like macros]=========================================*/

/*=====[Definitions of public data types]====================================*/

//! Estructura para almacenar los datos de un alumno
/**
 * @brief Estructura para almacenar los datos de un alumno
 * 
 * Esta estructura se utiliza para almacenar los datos de un alumno. Se utiliza
 * en conjunto con la función de serializar @ref
 */
typedef struct alumno_s {
    char apellidos[30];     //!< Apellido del alumno
    char nombres[30];       //!< Nombres del alumno
    char documento[11];     //!< Numero de documento de identinidad del alumno
} const * alumno_t;

/*=====[Definitions of public global variables]==============================*/

/*=====[Prototypes (declarations) of public functions]=======================*/

/**
 * @brief Serializa los datos de un alumno en una cadena JSON
 *
 * Esta función se utiliza ara convertir una estructura de datos en memoria
 * del tipo C en una cadena de caracteres siguiendo el estándar JSON. Para ello 
 * recibe un puntero... Se necesita definir una estructura del tipo @ref
 *
 * @param [out] cadena  Puntero a a cadena de caracteres con el resultado
 * @param [in] espacio  Cantidad d ebytes disponibles en la cadena de resultado       
 * @param [in] alumno   Puntero a la estructura con los datos del alumno
 * @return true         Los datos del alumno se serializaron correctamente en la cadena 
 * @return false        No hay espacio suficiente en la cadena para serializar los datos del alumno
 */
bool SerializarAlumno(char * cadena, size_t espacio, const alumno_t alumno);

bool SerializarAlumnos(char * cadena, size_t espacio);

/*=====[Prototypes (declarations) of public interrupt functions]=============*/

/*=====[C++ - end]===========================================================*/

#ifdef __cplusplus
}
#endif

/*=====[Avoid multiple inclusion - end]======================================*/

#endif /* _ALUMNOS_H_ */
