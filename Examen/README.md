# Plantilla para un Examen
Esta plantilla sirve para elaborar los enunciados de un examen o de una tarea. Aunque en el ejemplo se muestra un examen tipo para la licenciatura en [Matemáticas Aplicadas y Computación](https://mac.acatlan.unam.mx/) de la [FES Acatlán](https://www.acatlan.unam.mx/), todo esto puede ser editado por lo que en general es una plantilla para hacer un examen en español. Puedes ver el [pdf](examen.pdf) para ver un ejemplo del resultado.

La idea es que un profesor use esta plantilla para hacer sus exámenes típicos que contienen ejercicios de matemáticas y computación. Con eso en mente la plantilla es muy simple:

* Tiene espacio para el nombre del alumno.
* Tiene espacio para las instrucciones antes de la serie de preguntas de cada sección.
* Maximiza el espacio usando márgenes muy pequeños.
* Da ejemplo de usar una segunda sección (Por si el examen está partido en secciones por temas).

Además, la plantilla incluye ejemplo de uso de todos los casos típicos que se me ocurrieron:

* Insertar ecuaciones de todo tipo.
* Poner links, hacer citas y referencias (a otros elementos del texto).
* Usar figuras y subfiguras.
* Incluir pseudo código y código fuente (incluso para incluirlo desde un archivo externo)

La plantilla está primordialmente implementada en el archivo `examen.tex`, que también contiene el preámbulo. Desde `examen.tex` se incluye el archivo `cuestionario.tex` que es el que propiamente contiene el contenido de la tarea.

En el directorio `img`, se incluyen las imágenes o figuras. También hay un directorio `src` que incluye código fuente en lenguaje C++. Este sirve como ejemplo de uso del paquete [minted](https://ctan.org/pkg/minted), para incluir código directamente de un archivo fuente y es solo un ejemplo.

Para compilar se requiere el engine [XeLaTeX](https://tug.org/xetex/) y el paquete [pygment](https://pygments.org/) de python dado que el antes mencionado paquete minted tiene esa dependencia. Por lo mismo para compilar se requiere que se pase una opción extra a `xelatex`:

```bash
$xelatex -shell-escape ...
```

En [Ubuntu](https://ubuntu.com/), se pueden instalar todas estas dependencias por medio del gestor de paquetes y se puede usar [Kile](https://kile.sourceforge.io/) como IDE haciendo mínimos cambios en la configuración.

La primera vez, para compilar desde cero, se puede hacer:

1. Ejecutar XeLaTeX
1. Ejecutar XeLaTeX
1. Ver el pdf

