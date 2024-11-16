---
## Front matter
lang: ru-RU
title: Презентация по лабораторной работе №6
subtitle: Мандатное разграничение прав в Linux
author:
  - Танрибергенов Э.
institute:
  - Российский университет дружбы народов, Москва, Россия
date: 2024 г.

## i18n babel
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
## Formatting pdf
toc: false
toc-title: Содержание
slide_level: 2
aspectratio: 169
section-titles: true
theme: metropolis
header-includes:
 - \metroset{progressbar=frametitle,sectionpage=progressbar,numbering=fraction}
---

# Информация

## Докладчик

  - Танрибергенов Эльдар
  - студент 4 курса из группы НПИбд-02-21
  - ФМиЕН, кафедра прикладной информатики и теории вероятностей
  - Российский университет дружбы народов


# Цели и задачи

## Цель работы

 Развить навыки администрирования ОС *Linux*. Получить первое практическое знакомство с технологией *SELinux*.
Проверить работу *SELinux* на практике совместно с веб-сервером *Apache*.


## Задачи

- Проверить работу *SELinux* на практике совместно с веб-сервером *Apache*


# Результаты


## Проверка работы *SELinux* на практике совместно с веб-сервером *Apache*

- команда ***getenforce***  -  выводит режим работы *SELinux*
- команда ***sestatus***  -  выводит статус *SELinux*

![Проверка того, что SeLinux работает в режиме enforcing политики targeted](../images/1.png){#fig:001 width=60% height=60%}


## Проверка работы *SELinux* на практике совместно с веб-сервером *Apache*

- команда  ***service httpd start***

![Запуск веб-сервера](../images/2.2.png){#fig:002 width=70% height=70%}


## Проверка работы *SELinux* на практике совместно с веб-сервером *Apache*

- команда ***ls -l var/www | grep html***
- только у суперпользователя есть разрешение на запись в директорию

![Просмотр атрибутов директории для определения круга пользователей, которым разрешено создание файлов в директории](../images/8.png){#fig:003}


## Проверка работы *SELinux* на практике совместно с веб-сервером *Apache*

- выполено в *Gedit*, свободном текстовом редакторе для среды *GNOME*

![Содержимое HTML-файла test-etanribergenov](../images/9.png){#fig:004} 


## Проверка работы *SELinux* на практике совместно с веб-сервером *Apache*

- команда ***ls -Z \<file\>***
- контекст, присваиваемый по умолчанию вновь созданным файлам в директории */var/www/html*  -  *httpd_sys_content_t*.

![Проверка контекста безопасности созданного файла](../images/10.png){#fig:005}


## Проверка работы *SELinux* на практике совместно с веб-сервером *Apache*

- выполнено в веб-браузере *Firefox*

![Обращение к файлу через веб-сервер в браузере](../images/11.png){#fig:006}


## Проверка работы *SELinux* на практике совместно с веб-сервером *Apache*

- команда ***chcon -t \<контекст_безопасности\> \<файл\>*** - меняет контекст *SELinux* для файла
- ***ls -Z \<file\>*** - проверка контекста безопасности *SELinux*

![Изменение контекста SELinux для файла](../images/13.png){#fig:007}


## Проверка работы *SELinux* на практике совместно с веб-сервером *Apache*

- выполнено в веб-браузере *Firefox*

![Попытка получения доступа к файлу через веб-сервер в браузере](../images/14.png){#fig:008}


## Проверка работы *SELinux* на практике совместно с веб-сервером *Apache*

- в файле конф. файле веб-сервера *Apache* */etc/httpd/httpd.conf* строка ***Listen 80*** заменена на ***Listen 81***

![Изменение порта прослушивания веб-сервера Apache](../images/16.png){#fig:009}


## Проверка работы *SELinux* на практике совместно с веб-сервером *Apache*

- Сбой не произошёл

![Выполнение перезапуска веб-сервера](../images/17.png){#fig:010}


## Проверка работы *SELinux* на практике совместно с веб-сервером *Apache*

- команда ***semanage port -a -t http_port_t -р tcp 81***

![Добавление tcp-порта 81 в список портов SELinux для веб-сервера](../images/19.1.png){#fig:011}


## Проверка работы *SELinux* на практике совместно с веб-сервером *Apache*

- команда ***semanage port -l | grep http_port_t***

![Просмотр списка портов SELinux для веб-сервера](../images/19.2.png){#fig:012}


## Проверка работы *SELinux* на практике совместно с веб-сервером *Apache*

![Перезапуск веб-сервера Apache](../images/20.png){#fig:013}


## Проверка работы *SELinux* на практике совместно с веб-сервером *Apache*

- команда ***chcon -t \<контекст_безопасности\> \<файл\>*** 

![Возвращение контекста SELinux к файлу](../images/21.1.png){#fig:014}


## Проверка работы *SELinux* на практике совместно с веб-сервером *Apache*

- выполнено в веб-браузере *Firefox*

![Получение доступа к файлу через веб-сервер в браузере](../images/21.2.png){#fig:015}



# Вывод
  
## Вывод

 В результате выполнения работы я развил навыки администрирования ОС *Linux*. Получил первое практическое знакомство с технологией *SELinux*. Проверил работу *SELinux* на практике совместно с веб-сервером *Apache*.