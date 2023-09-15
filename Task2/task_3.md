BufferOverflow:
Inputteksten kan være større en 4 tegn, og da overskriver den arrayet,
noe som fører til uforutsigbarehet og potensiell sikkerhetsrisiko

Uendelig løkke:
Hvis "e" tegnet ikke kommer i input, kjører koden i en uendelig løkke, og
kan prøve å få lese av minnet den ikke har tilgang til, som kan føre til
segmentation fault, og generelt uforutsigbarehet.
