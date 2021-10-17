# Plantilla para una tesis de la UNAM

Esta plantilla sirve esta planeada para hacer una tesis de la [UNAM](https://www.unam.mx/). Aunque en el ejemplo se muestra una tesis de licenciatura de [Matemáticas Aplicadas y Computación](https://mac.acatlan.unam.mx/) de la [FES Acatlán](https://www.acatlan.unam.mx/), todo esto puede ser editado por lo que en general es una plantilla para hacer una tesis en español. Puedes ver el [pdf](Tesis/Tesis.pdf) con con un ejemplo de su uso.

La plantilla está primordialmente implementada en el archivo `Thesis.sty`. El preámbulo está implementado en el archivo `Tesis.tex` y desde este se incluyen los demás archivos.

Luego hay un archivo `*.tex` para cada una de las secciones semánticas de una tesis.
En el directorio `img`, se incluyen la imágenes o figuras, en subdirectorios por capítulo. Esto es por supuesto una convención, pero recomiendo seguirla.

También hay un directorio `src` que incluye código fuente en lenguaje C++. Este sirve como ejemplo de uso del paquete [minted](https://ctan.org/pkg/minted), para incluir código directamente de un archivo fuente y es solo un ejemplo.

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


José Doroteo Arango Arámbula
Enrique Graue Wiechers
