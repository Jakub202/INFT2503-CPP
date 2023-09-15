Programmet kommer til å kræsje, fordi det prøver å kopiere data inn i en nullpeker.
Det fører til en "segmentation fault", da "strcpy" forventer en gyldig adresse, og line er en nullpeker.
