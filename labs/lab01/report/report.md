---
## Front matter
title: "Отчёт по лабораторной работе №1"
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
lot: true # List of tables
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

 Целью данной работы является приобретение практических навыков установки операционной системы на виртуальную машину, настройки минимально необходимых для дальнейшей работы сервисов.
 А также создание репозитория на Github для отчётности.

# Задания

 1. Установить ОС на виртуальную машину
 2. Получить информацию о системе в терминале
 3. Создать репозиторий на github
 4. Ответить на контрольные вопросы.

# Теоретическое введение

 Лабораторная работа подразумевает установку на виртуальную машину VirtualBox операционной системы Linux (дистрибутив Rocky).
 При выполнении работы следует придерживаться следующих правил именования: имя виртуальной машины, имя хоста вашей виртуальной машины,
 пользователь внутри виртуальной машины должны совпадать с логином студента, выполняющего лабораторную работу.

# Выполнение лабораторной работы

1. Установка ОС на виртуальную машину
   
1.1. Cоздал новую виртуальную машину. Для этого в VirtualBox выбрал Машина->Создать. Указал имя виртуальной машины - логин в дисплейном классе, тип операционной системы — Linux, RedHat.

![Создание ВМ: имя и тип ОС](../images/1.png){#fig:001}


1.2. Указал размер основной памяти виртуальной машины: память - 6 ГБ, процессоров - 4.

![Создание ВМ: размер основной памяти и кол-во процессоров](../images/2.png){#fig:002}
 

1.3. Задал конфигурацию жёсткого диска — загрузочный, VDI (BirtualBox Disk Image), динамический виртуальный диск. Задал размер диска — 45 ГБ.

![Создание ВМ: конфигурация и размер жёсткого диска](../images/3.png){#fig:003}


1.4. Выберал в VirtualBox для виртуальной машины Настройки->Носители. Добавил новый привод оптических дисков и выберал образ операционной системы.

![Создание ВМ: добавление образа ОС в привод оптических дисков](../images/5.png){#fig:004}


1.5. Запустил виртуальную машину, выбрал English в качестве языка интерфейса и перешёл к настройкам установки операционной системы.

![Запуск ВМ](../images/6.png){#fig:005}

![Настройка установки ОС: выбор языка интерфейса](../images/7.png){#fig:006}


1.6. Скорректировал часовой пояс, в раскладку клавиатуры добавил русский язык, но в качестве языка по умолчанию указал английский язык.

![Настройка установки ОС: добавление русского языка в раскладку клавиатуры](../images/8.png){#fig:007}


1.7. В разделе выбора программ указал в качестве базового окружения — Server with GUI , а в качестве дополнения — Development Tools.
  
![Настройка установки ОС: базовое окружение и дополнение](../images/9.png){#fig:008}


1.8. Отключил KDUMP.
  
![Настройка установки ОС: отключение KDUMP](../images/10.png){#fig:009}


1.9. Включил сетевое соединение и в качестве имени узла указал etanribergenov.localdomain.
  
![Настройка установки ОС: включение сетевого соединения и имя узла](../images/11.png){#fig:010}


1.10. Установил пароль для root и пользователя с правами администратора.
  
![Настройка установки ОС: пароль для root](../images/12.png){#fig:011}

![Настройка установки ОС: пароль для пользователя с правами администратора](../images/13.png){#fig:012}


1.11. После завершения установки операционной системы корректно перезапустил виртуальную машину и принял условия лицензии.

![Установка ОС](../images/14.png){#fig:013}

![Перезапуск ОС](../images/15.png){#fig:014}

  
1.12. В VirtualBox оптический диск отключился автоматически.

![Проверка автоотключения оптического диска после установки ОС](../images/16.png){#fig:015}


1.13. Вошёл в ОС под заданной при установке учётной записью.
  
![Вход в систему](../images/17.png){#fig:016}
  
В меню "Устройства виртуальной машины" подключил образ диска дополнений гостевой ОС.

![Подключение образа диска дополнений гостевой ОС](../images/18.png){#fig:017}

![Подключение образа диска дополнений гостевой ОС: установка необходимых компонентов](../images/19.png){#fig:018}

После этого перезагрузил ВМ.


1.14. Проверил имя хоста (его я задал при настройке установки).

![Имя хоста](../images/20.png){#fig:019}

  
2. Получение информации о системе в терминале.

2.1. В окне терминала проанализировал последовательность загрузки системы, выполнив команду dmesg. При помощи неё и поиска получил информацию.
Использована команда  **dmesg | grep -i "то, что ищем"**.

2.1.1. Версия ядра Linux.

![Версия ядра Linux](../images/21.png){#fig:020}


2.1.2. Частота процессора.

![Частота процессора](../images/22.png){#fig:021}


2.1.3. Модель процессора.

![Модель процессора](../images/23.png){#fig:022}


2.1.4. Объём доступной оперативной памяти.

![Объём доступной оперативной памяти](../images/24.png){#fig:023}


2.1.5. Тип обнаруженного гипервизора.

![Тип обнаруженного гипервизора](../images/25.png){#fig:024}


2.1.6. Тип файловой системы корневого раздела.

![Тип файловой системы корневого раздела](../images/26.png){#fig:025}


2.1.7. Последовательность монтирования файловых систем.

![Последовательность монтирования файловых систем](../images/27.png){#fig:026}


3. Создание репозитория на Github

3.1. Создал репозиторий git при помощи шаблона.

![Репозиторий git](../images/28.png){#fig:027}



4. Ответы на вопросы

1. Логин и пароль.
2. Команды терминала:
  -? - для получения справки по команде;
  cd – для перемещения по файловой системе;
  ls – для просмотра содержимого каталога;
  du – для определения объёма каталога;
  mkdir(для каталога), touch(для файла) / rm –  для создания / удаления каталогов / файлов;
  chmod – для задания определённых прав на файл / каталог;
  history – для просмотра истории команд.
3. Файловая система — порядок, определяющий способ организации, хранения и именования данных на носителях информации в компьютерах. Основная функция файловой системы — обеспечить удобный доступ к
хранящейся информации пользователю. Благодаря файловой системе пользователи могут легко находить, открывать, редактировать и сохранять файлы на своём устройстве.
4. При помощи команд df/mount.
5. При помощи команды kill. 

# Выводы

 В результате лабораторной работы я приобрёл практические навыки установки операционной системы на виртуальную машину, настройки минимально необходимых для дальнейшей работы сервисов.

# Список литературы{.unnumbered}

::: {#refs}
:::