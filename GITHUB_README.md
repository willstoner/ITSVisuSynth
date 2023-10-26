# Erläuterungen zu GitHub

## Git über Konsole oder Webseite

Ein Git Repository lässt sich über die Konsole (bei Windows z.B. PowerShell)
oder durch die Weboberfläche steuern. Erfahrene Entwickler*innen nutzen meist
die Konsole. Es ist schneller und präziser, erfordert aber dass man einige
spezifische Befehle lernen muss. Viele empfehlen aber die Weboberfläche von
GitHub zu nutzen. Diese ist übersichtlich und leicht zu benutzen. Alle nötigen
Mittel lassen sich dort finden.

## Ein Repository klonen

Ein Repository zu klonen ist der Vorgang des Kopierens eines Git-Repositorys
von einem Remote-Server (z. B. GitHub, GitLab, Bitbucket) auf den lokalen
Computer. Dies ermöglicht, das gesamte Projekt und die dazugehörige
Versionsgeschichte auf dem lokalen System zu haben, damit man an dem Projekt
arbeiten, Änderungen vornehmen und Commits durchführen kann. Entwickler*innen
sollten immer darauf achten die aktuellste Verison des Repositorys lokal
gespeichert zu haben, bevor sie Änderungen vornehmen.

## Unterschiedliche Arbeitsbereiche

Bei Git gibt es drei verschiedene Arbeitsbereiche.
Der erste Bereich heißt Working Directory. In diesem Bereich bzw. Verzeichnis,
befindet man sich aktuell und bearbeitet Dateien des Projektes. Dieser Bereich
ist meist der lokale Arbeitsort und sollte vorzugsweise nicht der Main-Branch,
sondern ein eigener Branch sein.
Der zweite Bereich ist die Staging Area. In dieser werden alle aktuellen
Änderungen geparkt, bevor sie commitet werden. Man kann Dateien stagen oder
unstagen. Nur gestagte Änderungen können commitet werden.
Der dritte Bereich ist das Repository. Der Ort, an dem alle Commits und die
gesamte Commit-Historie gespeichert sind. Es enthält alle Branches, Tags und
Commits in deinem Git-Projekt. Das Repository speichert alle Änderungen, die im
Laufe der Zeit commitet werden.

## Git Commit und Git Push

Ein Git-Commit ist eine grundlegende Operation in Git und bezeichnet den
Prozess, durch den man Änderungen am Quellcode oder an Dateien in einem
Git-Repository dauerhaft in die Versionsgeschichte des Projekts aufnimmst,
aber die Änderungen nur lokal speicherst. Um die Änderungen auch auf dem
Remote Repository zu ändern, müssen diese erst gepushet werden. Es sollte
niemals im Main-Branch commitet werden, um sicherzustellen, dass es zu
keinen Verisonskonflikten oder anderen Problemen kommt. Besser ist es in einem
seperaten Branch zu commiten und über eine Pull Request zu mergen.

## Änderungen vornehmen durch Branches

Beim Entwickeln mit Git gibt es einen Main oder Master Branch, indem das
aktuelle Projekt steckt. Ein neuer Branch ist eine Abzweigung vom Main-Branch.
Entwickler*innen erstellen in Git Branches, um an neuen Features oder Experimenten
zu arbeiten, ohne den Hauptcode zu beeinflussen. Wenn sie mit ihren
Veränderungen zufrieden sind, können sie eine Pull Request senden, um ihren
Branch in den Main-Branch zu mergen.

## Pull Requests und Merging

Ein Pull Request ist eine Funktion, die in Git-Repositorys auf Plattformen wie
GitHub verwendet wird. Ein Pull Request ermöglicht es Entwickler*innen,
Änderungen aus einem Branch in einen anderen Branch zu übertragen,
normalerweise aus einem Feature-Branch in den Main-Branch.
Merging (Zusammenführen) ist der Prozess, bei dem Änderungen aus einem Branch
in einen anderen integriert werden. Im Kontext von Pull Requests wird das
Zusammenführen normalerweise nach einer erfolgreichen Codeüberprüfung und
Diskussion durchgeführt.

## Konsolen Befehle

*Hinsweis: <> - Klammern werden in der Komandozeile nicht geschrieben. An der Stelle steht einfach der Name (z.B. Dateiname, Branch-Name).*

**git init**: Initialisiert ein neues Git-Repository in einem Verzeichnis.

**git clone <URL>**: Klonen Sie ein Remote-Repository in ein lokales Verzeichnis.

**git add <Dateiname>**: Fügt eine Datei oder Verzeichnis zur Staging-Area hinzu.

**git add .** : Fügt alle Änderungen im aktuellen Verzeichnis zur Staging-Area hinzu.

**git commit -m "Nachricht"**: Erstellt einen Commit mit den zuvor gestageten Änderungen und einer Commit-Nachricht.

**git status**: Zeigt den Status der Arbeitskopie, einschließlich ungestageter Änderungen.

**git log**: Zeigt eine Liste der Commits im aktuellen Branch an.

**git branch**: Zeigt eine Liste der Branches im Repository an.

**git checkout <Branch-Name>**: Wechselt zu einem anderen Branch.

**git merge <Branch-Name>**: Fusioniert Änderungen aus einem anderen Branch in den aktuellen Branch.

**git pull**: Holt Änderungen aus dem Remote-Repository und führt ein Merge aus.

**git push**: Sendet lokale Commits an das Remote-Repository.

**git remote -v**: Zeigt die URLs der Remote-Repositories an, die mit dem lokalen Repository verknüpft sind.

**git diff**: Zeigt die Unterschiede zwischen Arbeitskopie und dem letzten Commit an.

**git reset <Dateiname>**: Entfernt eine Datei aus der Staging-Area, ohne die Arbeitskopie zu ändern.

**git reset --hard <Commit-ID>**: Setzt den Arbeitskopie und den Branch auf einen bestimmten Commit zurück.

**git stash**: Versteckt vorübergehend ungestagete Änderungen, um an einem anderen Branch zu arbeiten.

**git branch -d <Branch-Name>**: Löscht einen lokalen Branch.

**git push origin --delete <Branch-Name>**: Löscht einen Remote-Branch.

