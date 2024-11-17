---
## Front matter
title: "Отчёт по лабораторной работе №8"
subtitle: "Дисциплина: Информационная безопасность"
author: "Выполнил: Танрибергенов Эльдар"

## Generic otions
lang: ru-RU
toc-title: "Содержание"

## Bibliography
bibliography: bib/cite.bib
csl: pandoc/csl/gost-r-7-0-5-2008-numeric.csl

## Pdf output format
toc: true # Table of contents
toc-depth: 2
lof: true # List of figures
lot: false # List of tables
fontsize: 12pt
linestretch: 1.5
papersize: a4
documentclass: scrreprt
## I18n polyglossia
polyglossia-lang:
  name: russian
  options:
	- spelling=modern
	- babelshorthands=true
polyglossia-otherlangs:
  name: english
## I18n babel
babel-lang: russian
babel-otherlangs: english
## Fonts
mainfont: IBM Plex Serif
romanfont: IBM Plex Serif
sansfont: IBM Plex Sans
monofont: IBM Plex Mono
mathfont: STIX Two Math
mainfontoptions: Ligatures=Common,Ligatures=TeX,Scale=0.94
romanfontoptions: Ligatures=Common,Ligatures=TeX,Scale=0.94
sansfontoptions: Ligatures=Common,Ligatures=TeX,Scale=MatchLowercase,Scale=0.94
monofontoptions: Scale=MatchLowercase,Scale=0.94,FakeStretch=0.9
mathfontoptions:
## Biblatex
biblatex: true
biblio-style: "gost-numeric"
biblatexoptions:
  - parentracker=true
  - backend=biber
  - hyperref=auto
  - language=auto
  - autolang=other*
  - citestyle=gost-numeric
## Pandoc-crossref LaTeX customization
figureTitle: "Рис."
tableTitle: "Таблица"
listingTitle: "Листинг"
lofTitle: "Список иллюстраций"
lotTitle: "Список таблиц"
lolTitle: "Листинги"
## Misc options
indent: true
header-includes:
  - \usepackage{indentfirst}
  - \usepackage{float} # keep figures where there are in the text
  - \floatplacement{figure}{H} # keep figures where there are in the text
---

# Цель работы

 Освоить на практике применение режима однократного гаммирования на примере кодирования различных исходных текстов одним ключом.

# Задания

- Два текста кодируются одним ключом (однократное гаммирование). Требуется не зная ключа и не стремясь его определить, прочитать оба текста.


# Указания к работе

Исходные данные.
Две телеграммы Центра:
P1 = НаВашисходящийот1204
P2 = ВСеверныйфилиалБанка


# Выполнение работы

Программа написана на языке программирования С++

Функции с предыдущей лр не были изменены, поэтому их снимки я приводить не стану.
В главной функции лишь добавил переменные для второй строки и провёл следующую последовательность действий: гаммировал два шифротекста, а затем полученный результат гаммировал с каждым шестнадцатеричным кодом. В итоге получил исходные сообщения без ключа.

![Программа шифрования двух сообщений одним ключом](../images/4.png){#fig:001}

![Программа шифрования двух сообщений одним ключом](../images/5.png){#fig:002}

![Результат](../images/6.png){#fig:003}


# Выводы

 В результате выполнения работы я освоил на практике применение режима однократного гаммирования на примере кодирования различных исходных текстов одним ключом.

# Ответы на контрольные вопросы

1. Гаммировать два шифротекста, а затем полученный результат гаммировать с известным текстом.
2. Дешифрование.
3. В функцию гаммирования передаются разные значения сообщений, а ключ единый.
4. Если они подчиняются некоторому шаблону, и злоумышленник знает об этом шаблоне, то может получить оба исходных текстов.
5. В однократном гаммировании используется операция сложения по модулю 2 (XOR).
6. Простота, скорость, универсальность.
