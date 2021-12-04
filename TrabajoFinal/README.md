# Plantilla para un trabajo final

Esta plantilla sirve para elaborar un trabajo de fin de curso. Puedes ver el [pdf](TrabajoFinal.pdf) para ver un ejemplo del resultado.

* La portada es sencilla, con datos básicos y tiene el índice
* Usa el modo de página sencilla, porque probablemente le pongas un clip o una grapa en vez de engargolar o usar un folder de costilla
* En cada hoja hay solo el numero de la pagina y el título del capítulo
* Incluye el índice (o tabla de contenidos), y la bibliografía

Además, la plantilla incluye ejemplo de uso de todos los casos típicos que se me ocurrieron:

* Insertar ecuaciones de todo tipo.
* Poner links, hacer citas y referencias (a otros elementos del texto).
* Usar figuras y subfiguras
* Incluir pseudo código y código fuente (incluso para incluirlo desde un archivo externo)

La plantilla está primordialmente implementada en el archivo `Trabajo.sty`. El preámbulo está en `TrabajoFinal.tex` desde donde se incluyen los demas archivos `*.tex` que son los que contienen el contenido del trabajo.

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
1. Ver el pdf
