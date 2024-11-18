---
## Front matter
lang: ru-RU
title: Презентация по 4 этапу индивидуального проекта
subtitle: Использование nikto
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

 Ознакомиться с утилитой nikto в Kali Linux и испытать. 


## Задачи

- Ознакомиться с утилитой nikto в Kali Linux и испытать. 

# Результаты

## Включение испытательной ВМ

 - ***Metasploitable*** - специальная нарочно очень уязвимая для всякого рода атак виртуальная машина

![Запуск ВМ и просмотр интерфейсов для получения ip-адреса](../images/1.png){#fig:001}


## Испытание nikto

 - ***nikto*** — базовый сканер безопасности веб-сервера. Он сканирует и обнаруживает уязвимости в веб-приложениях, обычно вызванные неправильной конфигурацией на самом сервере, файлами, установленными по умолчанию, и небезопасными файлами, а также устаревшими серверными приложениями.

## Испытание nikto

![Результат](../images/2.png){#fig:005 widht=70% height=70%}




# Вывод
  
## Вывод

 В результате выполнения работы я познакомился с инструментом поиска уязвимостей - nikto.