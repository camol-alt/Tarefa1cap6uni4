#include "ws2812.pio.h"

void ws2812_program_init(PIO pio, uint sm, uint offset, uint pin, float freq, bool rgbw)
{
    pio_sm_config c = ws2812_program_get_default_config(offset);
    sm_config_set_sideset_pins(&c, pin);
    sm_config_set_out_shift(&c, false, true, 24);
    sm_config_set_fifo_join(&c, PIO_FIFO_JOIN_TX);
    pio_sm_init(pio, sm, offset, &c);
    pio_sm_set_clkdiv(pio, sm, (float)clock_get_hz(clk_sys) / freq);
    pio_sm_set_enabled(pio, sm, true);
}