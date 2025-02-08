Tarefa Comunicação Serial com RP2040:

Objetivo: 
Esse projeto tem como principal intenção a realização e compreensão dos conteúdos abordados sobre  Comunicação Serial com RP2040, aplicando assim os conhecimentos adquiridos sobre UART e I2C na prática, melhorando assim a fixação do estudo dos botões de acionamento com o uso de Interrupções e de Debounce.

Foi utilizado para realizar uma simulação:
•Matriz 5x5 de LEDs (endereçáveis) WS2812, conectada à GPIO 7.
• LED RGB, com os pinos conectados às GPIOs (11, 12 e 13).
• Botão A conectado à GPIO 5.
• Botão B conectado à GPIO 6.
• Display SSD1306 conectado via I2C (GPIO 14 e GPIO15).

EXEMPLO DE EXECUÇÃO:
Primeiramente foi adicionado a biblioteca fonte.h que possibilita a utilização de letras minúsculas. Diante disso utilizando o serial monitor do VS code cada caracteres digitado no serial monitor será exibido no display.
Quando um número entre 0 e 9 for digitado, um símbolo correspondente ao número deve ser exibido, também, na matriz 5x5 WS2812.
Pressionar o botão A deve alternar o estado do LED RGB Verde (ligado/desligado). Enquanto ao pressionar o botão  B deve alternar o estado do LED RGB Azul (ligado/desligado).

Explicação: 
Deste modo é constituído este programa realizando alguns processos como Interrupções, Debouncing e Controle de LEDs  que contribuem para o aprimoramento dos códigos incrementando com Comunicação Serial (UART, SPI e I2C). explorar  as funcionalidades da placa de desenvolvimento BitDogLab, consolidar os conhecimentos em programação de  microcontroladores.

LINK DO VÍDEO EXPLICATIVO:
Desta forma para simplificar a compreensão produzido um vídeo de  2 minutos, explicando  brevemente as funcionalidades implementadas. E mostrando o  projeto em execução na placa BitDogLab.
......
PROJETO DESENVOLVIDO POR:
Camile Vitória Lino dos Santos.
