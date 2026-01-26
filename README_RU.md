# Материнская/отладочная плата на основе Xilinx 7Z010 и компонентов с контрольной платы от Antminer S9

# !!!Прежде чем заказывать платы или какие-либо компоненты, пожалуйста прочитайте всю инструкцию, и все блоки "необходимое"!!!

## English version: [README.md](README.md)

## Аппаратная часть:

![3d rendered PCB front](images/3d_view_f.png)
![3d rendered PCB back](images/3d_view_b.png)

![Final board image](images/final_board_f.jpg)
![Final board image](images/final_board_b.jpg)

### Особенности:
- Большинство дорогих компонентов могут быть взяты с дешевых плат от майнеров
- 6-слойная плата с вменяемой ценой производства у JLCPCB, достигнутое за счет применения бесплатной технологии Via In Pad
- Полная поддержка 512MB оперативной памяти на двух DDR3 чипах
- Периферийные интерфейсы для PS части: USB(Device/OTG), гигабитный Ethernet, SD карты(один контроллер, два переключаемых слота), eMMC+QSPI для хранения прошивки, I2C, UART, часы реального времени DS1307, пины для прямого ввода в XADC
- Выделенные пины от PL для подключения дисплея с 5 TMDS парами, 5v/3.3v линиями питания, I2C и двумя GPIO. Разработано, чтобы подключать HDMI дисплеи используя простую плату расширения
- 10 согласованных по длине дифф.пар на PL_IO_A
- 22 согласованных по длине линий CMOS на PL_IO_B
- 44(+2 на PL_IO_A) обычных CMOS линий на PL_IO_C and PL_IO_D, таким образом предоставляя все пины обоих 34 и 35 банков

Схема в формате PDF доступна в [hardware/schematic.pdf](hardware/schematic.pdf)

Список компонентов(BOM) доступен в [hardware/zynq_test_components_1.2.ods](hardware/zynq_test_components_1.2.ods). Значения, которые есть на плате майнера, но их не хватит на сборку целой платы, отмечены красным цветом. Значений которых вообще на плате майнера нет, отмечены желтым. Любой компонент с платы майнера под индексом из столбца "Antminer S9 Board Reference" может быть впаян на любую позицию новой платы из столбца "Reference".

### Заказ плат у JLCPCB

Используйте файл [hardware/gerbers/zynq_test.zip](hardware/gerbers/zynq_test.zip) и следующую конфигурацию:

- Layers: 6
- Dimensions: 99.5x100mm(автоматически считывается из герберов)
- PCB thickness: 1.2mm
- Material: FR4 TG135
- Surface finish: ENIG
- Outer copper weight: 1oz
- Inner copper weight: 0.5oz
- Stackup: JLC06121H-3313
- Impedance control: not required
- Via covering: Epoxy filled&Capped OR Copper paste filled&Capped (ВАЖНО!!!)
- Min via hole size/diameter: 0.3(0.4/0.45)mm
- PCB mark: Order number(specify position)

### Необходимое для сборки:

- Собственно, печатные платы, заказанные ранее.
- Рабочая контрольная плата от Antminer S9.
- Кучка компонентов, которые не взять с платы(в [hardware/zynq_test_components_1.2.ods](hardware/zynq_test_components_1.2.ods) желтые - нет совсем, красные - есть но не хватает, надо дозаказывать). Некоторые компоненты(U11,eMMC чип), могут быть заменены на что угодно с таким же расположением выводов и электрическим интерфейсом(например, можно поставить бОльший или меньший eMMC, если надо). Также, если некоторые функции не требуются(напр. eMMC, USB или RTC), вы можете игнорировать микросхемы для них, и все детали их окружающие. Обращайте внимание на корпуса/посадочные места компонентов - они указаны в отдельной колонке в BOM.
- Паяльник и станция с термофеном, пинцеты, какой-нибудь контейнер, в который будут падать лишние шары при реболлинге.
- Что-либо для нижнего подогрева плат - специализированная установка желательна, но обычный утюг тоже должен сработать.
- Флюс, пригодный для пайки SMD и BGA(я использую RMA218)
- Инструменты для реболлинга - специальный стенд с пружинкой для фиксации чипа, трафарет с 0.8mm расстоянием;0.5mm отверстиями для чипов Zynq и DDR, трафарет с 0.5mm расстоянием;0.3mm отверстиями - на случай если придется реболлить eMMC, некоторое количество 0.45mm и 0.3mm шаров(да, желательно использовать 0.45mm для Zynq и DDR, потому что с ними намного легче работать при использовании кривых китайских трафаретов).
- Базовые навыки сборки электроники и инструменты - мультиметр, лабораторный блок питания. Осциллограф будет очень полезным.

### Сборка

0. Перед разборкой платы майнера, сначала подключите ее к питанию +12V, и подключитесь по UART, чтобы убедиться что она рабочая, и главное - скопировать MAC адрес сетевой карты для использования в дальнейшем. Просто подождите пока загрузится ядро Linux, и ищите строчки наподобие

    "Dumping data starting at 0x01060000 and ending at 0x01060001..."   и

    "[    4.367100] bcm54xx_config_init"

    Где-то между ними будет строка с MAC-адресом платы. Или просто посмотрите его в списке DHCP-клиентов роутера. Сохраните адрес до самого конца сборки. Выключите плату и подготовьте к разборке.

1. Демонтаж основных компонентов с платы

    Для этого вам понадобится нижний подогрев и термофен.

    Перед началом, нужно выпаять C88 и C58 с нижней стороны платы(не выкидывайте!), и убрать черную резиновую подставку, как и всё что может поднять плату над поверхностью нагревателя или расплавиться.

    ![Board image before desoldering, bottom side](images/before_disassembly_b.jpg)

    Потом, переверните плату и положите на нагреватель опять. На этом этапе мы будем выпаивать все нужные микросхемы и другие большие SMD компоненты.

    ![Board image before desoldering, front side](images/before_disassembly_f.jpg)

    ! На некоторых платах нет конвертера уровней для SD(U6). В таком случае, чтобы получить рабочие карты на новой плате, его нужно будет содрать с другой платы или просто купить.

    Наконец, можно начать разборку. Нанесите достаточное количество флюса на каждый компонент, который будет выпаян, и включите нагреватель. Надо подождать пока плата и чипы прогреются до 150-160 градусов, флюс начнет плавиться, но не кипеть. После этого, включите термофен с температурой около 400-450 градусов (плата майнера ооочень теплоёмкая, поэтому намного легче повредить микросхемы механически, недостаточно прогрев припой, чем перегрев их - но всё же, стоит быть аккуратным). Выпаивайте чипы и убирайте с платы один за другим. Особое внимание стоит уделить BGA чипам - *все* шары под ними должны быть расплавлены настолько, что чип свободно качается при легком нажатии. Очень легко повредить их механически, попытавшись поднять, но не прогрев достаточно.

    ![Board image after desoldering, front side](images/after_disassembly.jpg)

    Пока плата еще не остыла, надо выпаять разъем RJ45(Ethernet), предварительно добавив на его пины припой со свинцом.

    ![Removed components](images/disassembly_components.jpg)

    Та LSF0102DCTR, что в нижнем правом углу картинки - доп.микросхема, которую надо либо сдуть с другой платы, либо купить.

2. Подготовка и реболлинг чипов

    Это один из самых сложных шагов. В зависимости от качества, платы могут работать странно или вообще никак.

    Для начала, покройте ровным слоем свинцового припоя площадки на всех выпаянных чипах, убирая излишки. Очистите от флюса.

    ![Cleaned components](images/disassembly_clean_components.jpg)

    Для увеличения ровности площадок BGA чипов, их можно аккуратно потереть об бумагу(не наждачную!!!), положенную на ровную металлическую поверхность.

    Нанесите тонкий слой флюса на BGA микросхему, равномерно размазав лезвием.

    ![Reballing process](images/reballing_1.jpg)

    Аккуратно положите ее под трафарет, совмещая дырки с площадками насколько это возможно.

    ![Reballing process](images/reballing_2.jpg)

    Начните высыпать шары на чип, заполняя каждое отверстие одним. Если некоторые никак не хотят пролезать - можно аккуратно поставить вручную пинцетом.

    ![Reballing process](images/reballing_3.jpg)

    После этого, медленно прогрейте трафарет с микросхемой до 320-350 градусов. Будет видно, как шары плавятся и проседают глубже в отверстия. Если некоторые упорно болтаются на поверхности, можно очень аккуратно ткнуть их вниз пинцетом или еще чем нибудь острым. Если они начинают активно вылезать наверх на парах кипящего флюса - замедлите нагрев.

    ![Reballing process](images/reballing_4.jpg)

    Аккуратно извлеките микросхему с трафарета. Если один-два шара не припаялись, их можно аккуратно положить на площадки пинцетом. Добавьте разумное количество флюса и снова прогрейте чип на той же температуре. На этом шаге устраняются расхождения между площадками и трафаретом, которые могли возникнуть ранее.

    После того как все шары расплавились и встали на место, уберите нагрев и дайте остыть. Должна получиться поверхность с практически идеально выровненными по высоте шарами. Очистите весь флюс.

    ![Reballing process](images/reballing_5.jpg)

    Очистите трафарет спиртом, и повторите для всех BGA микросхем.

3. Впаивание микросхем и других больших SMD компонентов

    Возьмите новую плату, поместите на нагреватель при температуре 150-160 градусов. Покройте все нужные площадки тонким равномерным слоем припоя, используя паяльник(аккуратнее с паяльной маской между площадками BGA). Не забудьте о втором DDR чипе на другой стороне.

    ![ICs soldering process](images/icsoldering_1.jpg)
    ![ICs soldering process](images/icsoldering_2.jpg)

    Дайте остыть и очистите весь флюс. Нанесите новый тонкий слой на площадки, также лезвием.

    ![ICs soldering process](images/icsoldering_3.jpg)

    Разместите все микросхемы, кварцы и большие индуктивности на соответствующие места, КРОМЕ L3,L4,L1,L5, в соответствии с ключами, настолько точно насколько получится. Снова разогрейте на нижнем подогреве. Горячим воздухом с температурой 350-400 градусов, впаяйте все установленное, начиная с BGA, до полного расплавления всех шаров под ними.

    После этого, дополнительно нужно пропаять каждую сторону каждого QFN чипа паяльником, чтобы пины не висели в воздухе. По-хорошему проверить с помощью микроскопа или хотя бы лупы.

    ![ICs soldering process](images/icsoldering_4.jpg)

    Наконец, впаяйте оставшиеся индуктивности и микросхемы в SOIC корпусах, паяльником.

    ![ICs soldering process](images/icsoldering_5.jpg)
    ![ICs soldering process](images/icsoldering_6.jpg)


4. Сборка и тестирование источников питания

    Важно сделать это до запитки всей платы, потому что сломанный источник питания легко убьет ПЛИС или другие дорогие детали.

    Нужно впаять все компоненты из блока "POWER REGULATORS" на схеме, КРОМЕ FB14,FB13,FB10,FB11,FB12 чтобы отрезать питание от самой платы(можно открыть файл схемы и платы в разных окнах, и выбрать участок схемы мышью. На плате выбранные компоненты будут подсвечены).

    ![Testing power supply](images/powertest_1.jpg)

    Подайте 5 вольт на J1 с минимальным ограничением по току, она должна почти ничего не потреблять(< 0.01A). D4 "5V_IN" и D3 "PWR_OK" должны зажечься. Если нет, проверяйте цепи power good по очереди(TP3 - 1V, TP6 - 1.5V, TP2 - 1.25V, TP8 - 2.1V, TP11 - 2.5V), скорее всего один из QFN чипов плохо впаян. Дальше, проверьте сами напряжения на соответствующих площадках ферритовых фильтров(FB14 - 1V, FB13 - 1.8V, FB10 - 1.5V, FB11 - 2.5V, FB12 - 3.3V). Если с ними всё хорошо - источник питания работает нормально! Отключите плату и впаяйте оставшиеся FB14,FB13,FB10,FB11 и FB12, и продолжайте сборку.

    ![Testing power supply](images/powertest_2.jpg)

5. Завершение минимальной конфигурации для запуска SoC

    Чтобы запустить Zynq и начать с ним взаимодействовать, нужны следующие компоненты: блок "SOC POWER IN", блок "JTAG", блок "CLK", блок "FPGA STATUS LEDS", C89, SW1, R30, bootstrap часть из блока "EMMC+BOOTSTRAP": R81,R82,R83,R84,R79,R80,R85,R86,SW2,SW3. (Также очень рекоммендую установить все компоненты из обвязки Ethernet контроллера, иначе он может сгореть. На картинке я этого не сделал, и его пришлось менять)

    ![Testing zynq](images/zynqtest_1.jpg)
    ![Testing zynq](images/zynqtest_2.jpg)

    После этого, переключите режим загрузки на JTAG(BM1=0,BM2=0), подключите Platform Cable к JTAG разъёму и подайте питание. Плата должна потреблять около 0.5A@5V (позже выяснилось, что это из за дохлого Ethernet чипа, по хорошему должно быть порядка 0.17-0.22A), и желтый диод INIT_B LED должен светиться, отключаясь при нажатии на кнопку сброса. Попробуйте подключиться к плате через xsdb(больше об этом в секции Прошивка). Если она определяется - круто, по крайней мере Zynq и вероятно все необходимые шары правильно впаяны! Если нет - сначала проверьте тактовый сигнал на TP19, потом попробуйте подвигать JTAG коннектор, иногда помогает. Если это не помогло - скорее всего, чип плохо впаян. Поместите плату на нагреватель и АККУРАТНО демонтируйте Zynq, отреболльте и попробуйте снова. С какой то попытки он либо начнет работать, либо вы окончательно уничтожите дорожки под ним.

6. Запуск DDR

    Дальше надо впаять все что нужно для работы памяти: весь блок "DDR", и отдельные кондеры по линии питания - C115,C116,C117,C118,C152,C154. Также надо впаять конвертер уровней UART, чтобы взаимодействовать с платой(блок "UART", надо выбрать лишь один из R151 и R155, выбирая уровень UART 3.3V или 5V).

    ![Testing DDR](images/memtest_1.jpg)
    ![Testing DDR](images/memtest_2.jpg)

    Подключите JTAG и UART и подайте питание. Дальше, загрузите FSBL(см. секцию Прошивка). Он должел выполниться, вывести информацию о напряжениях и температурах, и остановиться на "Boot mode is JTAG". Если жалуется на проблемы с DDR - скорее всего, плохо впаяны чипы памяти. Удалите их, отреболльте и попробуйте снова. На этом этапе рекомендуется произвести memtest, чтобы убедиться в работоспособности всей памяти и оценить качество сигнала

    Нормальные значения для платы v1.1: нет ошибок при тестировании всех 511MB, 70-80% read eye и 60-70% write eye opening.


7. Завершение сборки

    На этом этапе, осталось впаять всё что не впаяно. Обратите особое внимание на R158/R161 в блоке I2C(выбор 5V или 3.3V I2C интерфейса, нельзя устанавливать их оба). Можно подключить батарейку или ионистор к BT1 если нужно хранить время при потере питания, но уберите D17, если она не перезаряжаемая. Если пиновые гребенки не нужны, можно их не впаивать или сделать это потом. R51/R52 тоже не обязательны. Защитные ESD диоды не обязательны, но очень рекоммендуемы(Я просто заказал их не в том корпусе, поэтому на картинках их нет... Проверяйте модели компонентов и корпуса перед заказом!)

    ![Final board image](images/final_board_f.jpg)
    ![Final board image](images/final_board_b.jpg)

    Теперь, можно проверить всё железо с помощью u-boot, чтобы убедиться что всё хорошо впаяно, и перейти к установке прошивки.

## Программная часть:


### Необходимое для сборки

Просто Linux машина с инструментами для сборки программ под архитектуру armhf (arm-none-eabi- компилятор, binutils и т.д.). На некоторых шагах, необходима среда Vivado. qemu для архитектуры ARM и специальные пакеты binfmt нужны чтобы запускать bash из корневой ФС и настраивать ее с хоста, больше об этом ниже.

### Сборка из исходников

Замените -j4 на количество ядер процессора. Готовые бинарные файлы для каждого этапа уже есть в папках, так что делать эти шаги опционально.

1. Сборка fsbl

    В software/BOOTLOADER/fsbl/src выполните:

    `make BOARD=a9mb CC=arm-none-eabi-gcc CFLAGS=-DFSBL_DEBUG_INFO`

    (если надо поменять настройки периферии PS части, например тактовую частоту того что идет в PL, сначала экспортируйте платформу в Vivado, откройте .xsa файл архиватором и скопируйте ps7_init.c, ps7_init.h, ps7_init_gpl.c, ps7_init_gpl.h из него в software/BOOTLOADER/fsbl/misc/a9mb)

    Собранный файл лежит в software/BOOTLOADER/fsbl/src/fsbl.elf

2. Сборка memtest

    Если нужен тест для DDR, соберите его в software/BOOTLOADER/memtest/src:

    `make BOARD=a9mb CC=arm-none-eabi-gcc`

    Собранный файл лежит в software/BOOTLOADER/memtest/src/memtest.elf

3. Сборка u-boot

    Из software/BOOTLOADER/u-boot выполните:

    `make CROSS_COMPILE=arm-none-eabi- ARCH=arm -j4 ind1r_a9_mb_defconfig`

    `make CROSS_COMPILE=arm-none-eabi- ARCH=arm -j4`

    (если нужно поменять главное дерево устройств, оно в software/BOOTLOADER/u-boot/arch/arm/dts/ind1r-a9-mb.dts, но рекоммендую менять его с помощью оверлеев для большей гибкости)

    Исполняемый файл будет в software/BOOTLOADER/u-boot/u-boot.elf

4. Сборка бинарного изображения загрузчика

    В software/BOOTLOADER выполните:

    `/PATH/TO/Vivado/bin/bootgen -image bootimg.bif -o boot.bin -w on`

    Получившийся boot.bin и есть готовая прошивка для SPI флешки.

5. Сборка загрузочного скрипта

    В software/BOOTLOADER/bootscript выполните

    `./mkbootscr.sh`

6. Подготовка битстрима ПЛИС

    Положите ваш .bit файл из Vivado(экспортированный или из Platform.xsa) в software/BOOTLOADER/fpga_bs, и выполните

    `./bit2bin.py -f INPUT.bit PL.bin`

7. Сборка оверлеев дерева устройств

    В software/KERNEL/dtb-overlays для каждого нужного оверлея(OVERLAY_NAME.dtso -> OVERLAY_NAME.dtbo) выполните:

    `./make_overlay.sh OVERLAY_NAME`

8. Сборка ядра

    В software/KERNEL/linux-xlnx выполните:

    `make CROSS_COMPILE=arm-none-eabi- ARCH=arm -j4 ind1r_a9_mb_defconfig`

    `make CROSS_COMPILE=arm-none-eabi- ARCH=arm -j4 zImage`

    Если также надо собрать модули:

    `make CROSS_COMPILE=arm-none-eabi- ARCH=arm -j4 modules`

    (чтобы их использовать, надо установить их в ROOTFS через

    `sudo make CROSS_COMPILE=arm-none-eabi- ARCH=arm -j4 INSTALL_MOD_PATH=../../ROOTFS/fs modules_install`

    после ее создания)

    Готовый образ ядра лежит в software/KERNEL/linux-xlnx/arch/arm/boot/zImage

9. Создание корневой ФС

    Если вы хотите создать чистую новую файловую систему Debian, выполните скрипт "bootstrap.sh" в software/ROOTFS. Он очистит содержимое директории ./fs и загрузит туда чистую с помощью debootstrap. Потом он выполнит вторую стадию загрузчика через chroot и даст вам командную строку для установки и настройки туда чего либо. Для того чтобы это работало, вам нужна система которая может выполнять бинарные файлы для разных архитектур, например через qemu. Больше информации можно найти в интернете (qemu-user-static,qemu-user-static-binfmt and qemu-system-arm).

    После завершения настройки, выполните "compress.sh" из software/ROOTFS чтобы создать образ-архив .tar.bz2. После этого можно спокойно удалять содержимое ./fs, и позже восстановить его через "decompress.sh ./fs".

    Если вам снова нужна командная строка для этой системы, ее можно получить через

    `sudo chroot ./fs/ /bin/bash`

    в software/ROOTFS. В ней можно менять конфигурацию, например пароли, настройку монтирования файловых систем, установить дополнительные пакеты и прочее. После модификации, запакуйте образ обратно через "compress.sh"


### Необходимое для прошивки

- ПК с Linux
- Базовый опыт работы с командной строкой, монтированием файловых систем
- Установленная среда Vivado с программой xsdb и аппаратным сервером.
- Редактор разделов с которым умеете работать(gparted,parted,fdisk и т.д.)
- Platform Cable USB(Xilinx-овский JTAG отладчик)
- Любой конвертер USB-UART(типа CH341) и программа для его использования (напр. dterm)
- USB Type-C кабель, чтобы подключать плату к компьютеру
- Можно прошить SPI флешку отдельно, с помощью любого программатора для BIOS чипов.

### Прошивка

1. Взаимодействие с платой

    После установки ZYNQ и минимальной обвязки для работы его и JTAG, можно начать взаимодействие с ним. Просто подключите Platform Cable к коннектору JTAG по ключу,как с любой отладочной платой с SoC от xilinx. Запустите xsdb из папки bin Vivado, и дождитесь загрузки. После появления поля ввода, введите "connect", и он сам запустить аппаратный сервер в фоне. Дальше, введите "targets". Для рабочей платы выведет:

    ```
    xsdb% targets                                                                                                                              
        2  APU                                                                                                                                   
            3  ARM Cortex-A9 MPCore #0 (Running)
            4  ARM Cortex-A9 MPCore #1 (Running)
        5  xc7z010
    ```

    Если вместо этого ошибка, проблема либо с Zynq, либо с подключением к нему. Чтобы исключить проблемы с подключением, попробуйте отключить и подключить отладчик к плате(ввести команду "disconnect" и убить все процессы hw_server в системе перед подключением, потом снова "connect"), подвигайте JTAG коннектор и проверье питание платы. Если всё еще не работает - скорее всего придётся реболлить чип.

2. Загрузка FSBL

    Чтобы загрузить FSBL через JTAG, убедитесь что правильный режим загрузки выбран через BM переключатели(оба в 0). Дальше, выберите первое ядро ЦП:

    ```
    xsdb% targets 3
    xsdb% targets                                                                                                                                                   
        2  APU
            3* ARM Cortex-A9 MPCore #0 (Running)
            4  ARM Cortex-A9 MPCore #1 (Running)
        5  xc7z010
    ```

    И выполните команду

    `rst; dow "/PATH/TO/zynq_a9_mb/software/BOOTLOADER/fsbl/src/fsbl.elf"; con`

    чтобы сбросить процессор, загрузить FSBL и выполнить его

    Процесс загрузки будет видно в окне xsdb:

    ```
    xsdb% rst; dow "~/KiCad/zynq_a9_mb/software/BOOTLOADER/fsbl/src/fsbl.elf"; con                                                                                  
    Downloading Program -- /home/indir/KiCad/zynq_a9_mb/software/BOOTLOADER/fsbl/src/fsbl.elf                                                                       
        section, .text: 0x00000000 - 0x0001af6f
        section, .handoff: 0x0001af70 - 0x0001afbb
        section, .init: 0x0001afbc - 0x0001afc7
        section, .fini: 0x0001afc8 - 0x0001afd3
        section, .rodata: 0x0001afd8 - 0x0001c81b
        section, .data: 0x0001c820 - 0x0001f983
        section, .eh_frame: 0x0001f984 - 0x0001f987
        section, .mmu_tbl: 0x00020000 - 0x00023fff
        section, .ARM.exidx: 0x00024000 - 0x00024007
        section, .init_array: 0x00024008 - 0x0002400f
        section, .fini_array: 0x00024010 - 0x00024013
        section, .rsa_ac: 0x00024014 - 0x0002503f
        section, .bss: 0x00025040 - 0x0002774b
        section, .drvcfg_sec: 0x0002774c - 0x0002774f
        section, .heap: 0x00027750 - 0x0002974f
        section, .stack: 0xffff0000 - 0xffffd3ff
    100%    0MB   0.1MB/s  00:01                                                                                                                                    
    Setting PC to Program Start Address 0x00000000
    Successfully downloaded /home/indir/KiCad/zynq_a9_mb/software/BOOTLOADER/fsbl/src/fsbl.elf
    Info: ARM Cortex-A9 MPCore #0 (target 3) Running                                                                                                                
    xsdb% 
    ```

    После этого, в UART терминале должно появится сообщение от него:

    ```
    Xilinx First Stage Boot Loader 
    Release 2025.2	Jan  8 2026-12:48:30
    Devcfg driver initialized 
    Silicon Version 3.1
    Chip temperature: 42.941742 C
    VCCINT: 0.983643 V
    VCCAUX: 1.784180 V
    VPVN: 0.000000 V
    VREFP: 0.000000 V
    VREFN: 0.000000 V
    VBRAM: 0.983643 V
    VCCPINT: 0.977051
    VCCPAUX: 1.783447
    VCCPDRO: 1.483154
    Boot mode is JTAG
    ```

    Если всё так, тогда память скорее всего работает исправно, поскольку FSBL ее инициализирует и быстро проверяет. Также он инициализирует всю периферию PS части. Плата готова к загрузке и выполнению следующей ступени загрузчика.

3. Загрузка memtest

    Этот инструмент проверяет работоспособность оперативной памяти и качество сигнала(read/write eye opening)

    После того как FSBL загрузился и выполнился, введите в xsdb:

    `stop; dow "/PATH/TO/zynq_a9_mb/software/BOOTLOADER/memtest/src/memtest.elf"; con`

    Он покажет прогресс:

    ```
    xsdb% stop; dow "~/KiCad/zynq_a9_mb/software/BOOTLOADER/memtest/src/memtest.elf"; con                                                                           
    Info: ARM Cortex-A9 MPCore #0 (target 3) Stopped at 0x1ffaf200 (Suspended)
    Downloading Program -- /home/indir/KiCad/zynq_a9_mb/software/BOOTLOADER/memtest/src/memtest.elf                                                                 
        section, .text: 0x00000000 - 0x00010acf
        section, .init: 0x00010ad0 - 0x00010adb
        section, .fini: 0x00010adc - 0x00010ae7
        section, .rodata: 0x00010ae8 - 0x00012467
        section, .data: 0x00012468 - 0x00015d8b
        section, .eh_frame: 0x00015d8c - 0x00015d8f
        section, .mmu_tbl: 0x00018000 - 0x0001bfff
        section, .ARM.exidx: 0x0001c000 - 0x0001c007
        section, .init_array: 0x0001c008 - 0x0001c00f
        section, .fini_array: 0x0001c010 - 0x0001c013
        section, .bss: 0x0001c018 - 0x0001d2df
        section, .heap: 0x0001d2e0 - 0x0001f2df
        section, .stack: 0xffff0000 - 0xffffd3ff
    100%    0MB   0.1MB/s  00:01                                                                                                                                    
    Setting PC to Program Start Address 0x00000000
    Successfully downloaded /home/indir/KiCad/zynq_a9_mb/software/BOOTLOADER/memtest/src/memtest.elf
    Info: ARM Cortex-A9 MPCore #0 (target 3) Running                                                                                                                
    xsdb% 
    ```

    И в UART терминале появится строка ввода команды:

    ```
    -----------------------------------------------------------------
    ------------------- ZYNQ DRAM DIAGNOSTICS TEST ------------------
    -----------------------------------------------------------------
    Select one of the options below:
    ## Memory Test ##
    Bus Width = 32,   XADC Temperature = 66.6117
        's' - Test 1MB length from address 0x100000
        '1' - Test 32MB length from address 0x100000
        '2' - Test 64MB length from address 0x100000
        '3' - Test 128MB length from address 0x100000
        '4' - Test 255MB length from address 0x100000
        '5' - Test 511MB length from address 0x100000
        '6' - Test 1023MB length from address 0x100000
    ## Read Data Eye Measurement Test
        'r' - Measure Read Data Eye
    ## Write Data Eye Measurement Test
        'i' - Measure Write Data Eye
        Other options for Write Eye Data Test:
            'f' - Fast Mode: Toggles Fast mode - ON/OFF
            'c' - Centre Mode: Toggles Centre mode - ON/OFF
            'e' - Vary the size of memory test for Read/Write Eye Measurement tests
    ## Data Cache Enable / Disable Option:
        'z' - D-Cache Enable / Disable
    ## Other options
        'v' - Verbose Mode ON/OFF
    ```

    Команды в целом говорят сами за себя. Проведите все необходимые тесты и перезагрузите плату, чтобы снова загрузить FSBL. Но осторожнее - когда Platform Cable подключен, он может неожиданно перезагружать плату в середине теста. Так что, чтобы не терять время, после появления командной строки memtest-а в UART-е, очень аккуратно отключите плату от JTAG кабеля, и только потом запускайте тесты.

4. Загрузка u-boot

    После загрузки FSBL выполните в xsdb следующее:

    `stop; dow "/PATH/TO/zynq_a9_mb/software/BOOTLOADER/u-boot/u-boot.elf"; con`

    Как и в других шагах, оно выведет ход загрузки:

    ```
    xsdb% stop; dow "~/KiCad/zynq_a9_mb/software/BOOTLOADER/u-boot/u-boot.elf"; con                                                                                 
    Info: ARM Cortex-A9 MPCore #0 (target 3) Stopped at 0x1af90 (Suspended)
    Downloading Program -- /home/indir/KiCad/zynq_a9_mb/software/BOOTLOADER/u-boot/u-boot.elf
        section, .data: 0x04000000 - 0x040d6707
    100%    0MB   0.1MB/s  00:12                                                                                                                                    
    Setting PC to Program Start Address 0x04000000
    Successfully downloaded /home/indir/KiCad/zynq_a9_mb/software/BOOTLOADER/u-boot/u-boot.elf
    Info: ARM Cortex-A9 MPCore #0 (target 3) Running                                                                                                                
    xsdb%    
    ```

    И потом процесс запуска в UART:
    ```
    env_init: Environment SPIFlash init done (ret=0)


    U-Boot 2025.01 (Jan 08 2026 - 12:59:01 +0300)

    CPU:   Zynq 7z010
    Silicon: v3.1
    Model: ZYNQ 7z010 mainboard based on Antminer S9
    DRAM:  ECC disabled 512 MiB
    Core:  32 devices, 20 uclasses, devicetree: separate
    MMC:   mmc@e0100000: 0, mmc@e0101000: 1
    Loading Environment from SPIFlash... SF: Detected mx25l1606e with page size 256 Bytes, erase size 4 KiB, total 2 MiB
    *** Warning - bad CRC, using default environment

    In:    serial@e0001000
    Out:   serial@e0001000
    Err:   serial@e0001000
    Net:   
    ZYNQ GEM: e000b000, mdio bus e000b000, phyaddr 1, interface rgmii-id

    Warning: ethernet@e000b000 (eth0) using random MAC address - 82:e2:a3:2c:f7:eb
    eth0: ethernet@e000b000
    a9mb >
    ```

5. Тестирование железа

    При желании, вы можете проверить работоспособность всех узлов платы из консоли u-boot.

    Тест eMMC:
    ```
    a9mb > mmc list
    mmc@e0100000: 0
    mmc@e0101000: 1
    a9mb > mmc dev 1
    switch to partitions #0, OK
    mmc1(part 0) is current device
    a9mb > mmc info
    Device: mmc@e0101000
    Manufacturer ID: 45
    OEM: 0
    Name: SEM08G 
    Bus Speed: 52000000
    Mode: MMC High Speed (52MHz)
    Rd Block Len: 512
    MMC version 4.5
    High Capacity: Yes
    Capacity: 7.3 GiB
    Bus Width: 4-bit
    Erase Group Size: 512 KiB
    HC WP Group Size: 16 MiB
    User Capacity: 7.3 GiB WRREL
    Boot Capacity: 2 MiB
    RPMB Capacity: 2 MiB
    Boot area 0 is not write protected
    Boot area 1 is not write protected
    a9mb > 
    ```

    Тест SD карты(вставьте одну и выберите нужный слот переключателем):

    ```
    a9mb > mmc dev 0
    switch to partitions #0, OK
    mmc0 is current device
    a9mb > mmc info
    Device: mmc@e0100000
    Manufacturer ID: 3
    OEM: 5344
    Name: SD32G 
    Bus Speed: 50000000
    Mode: SD High Speed (50MHz)
    Rd Block Len: 512
    SD version 3.0
    High Capacity: Yes
    Capacity: 29.7 GiB
    Bus Width: 4-bit
    Erase Group Size: 512 Bytes
    a9mb > 
    ```

    Тест SPI флешки:
    ```
    a9mb > sf probe
    SF: Detected mx25l1606e with page size 256 Bytes, erase size 4 KiB, total 2 MiB
    ```

    Тест ethernet(воткните кабель и замените ИП адрес на любой из подсети роутера, и ИП для пинга на ИП самого роутера):

    ```
    a9mb > setenv ipaddr 192.168.11.137
    a9mb > ping 192.168.11.1
    Using ethernet@e000b000 device
    host 192.168.11.1 is alive
    a9mb >
    ```

    Тест USB(плата должна быть подключена к ПК через USB-C кабель):

    ```
    a9mb > ums 0 mmc 1
    UMS: LUN 0, dev mmc 1, hwpart 0, sector 0x0, count 0xe90000
    ```
    После этого вы увидите как к компьютеру подключено устройство, предоставляющее функцию накопителя. Остановите с помощью CTRL+C.

    Проверка светодиодов MIO:

    ```
    a9mb > led led_d18 on
    a9mb > led led_d19 on
    a9mb > led led_d20 on
    ```
    Все три должны загореться.

    Проверка I2C и RTC:

    ```
    a9mb > i2c dev 0
    Setting bus to 0
    a9mb > i2c probe 0x68
    Valid chip addresses: 68
    ```

6. Сохранение FSBL и u-boot перманентно на SPI флешке

    Сначала, надо обнаружить и, главное, разблокировать SPI чип:

    ```
    a9mb > sf probe
    SF: Detected mx25l1606e with page size 256 Bytes, erase size 4 KiB, total 2 MiB
    a9mb > sf protect unlock 0 0x200000
    a9mb > 
    ```

    Дальше, нужно передать файл boot.bin на u-boot любым методом - ethernet,usb,sd карта,uart... Мне нравится способ через xmodem: введите "loadx" в u-boot и отправьте файл через UART терминал на компьютере(в dterm это делается через ctrl+] и команду "sx /PATH/TO/zynq_a9_mb/software/BOOTLOADER/boot.bin". Иногда работает только с файлами в рабочем каталоге.):

    ```
    loadx
    ## Ready for binary (xmodem) download to 0x00100000 at 115200 bps...
    C
    dterm> sx boot.bin
    Sending boot.bin, 8060 blocks: Give your local XMODEM receive command now.
    Bytes Sent:1031808   BPS:9779                            

    Transfer complete
    dterm> 
    ## Total Size      = 0x000fbe48 = 1031752 Bytes
    ## Start Addr      = 0x00100000
    a9mb >
    ```

    Наконец, очистите чип и загрузите новую прошивку:

    ```
    a9mb > sf erase 0 0x200000
    SF: 2097152 bytes @ 0x0 Erased: OK
    a9mb > sf write 0x00100000 0 0x000fbe48
    device 0 offset 0x0, size 0xfbe48
    SF: 1031752 bytes @ 0x0 Written: OK
    a9mb > 
    ```

    Теперь, можно переключить способ загрузки на SPI(BM1 в 1), и перезагрузить плату. Если все сделано правильно, вы увидите все те же сообщения от FSBL и получите консоль u-boot когда она загрузится:

    ```
    Xilinx First Stage Boot Loader 
    Release 2025.2	Dec 30 2025-00:29:30
    Devcfg driver initialized 
    Silicon Version 3.1
    Chip temperature: 56.476227 C
    VCCINT: 0.982910 V
    VCCAUX: 1.783447 V
    VPVN: 0.000000 V
    VREFP: 0.000000 V
    VREFN: 0.000000 V
    VBRAM: 0.982910 V
    VCCPINT: 0.976318
    VCCPAUX: 1.782715
    VCCPDRO: 1.483154
    Boot mode is QSPI
    Single Flash Information
    FlashID=0xC2 0x20 0x15
    MACRONIX 16M Bits
    QSPI is in single flash connection
    QSPI is in 2-bit mode
    QSPI Init Done 
    Flash Base Address: 0xFC000000
    Reboot status register: 0x60400000
    Multiboot Register: 0x0000C000
    Image Start Address: 0x00000000
    Partition Header Offset:0x00000C80
    Partition Count: 8589934594
    Partition Number: 8589934593
    Header Dump
    Image Word Len: 0x000359C2
    Data Word Len: 0x000359C2
    Partition Word Len:0x000359C2
    Load Addr: 0x04000000
    Exec Addr: 0x04000000
    Partition Start: 0x000095D0
    Partition Attr: 0x00000010
    Partition Checksum Offset: 0x00000000
    Section Count: 0x00000001
    Checksum: 0xF7F55A88
    Application
    PCAP:StatusReg = 0xF800700000000000
    PCAP:device ready
    PCAP:Clear done
    PCAP register dump:
    PCAP CTRL 0xF8007000: 0x4C00E07F
    PCAP LOCK 0xF8007004: 0x0000001A
    PCAP CONFIG 0xF8007008: 0x00000508
    PCAP ISR 0xF800700C: 0x00030000
    PCAP IMR 0xF8007010: 0xFFFFFFFF
    PCAP STATUS 0xF8007014: 0x00000A30
    PCAP DMA SRC ADDR 0xF8007018: 0xFC025741
    PCAP DMA DEST ADDR 0xF800701C: 0x04000001
    PCAP DMA SRC LEN 0xF8007020: 0x000359C2
    PCAP DMA DEST LEN 0xF8007024: 0x000359C2
    PCAP ROM SHADOW CTRL 0xF8007028: 0xFFFFFFFF
    PCAP MBOOT 0xF800702C: 0x0000C000
    PCAP SW ID 0xF8007030: 0x00000000
    PCAP UNLOCK 0xF8007034: 0x757BDF0D
    PCAP MCTRL 0xF8007080: 0x30800110
    ...................................................................................................
    DMA Done ! 
    Handoff Address: 0x04000000
    In FsblHookBeforeHandoff function 
    SUCCESSFUL_HANDOFF
    ���G�env_init: Environment SPIFlash init done (ret=0)


    U-Boot 2025.01 (Nov 30 2025 - 02:36:26 +0300)

    CPU:   Zynq 7z010
    Silicon: v3.1
    Model: ZYNQ 7z010 mainboard based on Antminer S9
    DRAM:  ECC disabled 512 MiB
    Core:  32 devices, 20 uclasses, devicetree: separate
    MMC:   mmc@e0100000: 0, mmc@e0101000: 1
    Loading Environment from SPIFlash... SF: Detected mx25l1606e with page size 256 Bytes, erase size 4 KiB, total 2 MiB
    *** Warning - bad CRC, using default environment

    In:    serial@e0001000
    Out:   serial@e0001000
    Err:   serial@e0001000
    Net:   
    ZYNQ GEM: e000b000, mdio bus e000b000, phyaddr 1, interface rgmii-id

    Warning: ethernet@e000b000 (eth0) using random MAC address - fa:de:01:9c:37:82
    eth0: ethernet@e000b000
    a9mb > 

    ```

    С этого момента, можно вообще отключить JTAG адаптер, до случая когда понадобится отладка программы или тест новой прошивки для ПЛИС.

7. Создание окружения

    Теперь надо создать окружение для u-boot, с некоторой конфигурацией.

    Сначала, найдите MAC с самого первого этапа сборки, когда вы скопировали его с рабочей платы майнера. Установите с помощью "setenv ethaddr MAC:ADDR:FROM:MINER"

    Далее, настройте параметры запуска и запишите на флешку:
    ```
    a9mb > setenv boot_targets "mmc1"
    a9mb > setenv bootcmd "bootflow scan"
    a9mb > setenv bootargs "root=/dev/mmcblk1p2 rw rootfstype=ext4"
    a9mb > saveenv
    Saving Environment to SPIFlash... Erasing SPI flash...Writing to SPI flash...done
    OK
    a9mb > 
    ```

    Теперь при перезагрузке он попытается выполнить boot.scr с первого раздела eMMC автоматически, но поскольку разделов пока нет, просто покажет ту же консоль u-boot.

8. Создание и загрузка ядра и rootfs

   Этот шаг, опять же, можно сделать в другом месте, создав образ и доставив его в u-boot любым способом: sd картой, через интернет, даже через UART если вам совсем не дорого время... Я предпочитаю делать это через USB поскольку, как мне кажется, это самый прямой и быстрый способ.

    Для начала, подключите плату по USB-C кабелю к компьютеру, и выполните уже знакомую UMS команду, давая компьютеру доступ к eMMC:

    ```
    a9mb > ums 0 mmc 1
    UMS: LUN 0, dev mmc 1, hwpart 0, sector 0x0, count 0xe90000
    ```

   Теперь, Linux должен определить ее как один из жестких дисков. Надо создать таблицу разделов и сами разделы. Предпочитаю графическую утилиту gparted, потому что знаю ее - можно пользоватся любой, типа fdisk или parted.

    После запуска gparted, выберите нужное устройство через Файл->Устройства:

    ![Gparted screenshot](images/gparted_1.png)

    Создайте таблицу разделов типа msdos в Устройство->Создать таблицу разделов. Согласитесь с тем, что оно сотрет все данные. Теперь, создайте два раздела - первый на 64mb, файловая система FAT32, метка "BOOT"; вторая занимает оставшийся диск, файловая система ext4, метка "ROOT". Примените изменения с помощью кнопки с галочкой.

    ![Gparted screenshot](images/gparted_2.png)
    ![Gparted screenshot](images/gparted_3.png)
    ![Gparted screenshot](images/gparted_4.png)

    После этих операций, ОС будет видеть эти разделы, и их можно будет монтировать, чтобы работать с содержимым.

    Сначала, примонтируйте раздел "BOOT". Он будет пустым. Создайте папку "dtbo". Скопируйте туда файл "/PATH/TO/zynq_a9_mb/software/KERNEL/linux-xlnx/arch/arm/boot/zImage". Скопируйте "/PATH/TO/zynq_a9_mb/software/BOOTLOADER/bootscript/boot.scr". Скопируйте битстрим ПЛИС из "/PATH/TO/zynq_a9_mb/software/BOOTLOADER/fpga_bs/PL.bin". В папке "dtbo", создайте файл "enabled.txt", который будет хранить список включенных оверлеев device tree, в формате "enabled_dtbos=dtbo1.dtbo dtbo2.dtbo....". Например, "enabled_dtbos=hdmi_output.dtbo". Потом, в эту же папку скопируйте все нужные и включенные оверлеи из "/PATH/TO/zynq_a9_mb/software/KERNEL/dtb-overlays/".

    ![Boot partition contents](images/boot_contents.png)

    Потом, можно размонитровать раздел "BOOT" и примонтировать следующий, "ROOT". Чтобы загрузить корневую файловую систему, выполните в папке "/PATH/TO/zynq_a9_mb/software/ROOTFS/" скрипт "./decompress.sh /PATH/TO/ROOT/PARTITION/MOUNTPOINT". Ему нужны права root, чтобы загрузить файлы с правильными правами. Осторожнее указывайте правильный путь к точке монтирования раздела, так как с root-доступом, оно может скопировать файлы куда угодно. Распаковка и копирование займет некоторое время, прогресс будет отображаться в виде списка уже обработанных файлов. После завершения, выполните "sync" чтобы записать оставшиеся в буфере данные, и размонтируйте раздел "ROOT".

    ![Root partition contents](images/root_contents.png)

    Теперь, можно завершить команду UMS в u-boot, нажав CTRL+C, и перезагрузить плату выполнив "reset". Если всё сделано верно, вы увидите как u-boot автоматически выполняет загрузочный скрипт, загружает прошивку в FPGA, загружает оверлеи DT и запускает ядро linux, которое наконец должно запустить систему Debian, и вы увидите строку ввода логина и пароля. Для поставляемой rootfs, стандартные логин и пароль - root:root. Поменяйте как можно быстрее, если плата имеет доступ в интернет. Также, по умолчанию на ней запущен SSH сервер и VNC сервер без пароля в фоне. Если VNC не нужен, его можно отключить через "systemctl stop x11vnc; systemctl disable x11vnc". Если графическая подсистема вообще не нужна, ее тоже можно отключить чтобы сохранить память, через "systemctl stop nodm; systemctl disable nodm". Также, по умолчанию все логи хранятся только в оперативной памяти через tmpfs, чтобы продлить жизнь eMMC. Если это не требуется, поменяйте в /etc/fstab.

    Наконец, у вас есть полностью рабочая плата, которую можно использовать в различных проектах!

    ![Neowofetch](images/neowofetch.png)
