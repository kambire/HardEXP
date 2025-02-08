hardEXP - Módulo de Tasa de Experiencia Personalizada para AzerothCore

AzerothCore License

hardEXP es un módulo para AzerothCore que permite ajustar la tasa de experiencia global en tu servidor de World of Warcraft. Con este módulo, puedes reducir la experiencia ganada por los jugadores a un valor personalizado, como 0.10x, para crear un entorno de juego más desafiante.
Características

    Tasa de Experiencia Personalizable: Ajusta la experiencia global a un valor específico (por ejemplo, 0.10x).

    Configuración Fácil: Modifica la tasa de experiencia desde el archivo de configuración.

    Compatibilidad: Funciona con AzerothCore 3.3.5.

Instalación

Sigue estos pasos para instalar el módulo hardEXP en tu servidor de AzerothCore.
1. Clonar el Repositorio

Clona este repositorio en la carpeta modules de tu instalación de AzerothCore:

cd path/to/azerothcore/modules
git clone https://github.com/tuusuario/hardEXP.git

2. Compilar el Módulo

Recompila el servidor para incluir el módulo:

mkdir -p build
cd build
cmake ..
make -j$(nproc)

3. Configurar el Módulo

Copia el archivo de configuración de ejemplo y personalízalo:

cp modules/hardEXP/hardEXP.conf.dist etc/worldserver.conf.d/hardEXP.conf

Edita el archivo hardEXP.conf para ajustar la tasa de experiencia:

[hardEXP]
XpRate = 0.1

4. Reiniciar el Servidor

Reinicia tu servidor de AzerothCore para aplicar los cambios.
Configuración

El módulo hardEXP se configura mediante el archivo hardEXP.conf. Aquí están las opciones disponibles:
Opción	Descripción	Valor por Defecto
XpRate	Tasa de experiencia global. Por ejemplo, 0.1 para 10% de experiencia.	0.1
Ejemplo de Uso

Si deseas que los jugadores ganen solo el 10% de la experiencia normal, configura el archivo hardEXP.conf de la siguiente manera:

[hardEXP]
XpRate = 0.1

Contribuciones

¡Las contribuciones son bienvenidas! Si tienes ideas para mejorar este módulo, sigue estos pasos:

    Haz un fork del repositorio.

    Crea una rama con tu nueva funcionalidad: git checkout -b nueva-funcionalidad.

    Envía un pull request con tus cambios.

Licencia

Este proyecto está bajo la licencia MIT. Consulta el archivo LICENSE para más detalles.
Créditos

    Autor: [Tu Nombre o Equipo]

    Repositorio: https://github.com/tuusuario/hardEXP

    AzerothCore: https://www.azerothcore.org/

Contacto

Si tienes preguntas o sugerencias, no dudes en contactarme:

    Email: tuemail@example.com

    Discord: [TuNombre#1234]

¡Gracias por usar hardEXP! Esperamos que este módulo haga que tu servidor de AzerothCore sea más desafiante y divertido. 😊
Nota Final

Si te gusta este proyecto, ¡no olvides darle una ⭐ en GitHub! Tu apoyo es muy apreciado. 🚀
