# Arduino Projekty

## Schémata Zapojení

Schémata zapojení vytvářím pomocí online editoru [CircuitDiagram](https://www.circuit-diagram.org/editor/).

## Seznam Projektů

 1. _diode_blinking_: jednoduchá aplikace pro rozblikání jedné diody přes digitální output.
 1. _kitt_: Diody blikající postupně zleva doprava a zpátky, jako KITT v Knight Riderovi.
 1. _switch_: Stisknutí tlačítka přepíná, jestli svítí zelená nebo červená dioda.
 1. _joystick_: joystick ovládá intenzitu svitu diod ve směru os x/y a další diodu po stisknutí.
 1. _pwm\_test_: jednoduchá testovací aplikace pro zkoušení PWM na digitálním výstupu.
 2. **\[incomplete\]** _button\_debounce_: vylepšení responsivity tlačítka s nastavitelným chováním.
 3. _iic\_lcd\_display_: test ovládání dvouřádkového LCD displeje přes I2C.
 4. _gps\_neo\_6m_: zapojení GPS modulu a výpis souřadnic na LCD displej.
 5. _gsm_: připojení GSM modulu a posílání dat na webové rozhraní.

## Nápady ke zpracování

 1. _DogTracker_: modul pro sledování pohybu psa pomocí GPS, data odesílá pomocí GSM na webový server, kde jsou zaneseny do db a uživatel je může sledovat historicky i real-time pomocí mobilní/webové aplikace.
 2. _GameFeeder_: automatické krmné zařízení. V daných časových intervalech rozsýpá krmení pro zvěř v lese.
