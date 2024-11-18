---
## Front matter
title: "Отчёт по 1-му этапу индивидуального проекта"
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

 Установить на виртуальную машину VirtualBox дистрибутив Kali ОС Linux 

# Задания

- Установить на виртуальную машину VirtualBox дистрибутив Kali ОС Linux


# Ход работы


Установил имя, согласно соглашению об именовании.
Тип ОС - Linux 2.6 / 3.x / 4.x / 5.x (64-bit)

![Название ВМ и тип ОС](../images/1.png){#fig:001}



Выделил 8 ГБ оперативной памяти и 4 потока (логических процессоров).

![Выделение объёма оперативной памяти и потоков](../images/2.png){#fig:002}



Создал новый виртуальный диск на 45 ГБ.

![Создание нового виртуального диска](../images/3.png){#fig:003}



Подключил образ загрузочного диска.

![Подключение образа загрузочного диска](../images/4.png){#fig:004}



В качестве языка установки выбрал русский.

![Выбор языка установки](../images/5.png){#fig:005}



А раскладку клавиатуры выбрал английскую.

![Настройка клавиатуры](../images/6.png){#fig:006}




Далее - просто принимал всё по умолчанию.

![Задание имени компьютера](../images/7.png){#fig:007}

![Задание домена](../images/8.png){#fig:008}

![Создание учётной записи пользователя](../images/9.png){#fig:009}

![Настройка часового пояса](../images/10.png){#fig:010}

![Настройка разметки дисков](../images/11.png){#fig:011}

![Настройка разметки дисков](../images/12.png){#fig:012}

![Настройка разметки дисков](../images/13.png){#fig:013}

![Настройка разметки дисков](../images/14.png){#fig:014}

![Настройка разметки дисков](../images/15.png){#fig:015}

![Выбор программного обеспечения](../images/16.png){#fig:016}

![Установка системного загрузчика GRUB](../images/17.png){#fig:017}

![Установка системного загрузчика GRUB](../images/18.png){#fig:018}

![Завершение установки](../images/19.png){#fig:019}


Вошёл в систему, введя логин и пароль.

![Вход в систему](../images/20.png){#fig:020}


Подключил гостевые дополнения.

![Подключение гостевых дополнений](../images/21.png){#fig:021}


Проверил терминал.

![Проверка терминала](../images/22.png){#fig:022}


И выключил ВМ.

![Выключение ВМ](../images/23.png){#fig:023}


# Выводы

 В результате выполнения работы я ознакомился с дистрибутивом Kali Linux, установив его на виртуальную машину VirtualBox.

