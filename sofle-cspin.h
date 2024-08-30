// Fix CS pin for zmk-defined solfe board
#if SHIELD_SOFLE_LEFT || SHIELD_SOFLE_RIGHT
&nice_view_spi { cs-gpios = <&pro_micro 0 GPIO_ACTIVE_HIGH>; };
#endif