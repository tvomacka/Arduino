# I2C LCD Display

## Schéma

...

## Popis

Test zapojení a jednoduchý "Hello World" příklad s využitím I2C komunikace s dvouřádkovým LCD displejem.

IIC komunikuje na straně Arduina přes porty A4/A5.

Adresa displeje pro IIC se nastavuje pomocí zkratování kontaktů na IIC desce, pokud nejsou adresní kontakty zkratovány, mají hodnotu logická 1 a defaultní adresa je 0x20 (kontakty jsou 3, maximální adresa je 0x27).
