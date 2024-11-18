---
## Front matter
title: "Отчёт по 3-му этапу индивидуального проекта"
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

 Ознакомиться с утилитой Hydra в Kali Linux и испытать. 

# Задания

- Ознакомиться с утилитой Hydra в Kali Linux и испытать.


# Ход работы

Для проведения испытания я установил специальную уязвимую ВМ - Metasploitable.

![Создание ВМ metasploitable](../images/1.png){#fig:001}

Запустил metasploitable и ввёл команду ifconfig, чтобы узнать её ip-адрес.

![Выяснение IP-адреса ВМ metasploitable](../images/2.png){#fig:002}

Произвёл поиск открытых портов "жертвы" при помощи команды nmap в Kali Linux. Открытым  оказался - http порт (80).

![Поиск открытых портов у хоста с введённым ip-адресом в Kali Linux](../images/3.png){#fig:003}

Для запуска hydra я воспользовался встроенным списком стандартных паролей - http_default_pass.txt.

![Содержимое встроенного списка http_default_pass.txt](../images/4.png){#fig:004}

Запустил hydra на поиск пароля по известному логину. Получил пароль - password.

![Результат](../images/5.png){#fig:005}




# Выводы

 В результате выполнения работы я познакомился с утилитой для подбора имён пользователей (логинов) и паролей Hydra.

