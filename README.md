# Sinfonía de Colores 🎵 - Controlador Físico interactivo

Repositorio correspondiente a la **Entrega 1: Diseño de Controlador Físico**.


---

## 1. Descripción del Proyecto
**Sinfonía de Colores** es una interfaz física interactiva integrada en tiempo real con una interfaz gráfica web (Dashboard GUI) a través de la API Web Serial. El controlador permite al usuario manipular una **corchea musical** mediante un fader (slider deslizante) para cambiar dinámicamente el tono de color (Azul, Verde, Rojo) y liberar ondas de energía mediante un pulsador digital para eliminar los círculos enemigos del color correspondiente.

---

## 2. Componentes de Hardware
* **Microcontrolador:** Arduino Uno.
* **Entradas analógicas:** 1x Fader / Potenciómetro deslizante (conectado a `A0`).
* **Entradas digitales:** 1x Botón / Pulsador (conectado al pin `D2` con resistencia `INPUT_PULLUP`).
* **Estructura y Enclosure:** Caja de madera fabricada con diseño formal, calce preciso y acabados de nivel industrial.

---

## 3. Diagrama Esquemático y Conexiones

| Componente Físico | Pin Arduino | Configuración / Notas |
| :--- | :--- | :--- |
| **Fader (Slider)** | Pin `A0` | Extremos a 5V y GND, pin central a `A0`. |
| **Botón (Pulsador)** | Pin `D2` | Conectado entre D2 y GND (Usa resistencia interna Pull-Up). |

---

## 4. Electrónica Modular (Shield PCB)
> *Nota: Cumpliendo estrictamente con los requerimientos del encargo, el circuito no utiliza protoboard en su versión final.*

* Toda la electrónica (conexiones y cableado) está **soldada sobre una placa PCB preperforada**.
* Se implementaron **pines headers** para montar y desmontar la placa Arduino de forma modular y fluida sin necesidad de desoldar componentes.
* El cableado interno se encuentra firmemente contenido y sujeto, garantizando robustez mecánica al manipular o dar vuelta el dispositivo.

---

## 5. Instrucciones de Uso y Software

### Requisitos previos:
1. Navegador web compatible con Web Serial API (se recomienda **Microsoft Edge** o Google Chrome).
2. Arduino IDE instalado para cargar el código en la placa.

### Paso a paso:
1. Conecta tu placa Arduino Uno al computador mediante USB.
2. Abre el archivo `codigo_arduino.ino` en el Arduino IDE y súbelo a la placa.
3. Abre el archivo `index.html` en tu navegador web.
4. Haz clic en el botón **"🔌 ENLAZAR CONTROLADOR UAI"**, selecciona el puerto serie correspondiente a tu Arduino y presiona **"¡COMENZAR PARTIDA!"**.

---

## 6. Registro Fotográfico y Proceso de Manufactura

### Proceso de Soldadura y Shield PCB
### Ensamble Interno y Carcasa Final

---

## 7. Video de Demostración
