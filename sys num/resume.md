[[TOC]]

# Bascules

***bascule synchrone*** sorties évoluent dès que entrées évoluent

***bascule synchrone*** sorties synchronisées avec une horloge clk/h
- Horloge active sur niveaux (1: ▷ ou 0: o▷): verrou, « latch »,
- Horloge active sur fronts (↑: ▷ ou ↓: o▷): « flip flop » ou « edge triggered »,
- Horloge active sur impulsions:
    - Le 1er front synchronise les entrées,
    - Le 2me front synchronise les sorties,
    - Exemple: bascules Maître Esclave, JK pulse triggered

# Bascule RS
R | S | Q
--|---|---
0 | 0 | MEMOIRE
1 | 0 | Reset à 0
0 | 1 | Set à 1
1 | 1 | Ambiguïté

# Bascule D
Copie D dans Q

CLK | D | Q
----|---|---
↓   | X | MEMOIRE
↑   | 1 | 1
↑   | 0 | 0

# Bascule JK

CLK | J | K | Q
----|---|---|---
↓   | X | X | MEMOIRE
↑   | 0 | 0 | MEMOIRE
↑   | 0 | 1 | RESET 1
↑   | 1 | 0 | SET 0
↑   | 1 | 1 | TOGGLE 0->1 & 1->0

# Entrées prioritaires de forcage asynchrone
- actions sont **indépendantes** et **prioritaires** sur clk et entrées
- actives sur niveau BAS (0)
- Mise a 1 : MAU, SET, PRESET
- Remise à 0 : La remise à 0, RAZ, RESET, CLEAR
