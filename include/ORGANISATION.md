# Organisation du dossier `include`

- `features`: Dossier dans lequel on implémente le code en terme de fonctionnalités du robot.
- `commons`: Dossier dans lequel on peut mettre le code commun qui ne rentre pas nécéssairement dans une seule feature.
- `utils`: Comme `commons`, mais le code dedan est attendu d'être portable. En d'autres termes, ce dossier devrait pouvoir être copié collé dans n'importe quelle autre codebase et quand même faire du sens. Il ne devrait pas faire référence aux robots du tout! NOTE: si vous ne comprenez pas comment l'utiliser, vous pouvez simplement ignorer ce dossier.