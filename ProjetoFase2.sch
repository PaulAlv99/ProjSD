<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="spartan6" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="XLXN_11(3:0)" />
        <signal name="XLXN_12(3:0)" />
        <signal name="XLXN_13(3:0)" />
        <signal name="XLXN_14(3:0)" />
        <signal name="XLXN_15(3:0)" />
        <signal name="XLXN_16(3:0)" />
        <signal name="Dia(2:0)" />
        <signal name="Matricula(23:0)" />
        <signal name="Barreira" />
        <signal name="MatrVal" />
        <signal name="XLXN_28" />
        <signal name="XLXN_29" />
        <signal name="CLK" />
        <signal name="LED" />
        <signal name="matricula1(23:0)" />
        <signal name="matricula2(23:0)" />
        <port polarity="Input" name="Dia(2:0)" />
        <port polarity="Input" name="Matricula(23:0)" />
        <port polarity="Output" name="Barreira" />
        <port polarity="Output" name="MatrVal" />
        <port polarity="Output" name="CLK" />
        <port polarity="Output" name="LED" />
        <port polarity="Output" name="matricula1(23:0)" />
        <port polarity="Output" name="matricula2(23:0)" />
        <blockdef name="OR">
            <timestamp>2022-12-8T22:44:57</timestamp>
            <rect width="256" x="64" y="-128" height="128" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="384" y1="-96" y2="-96" x1="320" />
        </blockdef>
        <blockdef name="Barr2_fechar6">
            <timestamp>2022-12-8T22:13:49</timestamp>
            <rect width="256" x="64" y="-128" height="128" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="384" y1="-96" y2="-96" x1="320" />
        </blockdef>
        <blockdef name="CLOCK">
            <timestamp>2022-12-8T19:15:11</timestamp>
            <rect width="256" x="64" y="-64" height="64" />
            <line x2="384" y1="-32" y2="-32" x1="320" />
        </blockdef>
        <blockdef name="Matricula_Dia">
            <timestamp>2022-12-8T19:10:30</timestamp>
            <rect width="256" x="64" y="-384" height="384" />
            <rect width="64" x="0" y="-364" height="24" />
            <line x2="0" y1="-352" y2="-352" x1="64" />
            <rect width="64" x="320" y="-364" height="24" />
            <line x2="384" y1="-352" y2="-352" x1="320" />
            <rect width="64" x="320" y="-300" height="24" />
            <line x2="384" y1="-288" y2="-288" x1="320" />
            <rect width="64" x="320" y="-236" height="24" />
            <line x2="384" y1="-224" y2="-224" x1="320" />
            <rect width="64" x="320" y="-172" height="24" />
            <line x2="384" y1="-160" y2="-160" x1="320" />
            <rect width="64" x="320" y="-108" height="24" />
            <line x2="384" y1="-96" y2="-96" x1="320" />
            <rect width="64" x="320" y="-44" height="24" />
            <line x2="384" y1="-32" y2="-32" x1="320" />
        </blockdef>
        <blockdef name="Projeto">
            <timestamp>2022-12-8T19:8:40</timestamp>
            <line x2="384" y1="32" y2="32" x1="320" />
            <rect width="64" x="0" y="-428" height="24" />
            <line x2="0" y1="-416" y2="-416" x1="64" />
            <rect width="64" x="0" y="-364" height="24" />
            <line x2="0" y1="-352" y2="-352" x1="64" />
            <rect width="64" x="0" y="-300" height="24" />
            <line x2="0" y1="-288" y2="-288" x1="64" />
            <rect width="64" x="0" y="-236" height="24" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <rect width="64" x="0" y="-172" height="24" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <rect width="64" x="0" y="-108" height="24" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="384" y1="-224" y2="-224" x1="320" />
            <rect width="256" x="64" y="-448" height="512" />
        </blockdef>
        <blockdef name="Guarda_matriculas">
            <timestamp>2022-12-9T12:12:11</timestamp>
            <rect width="336" x="64" y="-192" height="192" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <rect width="64" x="400" y="-172" height="24" />
            <line x2="464" y1="-160" y2="-160" x1="400" />
            <rect width="64" x="400" y="-44" height="24" />
            <line x2="464" y1="-32" y2="-32" x1="400" />
        </blockdef>
        <blockdef name="LED_a_piscar">
            <timestamp>2022-12-9T14:52:33</timestamp>
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="384" y1="-96" y2="-96" x1="320" />
            <rect width="256" x="64" y="-128" height="192" />
        </blockdef>
        <block symbolname="OR" name="XLXI_1">
            <blockpin signalname="XLXN_28" name="Barreira1" />
            <blockpin signalname="XLXN_29" name="Barreira2" />
            <blockpin signalname="Barreira" name="Barreira" />
        </block>
        <block symbolname="Barr2_fechar6" name="XLXI_2">
            <blockpin signalname="MatrVal" name="MatrVal" />
            <blockpin signalname="CLK" name="CLK" />
            <blockpin signalname="XLXN_29" name="Barreira2" />
        </block>
        <block symbolname="CLOCK" name="XLXI_9">
            <blockpin signalname="CLK" name="CLK" />
        </block>
        <block symbolname="Matricula_Dia" name="XLXI_11">
            <blockpin signalname="Matricula(23:0)" name="Matricula(23:0)" />
            <blockpin signalname="XLXN_16(3:0)" name="F(3:0)" />
            <blockpin signalname="XLXN_15(3:0)" name="E(3:0)" />
            <blockpin signalname="XLXN_14(3:0)" name="D(3:0)" />
            <blockpin signalname="XLXN_13(3:0)" name="C(3:0)" />
            <blockpin signalname="XLXN_12(3:0)" name="B(3:0)" />
            <blockpin signalname="XLXN_11(3:0)" name="A(3:0)" />
        </block>
        <block symbolname="Projeto" name="XLXI_12">
            <blockpin signalname="XLXN_11(3:0)" name="A(3:0)" />
            <blockpin signalname="XLXN_12(3:0)" name="B(3:0)" />
            <blockpin signalname="XLXN_13(3:0)" name="C(3:0)" />
            <blockpin signalname="XLXN_14(3:0)" name="D(3:0)" />
            <blockpin signalname="XLXN_15(3:0)" name="E(3:0)" />
            <blockpin signalname="XLXN_16(3:0)" name="F(3:0)" />
            <blockpin signalname="Dia(2:0)" name="Dia(2:0)" />
            <blockpin signalname="MatrVal" name="MatrVal" />
            <blockpin signalname="XLXN_28" name="Barreira1" />
        </block>
        <block symbolname="Guarda_matriculas" name="XLXI_15">
            <blockpin signalname="MatrVal" name="MatrVal" />
            <blockpin signalname="CLK" name="CLK" />
            <blockpin signalname="Matricula(23:0)" name="Matricula(23:0)" />
            <blockpin signalname="matricula1(23:0)" name="matricula1(23:0)" />
            <blockpin signalname="matricula2(23:0)" name="matricula2(23:0)" />
        </block>
        <block symbolname="LED_a_piscar" name="XLXI_17">
            <blockpin signalname="Barreira" name="Barreira" />
            <blockpin signalname="CLK" name="CLK" />
            <blockpin signalname="LED" name="LED" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <instance x="1392" y="1200" name="XLXI_1" orien="R0">
        </instance>
        <instance x="800" y="1616" name="XLXI_2" orien="R0">
        </instance>
        <branch name="XLXN_11(3:0)">
            <wire x2="1104" y1="784" y2="784" x1="880" />
            <wire x2="1104" y1="448" y2="784" x1="1104" />
            <wire x2="1328" y1="448" y2="448" x1="1104" />
        </branch>
        <branch name="XLXN_12(3:0)">
            <wire x2="1088" y1="720" y2="720" x1="880" />
            <wire x2="1088" y1="512" y2="720" x1="1088" />
            <wire x2="1328" y1="512" y2="512" x1="1088" />
        </branch>
        <branch name="XLXN_13(3:0)">
            <wire x2="1072" y1="656" y2="656" x1="880" />
            <wire x2="1072" y1="576" y2="656" x1="1072" />
            <wire x2="1328" y1="576" y2="576" x1="1072" />
        </branch>
        <branch name="XLXN_14(3:0)">
            <wire x2="896" y1="592" y2="592" x1="880" />
            <wire x2="896" y1="592" y2="640" x1="896" />
            <wire x2="1328" y1="640" y2="640" x1="896" />
        </branch>
        <branch name="XLXN_15(3:0)">
            <wire x2="1056" y1="528" y2="528" x1="880" />
            <wire x2="1056" y1="528" y2="704" x1="1056" />
            <wire x2="1328" y1="704" y2="704" x1="1056" />
        </branch>
        <branch name="XLXN_16(3:0)">
            <wire x2="1120" y1="464" y2="464" x1="880" />
            <wire x2="1120" y1="464" y2="768" x1="1120" />
            <wire x2="1328" y1="768" y2="768" x1="1120" />
        </branch>
        <instance x="496" y="816" name="XLXI_11" orien="R0">
        </instance>
        <instance x="1328" y="864" name="XLXI_12" orien="R0">
        </instance>
        <branch name="Dia(2:0)">
            <wire x2="1312" y1="896" y2="896" x1="272" />
            <wire x2="1328" y1="832" y2="832" x1="1312" />
            <wire x2="1312" y1="832" y2="896" x1="1312" />
        </branch>
        <branch name="Matricula(23:0)">
            <wire x2="416" y1="560" y2="560" x1="288" />
            <wire x2="288" y1="560" y2="1856" x1="288" />
            <wire x2="2096" y1="1856" y2="1856" x1="288" />
            <wire x2="416" y1="464" y2="464" x1="368" />
            <wire x2="496" y1="464" y2="464" x1="416" />
            <wire x2="416" y1="464" y2="560" x1="416" />
        </branch>
        <branch name="Barreira">
            <wire x2="1792" y1="1104" y2="1104" x1="1776" />
            <wire x2="1872" y1="1104" y2="1104" x1="1792" />
            <wire x2="2032" y1="1104" y2="1104" x1="1872" />
            <wire x2="1872" y1="1088" y2="1088" x1="1808" />
            <wire x2="1872" y1="1088" y2="1104" x1="1872" />
            <wire x2="1808" y1="1088" y2="1328" x1="1808" />
            <wire x2="1872" y1="1328" y2="1328" x1="1808" />
        </branch>
        <branch name="MatrVal">
            <wire x2="784" y1="944" y2="1520" x1="784" />
            <wire x2="800" y1="1520" y2="1520" x1="784" />
            <wire x2="1888" y1="944" y2="944" x1="784" />
            <wire x2="1888" y1="640" y2="640" x1="1712" />
            <wire x2="2032" y1="640" y2="640" x1="1888" />
            <wire x2="1888" y1="640" y2="656" x1="1888" />
            <wire x2="1888" y1="656" y2="944" x1="1888" />
            <wire x2="1888" y1="624" y2="624" x1="1824" />
            <wire x2="1888" y1="624" y2="640" x1="1888" />
            <wire x2="1824" y1="624" y2="1728" x1="1824" />
            <wire x2="2096" y1="1728" y2="1728" x1="1824" />
        </branch>
        <branch name="XLXN_28">
            <wire x2="1328" y1="1008" y2="1104" x1="1328" />
            <wire x2="1392" y1="1104" y2="1104" x1="1328" />
            <wire x2="1792" y1="1008" y2="1008" x1="1328" />
            <wire x2="1792" y1="896" y2="896" x1="1712" />
            <wire x2="1792" y1="896" y2="1008" x1="1792" />
        </branch>
        <branch name="XLXN_29">
            <wire x2="1280" y1="1520" y2="1520" x1="1184" />
            <wire x2="1280" y1="1168" y2="1520" x1="1280" />
            <wire x2="1392" y1="1168" y2="1168" x1="1280" />
        </branch>
        <branch name="CLK">
            <wire x2="688" y1="1392" y2="1392" x1="240" />
            <wire x2="688" y1="1392" y2="1584" x1="688" />
            <wire x2="800" y1="1584" y2="1584" x1="688" />
            <wire x2="688" y1="1584" y2="1792" x1="688" />
            <wire x2="2096" y1="1792" y2="1792" x1="688" />
            <wire x2="1872" y1="1392" y2="1392" x1="688" />
            <wire x2="688" y1="1584" y2="1584" x1="624" />
        </branch>
        <instance x="240" y="1616" name="XLXI_9" orien="R0">
        </instance>
        <iomarker fontsize="28" x="368" y="464" name="Matricula(23:0)" orien="R180" />
        <iomarker fontsize="28" x="2032" y="640" name="MatrVal" orien="R0" />
        <iomarker fontsize="28" x="272" y="896" name="Dia(2:0)" orien="R180" />
        <iomarker fontsize="28" x="240" y="1392" name="CLK" orien="R180" />
        <iomarker fontsize="28" x="2032" y="1104" name="Barreira" orien="R0" />
        <branch name="LED">
            <wire x2="2288" y1="1328" y2="1328" x1="2256" />
        </branch>
        <iomarker fontsize="28" x="2288" y="1328" name="LED" orien="R0" />
        <instance x="2096" y="1888" name="XLXI_15" orien="R0">
        </instance>
        <branch name="matricula1(23:0)">
            <wire x2="2592" y1="1728" y2="1728" x1="2560" />
        </branch>
        <iomarker fontsize="28" x="2592" y="1728" name="matricula1(23:0)" orien="R0" />
        <branch name="matricula2(23:0)">
            <wire x2="2592" y1="1856" y2="1856" x1="2560" />
        </branch>
        <iomarker fontsize="28" x="2592" y="1856" name="matricula2(23:0)" orien="R0" />
        <instance x="1872" y="1424" name="XLXI_17" orien="R0">
        </instance>
    </sheet>
</drawing>