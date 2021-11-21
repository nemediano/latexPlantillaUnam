# Plantilla para una tarea

Esta plantilla sirve para hacer una tarea. Aunque en el ejemplo se muestra una tarea tipo para la licenciatura en [Matemáticas Aplicadas y Computación](https://mac.acatlan.unam.mx/) de la [FES Acatlán](https://www.acatlan.unam.mx/), todo esto puede ser editado por lo que en general es una plantilla para hacer una tarea en español. Puedes ver el [pdf](tarea.pdf) para ver un ejemplo del resultado.

La idea es que uses esta plantilla para hacer las típicas tareas que contienen ejercicios de matemáticas y computación. De aquellas que se suelen entregar cada semana. Con eso en mente la plantilla es muy simple:

* No hay página de portada
* Usa el modo de página sencilla (probablemente le pongas un clip o una grapa en vez de engargolar)
* Maximiza el espacio usando márgenes muy pequeños
* En los márgenes hay datos básicos (Nombre, email, profesor, grupo, número de página)
* La bibliografía se imprime al final del último ejercicio ocupando el mínimo espacio posible

Además, la plantilla incluye ejemplo de uso de todos los casos típicos que se me ocurrieron:

* Insertar ecuaciones de todo tipo.
* Poner links, hacer citas y referencias (a otros elementos del texto).
* Usar figuras y subfiguras
* Incluir pseudo código y código fuente (incluso para incluirlo desde un archivo externo)

La plantilla está primordialmente implementada en el archivo `tarea.tex`, que también contiene el preámbulo. Desde `tarea.tex` se incluye el archivo `cuerpo.tex` que es el que propiamente contiene el contenido de la tarea.

En el directorio `img`, se incluyen las imágenes o figuras. También hay un directorio `src` que incluye código fuente en lenguaje C++. Este sirve como ejemplo de uso del paquete [minted](https://ctan.org/pkg/minted), para incluir código directamente de un archivo fuente y es solo un ejemplo.

Para compilar se requiere el engine [XeLaTeX](https://tug.org/xetex/), de [Biber](http://biblatex-biber.sourceforge.net/) y el paquete [pygment](https://pygments.org/) de python dado que el antes mencionado paquete minted tiene esa dependencia. Por lo mismo para compilar se requiere que se pase una opción extra a `xelatex`:

```bash
$xelatex -shell-escape ...
```

En [Ubuntu](https://ubuntu.com/), se pueden instalar todas estas dependencias por medio del gestor de paquetes y se puede usar [Kile](https://kile.sourceforge.io/) como IDE haciendo mínimos cambios en la configuración.

La primera vez, para compilar desde cero, se puede hacer:

1. Ejecutar XeLaTeX
1. Ejecutar Biber
1. Ejecutar XeLaTeX
1. Ejecutar XeLaTeX
1. Ver el pdf\usepackage{minted} %Para insertar código fuente en algún lenguaje de programación

