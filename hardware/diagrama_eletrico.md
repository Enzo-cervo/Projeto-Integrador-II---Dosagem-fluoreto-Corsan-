# Diagrama elétrico

Esta pasta reúne informações relacionadas à estrutura elétrica do sistema de automação da bomba dosadora de fluoreto.

O sistema considera o uso de um ESP32 como unidade de controle, com entrada para leitura de sinal associado à vazão e saída de controle para acionamento ou ajuste da bomba dosadora por meio de interface eletrônica adequada.

A arquitetura elétrica prevista inclui:

- ESP32;
- Sensor de vazão;
- Conversor de sinal PWM para saída analógica;
- Fonte 5 Vcc para alimentação do ESP32;
- Fonte 24 Vcc para dispositivos de interface e controle;
- Conexões elétricas entre sensores, controlador e bomba dosadora.
