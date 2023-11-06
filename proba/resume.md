***EXPACE PROBABILISE***

[[TOC]]

# Intro

***Expérience aléatoire*** expérience dont on ne peut prévoir le résultat de facon certaine. Son étude commence par la description de tous ses résultats possibles, cet ensemble de résultats est appelé univers Ω.

***Evènement*** est un sous ensemble d'une expérience aléatoire 
- certain = Ω
- impossible = ∅
- incompatibles : E ∩ E = ∅

# Structure algébrique des opérations ensemblistes

Les opérations élémentaires sur les ensembles vérifient les propriétés suivantes :
1. Commutativité de ∪ et ∩ :
∀(E, F) ⊂ Ω2, E ∪ F = F ∪ E et E ∩ F = F ∩ E.
2. Associativité de ∪ et ∩ :
∀(E, F, G) ⊂ Ω3, (E ∪ F) ∪ G = E ∪ (F ∪ G) et (E ∩ F) ∩ G = E ∩ (F ∩ G).
3. Idempotence de ∪ et ∩ :
∀E ⊂ Ω, E ∪ E = E = E ∩ E.
4. ∅ est l’élément neutre de ∪ et Ω est l’élément neutre de ∩ :
∀E ⊂ Ω, E ∪ ∅ = E = E ∩ Ω.
5. Ω est l’élément absorbant de ∪ et ∅ est l’élément absorbant de ∩ :
∀E ⊂ Ω, E ∪ Ω = Ω et E ∩ ∅ = ∅.
6. Distributivité de ∪ sur ∩ et de ∩ sur ∪ :
∀(E, F, G) ⊂ Ω3, (E ∪ F) ∩ G = (E ∩ G) ∪ (F ∩ G) et (E ∩ F) ∪ G = (E ∪ G) ∩ (F ∪ G).

# Loi de Morgan
Soient E, F ⊂ Ω. On a 
E ∪ F = E ∩ F et E ∩ F = E ∪ F.

# Système complet d’évènements
Soit ${\mathcal{A}}=\{A_{1},\ldots,A_{n}\}$ une famille d'evenements possibles de Q.
1. U $A_{i}=\Omega$ Cles evenements couvrent tout ce qui est possible .
1SiSn
2. $\forall1\leq i,j\leq n,i\neq j\implies A_{i}\cap A_{j}=\varnothing$ Cles evenements sont deux a deurx incompatibles)

# Cardinalité
|E| ou card(E) => nombre d'élèments de l'ensemble E

# Formule de pascal :
Possibilités de sous ensemble de p éléments dans un ensemble de n éléments

$$
c a r d({\mathcal{P}}_{p}(E))={\binom{n}{p}}={\frac{n!}{p!(n-p)!}}. 
$$

# Fonction de probabilité
Soit Ω un univers fini ou dénombrable.
On désigne par $P(Ω)$ l’ensemble des parties de Ω. Une fonction de probabilité sur Ω est une
fonction $P : P(Ω) −→ R$ telle que :
1. ∀E ⊂ Ω, 0 ≤ P(E) ≤ 1.
2. P(Ω) = 1.
3. Additivité : pour toute suite (An)n∈N d’évènements deux à deux incompatibles, on a

$$
P\left(\bigcup_{i=1}^{n}A_{i}\right)=\sum_{i=1}^{n}P(A_{i}) 
$$

On dit alors que le doublet (Ω, P) est un espace probabilisé, et pour tout évènement E ∈ P(Ω),
on appelle probabilité de E le nombre $P(E) ∈ [0, 1]$.

***CAS FAVORABLE / CAS POSSIBLES***

***P(E ∪ F) = P(E) + P(F) − P(E ∩ F)***

