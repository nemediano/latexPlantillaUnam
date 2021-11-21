# Plantilla para notas de clase

Esta plantilla sirve para un documento con notas de clase. Puedes ver el [pdf](notas.pdf) para ver un ejemplo del resultado.

Ya seas un alumno pasando en limpio tu apuntes para estudiar, o el profesor preparando tu clase; la idea es que uses esta plantilla para tomar tus notas.

* La portada es sencilla y tiene el indice
* Usa el modo de página sencilla,  por que probablemente le pongas un clip o una grapa en vez de engargolar, o quizas nunca la imprimas en papel
* Maximiza el espacio usando márgenes muy pequeños
* En los márgenes hay datos básicos (Nombre, titulo, email, número de página). Quizas un dia te pidan una página de tus notas y quieres que al menos sepan que tu eres el autor
* La bibliografía se imprime en la última página

Además, la plantilla incluye ejemplo de uso de todos los casos típicos que se me ocurrieron:

* Insertar ecuaciones de todo tipo.
* Poner links, hacer citas y referencias (a otros elementos del texto).
* Usar figuras y subfiguras
* Incluir pseudo código y código fuente (incluso para incluirlo desde un archivo externo)

La plantilla está primordialmente implementada en el archivo `notas.tex`, que también contiene el preámbulo. Desde `notas.tex` se incluyen los archivos `seccion*.tex` que son los que propiamente contiene el contenido de las notas.

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

