# Plantillas en LaTeX para la UNAM

Este repositorio contiene diversas plantillas en LaTeX que he creado durante mi vida de estudiante y académico de la [UNAM](https://www.unam.mx/).

Cada plantilla está pensada para una situación diferente, pero todas ellas contienen ejemplos para hacer todo lo pertinente en cada caso.

## Documentos Academicos
* [Tesis](Tesis/): Para poder hacer una tesis de grado.
* [TrabajoFinal](TrabajoFinal/): Para hacer un trabajo importante en alguna materia.
* [Tarea](Tarea/): Plantilla simple, que maximiza el espacio. Ideal para una tarea de esas que se entregan cada clase.
* [Notas](Notas/): Para las notas personales de estudio o notas de un profesor que prepara su clase.
* [Examen](Examen/): Para que un profesor elabore los enunciados de una tarea o un examen.

## Presentaciones
* [Conferencia](Conferencia/): Presentación de beamer para presentar en un evento o exposición de un alumno en clase.
* [Clase](Clase/) Presentación de beamer para apoyarte al dar clase.

## Documentos
* [CartaRecomendacion](CartaRecomendacion/): Un carta de tipo formal y oficial.
* [Curriculum](Curriculum/): Un curriculum en una sola hoja para alguien con poca experiencia.
* [CurriculumPosgrado](CurriculumPosgrado/): Un curriculum en dos hojas para un profesor o alguien con mucha experiencia.

Dado mi formación particular, he puesto especial énfasis en Matemáticas, y Ciencias de la Computación. Sin embargo, trate de ser lo más general para abarcar todos los usos posibles que se me puedan ocurrir. Por esto último, en realidad es un repositorio que contiene plantillas en LaTeX para uso académico, se puede adaptar para cualquier universidad con cambios mínimos.

Todos las plantillas usan **LaTeX moderno** con esto quiero decir que se prefiere `xelatex` cómo engine sobre `pdflatex`, se usa `biber` en vez de `bibtex` y esta combinación hace que el uso de [utf8](https://en.wikipedia.org/wiki/UTF-8) sea nativo en vez de requerir un paquete. Es decir, no se necesita el paquete `inputec` (de hecho resulta contraproducente tratar de usarlo).

También se usa el nuevo paquete `polyglossia` en vez de `babel`, pues es más moderno y en activo desarrollo.
