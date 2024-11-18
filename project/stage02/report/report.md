---
## Front matter
title: "Отчёт по 2-му этапу индивидуального проекта"
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

 Установить DVWA в гостевую систему к Kali Linux и ознакомиться.

# Задания

- Установить DVWA в гостевую систему к Kali Linux и ознакомиться.


# Ход работы



![Загрузка DVWA](../images/1.png){#fig:001}

![Установка необходимых пакетов](../images/2.png){#fig:002}

![Клонирование репозитория DVWA](../images/3.png){#fig:003}

![Изменение имени и прав директории](../images/4.2.png){#fig:004}

![Редактирование конфиг. файла](../images/4.png){#fig:005}

![Редактирование конфиг. файла: задание имени и пароля пользователя](../images/5.png){#fig:006}

![Конфигурирование apache2](../images/6.png){#fig:007}

![Конфигурирование apache2](../images/7.png){#fig:008}

![Запуск apache2](../images/8.png){#fig:009}

![Проверка запуска apache2](../images/9.png){#fig:010}

![Создание пользователя в базе данных](../images/10.png){#fig:011}

![Предоставление пользователю всех привелегий](../images/11.png){#fig:012}

![Открытие DVWA в браузере, создание/сброс базы данных](../images/14.png){#fig:013}

![Вход от имени admin](../images/15.png){#fig:014}

![Проверка brute force](../images/16.png){#fig:015}

![Проверка brute force: результат](../images/17.png){#fig:016}

![Проверка коммандной вставки](../images/18.png){#fig:017}




# Выводы

 В результате выполнения работы я ознакомился с DVWA, установив в гостевую систему к Kali Linux.

