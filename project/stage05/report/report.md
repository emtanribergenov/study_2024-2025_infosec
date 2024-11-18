---
## Front matter
title: "Отчёт по 5-му этапу индивидуального проекта"
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

 Ознакомиться с утилитой Burpe Suite в Kali Linux и испытать. 

# Задания

- Ознакомиться с утилитой Burpe Suite в Kali Linux и испытать.


# Ход работы

***Burp Suite*** представляет собой набор мощных инструментов безопасности веб-приложений, которые демонстрируют реальные возможности злоумышленника, проникающего в веб-приложения.

Произвёл SQL-инъекции в DVWA при помощи Burp Suite.


![Запуск burp suite](../images/1.png){#fig:001}

![Запуск burp suite](../images/2.png){#fig:002}

![Запуск burp suite](../images/3.png){#fig:003}

![Запуск burp suite](../images/4.png){#fig:004}

![Рабочая область burp suite](../images/5.png){#fig:005}

![Вход в учётную запись в DVWA](../images/6.png){#fig:006}

![Изменение уровня безопасности DVWA](../images/7.png){#fig:007}

![Включение перехвата данных в burp suite](../images/8.png){#fig:008}

![Отправка данных в разделе теста SQL-инъекций DVWA](../images/10.png){#fig:009}

![Перехваченные данные](../images/11.png){#fig:010}

![Данные изменены и отправлены в приложение](../images/12.png){#fig:011}

![Изменение вывода в приложении DVWA](../images/13.png){#fig:012}

![SQL-инъекция 1](../images/14.png){#fig:013}

![Результат: выведены данные ФИО](../images/15.png){#fig:014}

![SQL-инъекция 2](../images/16.png){#fig:015}

![Результат: выведены и хэша паролей](../images/17.png){#fig:016}

# Выводы

 В результате выполнения работы я познакомился с инструментом тестирования уязвимостей веб-приложений - Burpe Suite.

