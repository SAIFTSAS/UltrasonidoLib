¡Por supuesto! Aquí tienes una pequeña documentación para la librería de ultrasonido que creamos anteriormente:

---

# UltrasonidoLib - Documentación

La librería **UltrasonidoLib** permite medir la distancia utilizando un sensor de ultrasonido HC-SR04 en plataformas Arduino. Proporciona una interfaz sencilla para configurar y medir distancias utilizando el sensor de ultrasonido.

## Instalación

1. Descarga la carpeta "UltrasonidoLib" desde el repositorio [GitHub](https://github.com/tuusuario/UltrasonidoLib) o crea la estructura de archivos manualmente en la carpeta "libraries" de tu entorno de desarrollo Arduino.

2. Reinicia el entorno de desarrollo Arduino para que reconozca la nueva librería.

## Uso

### Incluir la librería

```cpp
#include <UltrasonidoLib.h>
```

### Crear una instancia

```cpp
UltrasonidoLib ultrasonido(pinTrig, pinEcho);
```

- `pinTrig`: El pin conectado al pin Trig del sensor de ultrasonido.
- `pinEcho`: El pin conectado al pin Echo del sensor de ultrasonido.

### Inicializar

Antes de comenzar a medir distancias, debes inicializar la librería.

```cpp
ultrasonido.begin();
```

### Medir la distancia

Para medir la distancia utilizando el sensor de ultrasonido, utiliza la función `measure()`.

```cpp
float distance = ultrasonido.measure();
```

La función `measure()` devuelve la distancia medida en centímetros.

## Ejemplo Completo

```cpp
#include <UltrasonidoLib.h>

UltrasonidoLib ultrasonido(2, 3);  // Pines de Trig y Echo

void setup() {
  Serial.begin(9600);
  ultrasonido.begin();
}

void loop() {
  float distance = ultrasonido.measure();
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
  delay(1000);
}
```

## Notas

- Asegúrate de conectar los pines Trig y Echo del sensor de ultrasonido a los pines especificados al crear la instancia de la librería.
- El cálculo de la distancia se basa en la velocidad del sonido en el aire, que es aproximadamente 343 metros por segundo (a 20°C). La fórmula utilizada es: `distancia = duración del pulso * 0.034 / 2`.

---

¡Eso es todo! Ahora tienes una documentación básica para tu librería de ultrasonido. Puedes personalizarla y agregar más detalles según tus necesidades y los requisitos de tu proyecto.
