#!/bin/bash

check_intall() {
    if ! command -v $1 &> /dev/null; then
        echo "$1 n'est pas installé. Installation..."
        sudo apt-get install -y $1
    else
        echo "$1 est déjà installé."
    fi
}

echo "Mise à jour de la liste des paquets..."
sudo apt-get update

check_intall python3
check_intall gcc
check_intall make

check_intall python3-pip

echo "Mise à jour de pip..."
python3 -m pip install --upgrade pip

echo "Installation des packages Python nécessaires..."
python3 -m pip install numpy requests

echo "Toutes les installations sont terminées. Vous pouvez maintenant exécuter des programmes Python, compiler des programmes en C avec GCC, et utiliser des Makefiles."
