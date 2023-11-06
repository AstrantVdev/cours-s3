# Sommaire
[[TOC]]

# Utils
- PS1='$ '

# Terminal

Raccourcis :
- ↑ = C-p
- ↓ = C-n
- C-l retour à la ligne
- C-u efface la ligne
- C-d quitte la console

# Commandes [°](#sommaire)
- `$ echo` (renvoie le résultat de ce qui est entré, echo ~ = root/username)
- `$ man` for cmd manual
- `$ sudo apt install man` to install libs, here it's man lib
- `$ cmd ; cmd ; cmd` execute three cmds
- `$ sudo cmd` execute admin cmd, need of admin pass
---
- `ls` (list files/dir in current dir)
- `ls` [path] ... (same but inside given dir)
    - ? (any char)
    - [1-9]
    - [a-z]
    - * (any string)
    - [^1-9] (not a number)
    - `-a` (all) show hidden files
    - `-l` (long listing format)
- `pwd` (print working directory)
- `cd ..` (upper directory)
- `cd` [path] (change shell path)
- `~` (shortcut to user's directory)
---
- `wc` [path] (word count in file)
- `cat` [path] (concatenate, print file)
---
- `mkdir` (make directory)
- `rmdir` (remove dir)
- `touch` [path] (create directory/file)
- `mv` [path] (move/rename directory/file)
- `cp` (copy)
- `rm` remove file/directory
    - `-r` (recursive) to rm/cp files in directory
    - `-f` force, ignore non existing files
- `mkdir [path] -p` no error if existing, make parent directories as needed
---
- `type` (give command type)
- `man` (aide pour les commandes externes/internes, !!! ATTENTION : installer le package)
- `help` (aide pour les commandes internes seulement)
---
- `-i` ask confirmation to 
---
- `cal 3 2022` (calendrier mensuel)
- `date` (renvoie date)
---


`$ type` Il existe plusieurs types de commandes : les commandes externes, les commandes internes, les fonctions du shell et les alias. Les commandes externes sont des programmes compilés ou des scripts installés sur le système. Les commandes internes (aussi appelées commandes intégrées) sont des commandes intégrées au shell. Les fonctions du shell sont des fonctions définies par l'utilisateur. Les alias sont des raccourcis pour des commandes définis par l'utilisateur.

# Répertoires et leurs utilitées [°](#sommaire)

- `/` 	Répertoire racine. Tous les autres répertoires sont des sous-répertoires de celui-ci.
- `/bin` 	Contient les programmes essentiels au fonctionnement du système.
- `/boot`	Contient les fichiers nécessaires au démarrage du système.
- `/dev` 	Contient les fichiers représentant les périphériques.
- `/etc` 	Contient les fichiers de configuration du système.
- `/home` 	Contient les répertoires personnels des utilisateurs.
- `/lib`	Contient les bibliothèques partagées et les modules du noyau.
- `/media` 	Contient les points de montage des périphériques amovibles.
- `/mnt` 	Contient les points de montage des systèmes de fichiers temporaires.
- `/opt` 	Contient les logiciels additionnels.
- `/proc` 	Contient les informations sur les processus et le système.
- `/root` 	Répertoire personnel de l'administrateur.
- `/run` 	Contient les fichiers d'exécution des applications.
- `/sbin` 	Contient les programmes essentiels au fonctionnement du système.
- `/srv` 	Contient les données des services fournis par le système.
- `/sys` 	Contient les informations sur les périphériques.
- `/tmp` 	Contient les fichiers temporaires.
- `/usr` 	Contient les programmes, les bibliothèques et les fichiers de configuration.
- `/var` 	Contient les fichiers variables comme les logs, les mails, les bases de données, etc.
- `/lost+found` 	Contient les fichiers récupérés lors d'un crash du système.

# Permissions [°](#sommaire)

Chaque répertoires possède des permissions associées à un propriétaire, un groupe et les autres utilisateurs.

`$ id` liste utilisateurs et leurs id

## Metadonnées [°](#sommaire)

`$ ls -l [path]` donne les métadonnées du fichier recherché
`$ ls -ld [path]` for folder you are in

`-rw-r--r-- 1 user group 0 2019-09-09 10:00 fichier`

Le premier char = type fichier (d:directory; -:normal)

Les trois premiers caractères sont les perms du proprio, puis du groupe, puis des autres users. (r: read, w:write, x:exe)
On peut les écrire en octet : r-- = 100 = 8

`$ chmod` change les perms d'un fichier/folder, quelques exemples :
- `$ touch f; ls -l f`
- `$ chmod a= f; ls -l f`
- `$ chmod o+rw f; ls -l f`
- `$ chmod u=o f; ls -l f`
- `$ chmod o-wx f; ls -l f`
- `$ chmod g+u f; ls -l f`
- `$ chmod a+x,g-w f; ls -l f`
---
- `$ chmod 644 f; ls -l f`
---
- `$ umask` crée un masque pour les prochains fichiers créés
umask est une commande qui permet de définir les permissions par défaut des fichiers et des répertoires que vous créez. La valeur de l'umask est une valeur octale qui est soustraite des permissions par défaut. Par exemple, si l'umask vaut 022, les permissions par défaut sont 755 pour les répertoires et 644 pour les fichiers.

## Répertoire [°](#sommaire)

Un répertoire est une table de noms de fichiers associés à un numéro d'index appelé numéro d'inode qui permet de connaître les informations (contenues dans l'inode) concernant ce fichier (taille, permissions, horodatage, où trouver le contenu du fichier, ...).

## Variables [°](#sommaire)
- `nom_var=valeur_var` crée une variable nommée nom_var et de valeur - tj un string - valeur_var
- `{$nom_var}random_string` cat un valeur_var avec un string
- `"$nom_var lol xd $nom_var2"` cat un valeur_var avec un string

## Caractères spéciaux [°](#sommaire)
- `echo {1..9..2}` affiche nombre de 1 à 9 avec pas de 2
- `touch file{1..9..2}.txt` crée des fichiers de 1 à 9 avec pas de 2
- `echo "command_result: $(echo XD)"` substitution de commande
- `var="${var1} ${var2}"`
- `'` tu peux sauter autant de lignes que tu veux et fermer la saisie en utilisant un autre '

## Canaux standards et redirections [°](#sommaire)

`ls, echo, cat,...` écrivent le résultat dans la sortie standard (la console).

- `$ ls ~ > list_files.txt` redirige le flux sur un nouveau canal, ici un fichier. Si le fichier existe, il est écrasé.
- `$ ls ~ >> list_files.txt` n'écrase pas le ficher mais cat le flux
- `$ ls ~ 1> list_files.txt` utilise le flux de sortie standard
- `$ ls ~ 2> list_files.txt` utilise le flux d'erreur standard
---
- `$ ls /usr/include/*.h | wc -l` "|" est une pipe qui redirige la sortie de ls (un string) vers l'entrée de wc, ici le résultat est 1 car un seul fichier est trouvé par ls
- `$ wc -l $(ls /usr/include/*.h)` est très différent ! Il effectue wc pour chaque fichier retourné par ls.
---
$ echo 'Frère Jaques,
> Frère Jacques,
> Dong !' > fj
écrire dans un fichier !
---
- `$ head fj` print all first lines
    - `-n 2 fj` print the two first lines
- `$ tail fj` print all end lines
    - `-n 3 fj` print the three last lines
---
- `$ grep "Dormez" fj` print lines with string "Dormez", case sensible
    - `-v "Dormez" fj` versus print lines withOUT string "Dormez"
    - `-i "dormez" fj` insensible print lines with string "Dormez", NOT case sensible
---
- `$ sort fj` abc sort
- `$ uniq fj` do not print line repetitions
---
- `$ cut -c 1 fj` print first c for each line (c for char)
    - `-c 2 fj` print second c for each line
    - `-c 1-3 fj` print 1 to 3 c for each line
    - `-d ' ' -f 1 fj` print to " " c for each line (d for delimeter)
    - `-d ' ' -f 1,2 fj` print to second " " c for each line
---
- `$ tr a-z A-Z < fj` transform a to A
- `tr S D < fj` transform char to another
- `tail -n 3 fj | tr D B >> fj` same with pipe
---

ls /usr/include/*.h | wc -c | sort -n | head -n 10 | cut -d '.' -f 1
wc -c $(ls /usr/include/*.h) | sort -n | head -n 10 | cut -d / -f4 | cut -d . -f1

# Processus et tâches [°](#sommaire)

***processus** est une unité de travail sur un système d'exploitation. Il peut s'agir d'un programme, d'un script, ou d'un service. Chaque programme que vous exécutez représente un ou plusieurs processus. Chaque processus est identifié par un numéro unique appelé PID (Process IDentifier).
- `$ ps` affiche processus lancé par l'utilisateur courant
    - `-e` tous les processus
    - `-p` plus d'options affichés dont utilisateurs
    - `-u` print more infos ???
    - `-t` type
    - `-U [username]` all process launch by a user 
- `$ top` processus en cous d'éxécution et perf
    - `$ u [username]` affiche processus lancés par username
    - `$ o COMMAND=bash` filer by cmd

tableau avec colonnes `$ ps` :
- 1 | PID (Process IDentifier) du processus
- 2 | TTY (TeleTYpewriter) C'est le type de terminal utilisé pour lancer le processus. Ici pts/1 (pseudo-terminal slave) signifie que le processus a été lancé dans un pseudo-terminal. Le chiffre renseigné correspond au numéro du terminal (par exemple si vous avez plusieurs instances du terminal ouverts).
- 3 | TIME (temps) d'exécution du processus
- 4 | CMD (CoMmanDe) qui a lancé le processus

***tache/job*** est une unité de travail du shell. Une tâche peut être un processus, ou un groupe de processus mais il faut qu'il ait été lancé par le shell. Le shell a un système de contrôle de tâches : c'est la capacité à exécuter plusieurs commandes en même temps. On peut lancer une commande en arrière-plan et en avant-plan. Une tâche est un processus, mais un processus n'est pas forcément une tâche.
- `$ jobs` affiche les jobs
    - `-p` show jobs PID

- `$ sleep [time in s]` pause the job for seconds
    - `C-c` stop sleep and delete it
    - `C-z` pause job
---
- `$ fg%1` place job 1 to foreground
- `$ bg%1` place job 1 to background
---
- `$ RANDOM_CMD &` place cmd to background
---
- `$ ./[path]` exe cmd in file

# Signaux [°](#sommaire)

- `2) SIGINT` : signal envoyé par la combinaison de touches C-c. Il demande au processus de s'arrêter.
- `20) SIGTSTP` : signal envoyé par la combinaison de touches C-z. Il demande au processus de se mettre en pause.
- `18) SIGCONT` : signal envoyé par les commandes bg et fg. Il demande au processus de reprendre son exécution.
- `15) SIGTERM` : signal envoyé par la commande kill par défaut. Il demande au processus de s'arrêter.
- `9) SIGKILL` : Il demande au processus de s'arrêter immédiatement et provoque son arrêt brutal, comprenez par là que le processus n'a pas le temps de se terminer correctement. Il est donc déconseillé d'utiliser ce signal.

La liste exhaustive des signaux est disponible est obtenu avec commande kill -L.

- `$ trap 'commande1;commande2;...' signal1 signal2 ...` permet d'intercepter les signaux envoyés à un processus. Elle permet donc de définir des actions à effectuer lorsqu'un signal est envoyé à un processus

# Compression & Archivage [°](#sommaire)

- `$ tar`
    - `-c` create archive
    - `-x` extract archive
    - `-f` specify archive name
    - `-v` print all compressed files
    - `-z` gunzip format
- `$ gunzip [path]` unzip gunzip archive to tar archive
- `$ tar -xvf [path]` unzip

# Vim [°](#sommaire)

- `$ vim [name]` create a file and open vim
    - `$ i` insertion mode
    - `$ :q` quit vim
    - `$ :w` save
    - `$ :wq` save and quit  
    - `$ :q!` quit with saving

# C compilateur (gcc) [°](#sommaire)

Etapes de compilation :
- précompilation : code source -> code intermédiaire.
- compilation : code intermédiaire -> code machine.
- édition des liens : lier code machine avec les bibliothèques utilisées.
- création de l'exécutable : créer l'exécutable.

`$ gcc [path]` crée un éxécutable de path nommé a.out par défaut
    - `-o [name]` change le no par défaut

# Ressources utiles [°](#sommaire)
- https://douga19.github.io/introduction-linux-fr/
- https://bellard.org/jslinux/ (vm en ligne par : https://fr.wikipedia.org/wiki/Fabrice_Bellard#Biographie)