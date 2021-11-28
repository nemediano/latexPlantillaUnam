# Plantilla de Beamer para una conferencia
Esta plantilla sirve para hacer un presentacion en algun evento. Puedes ver el [pdf](presentacion.pdf) para ver un ejemplo del resultado.

La idea de la presentacion es que se de un evento especial que probablemente no se repita.

* La portada incluye la fecha, el titulo, nombre del autor y la institucion que representa.
* En cada diapositiva, hay datos del autor, el titulo corto de la presentacion, la fecha, el evento y el número de slide.
* Incluye una diapositiva con la agenda.

Además, la plantilla incluye ejemplo de uso de todos los casos típicos que se me ocurrieron:

* Insertar ecuaciones de todo tipo.
* Poner links, hacer citas y referencias (a otros elementos del texto).
* Usar figuras y subfiguras
* Incluir pseudo código y código fuente (incluso para incluirlo desde un archivo externo)

La plantilla está primordialmente implementada en el archivo `presentacion.tex`, que también contiene el preámbulo. Desde `presentacion.tex` se incluye el archivo `contenido.tex` que es el que propiamente contiene el contenido de la presentación.

En el directorio `img`, se incluyen las imágenes o figuras. También hay un directorio `src` que incluye código fuente en lenguaje C++. Este sirve como ejemplo de uso del paquete [minted](https://ctan.org/pkg/minted), para incluir código directamente de un archivo fuente y es solo un ejemplo.

Para compilar se requiere el engine [XeLaTeX](https://tug.org/xetex/), y el paquete [pygment](https://pygments.org/) de python dado que el antes mencionado paquete minted tiene esa dependencia. Por lo mismo para compilar se requiere que se pase una opción extra a `xelatex`:

```bash
$xelatex -shell-escape ...
```

En [Ubuntu](https://ubuntu.com/), se pueden instalar todas estas dependencias por medio del gestor de paquetes y se puede usar [Kile](https://kile.sourceforge.io/) como IDE haciendo mínimos cambios en la configuración.

La primera vez, para compilar desde cero, se puede hacer:

1. Ejecutar XeLaTeX
1. Ejecutar XeLaTeX
1. Ver el pdf


