[blok_shema.drawio](https://github.com/user-attachments/files/34103808/blok_shema.drawio)[README_snippet.md](https://github.com/user-attachments/files/34103799/README_snippet.md)# Мониторинг реактора: температура сырья

## 📝 Описание проекта

Программа предназначена для мониторинга технологического процесса. Она преобразует измеренное значение температуры сырья X в расчётный показатель Q(X), выполняет оперативный контроль относительно верхней контрольной границы UCL и выводит результат пользователю.

## ⚙️ Входные данные

- **Параметр X:** температура сырья, °C.
- **Рабочий диапазон:** от 10 до 70 °C.
- **Верхняя контрольная граница:** UCL = 64.32.
- **Количество измерений по условию:** N = 50.
- **Индивидуальный вариант:** № 25.

## 📐 Формула преобразования Q = f(X)

Расчёт показателя выполняется по кусочно-заданной функции:

\[
Q(X)=
\begin{cases}
3(X-25)+10, & X<25,\\
2\sqrt{X-35+10}+45, & 25\le X\le45,\\
\dfrac{(X-45)^2}{4}+55, & X>45.
\end{cases}
\]

## 🧮 Ручной расчёт

**1. X = 20**, первый участок:

Q(20) = 3(20 − 25) + 10 = −15 + 10 = −5.

**2. X = 43**, второй участок:

Q(43) = 2√(43 − 35 + 10) + 45 = 2√18 + 45 ≈ 53.4853.

**3. X = 50**, третий участок:

Q(50) = (50 − 45)² / 4 + 55 = 25 / 4 + 55 = 61.25.

## 🚦 Оперативный контроль

Результат сравнивается с верхней контрольной границей UCL = 64.32.

- При Q(X) > UCL программа выводит предупреждение.
- При Q(X) ≤ UCL программа сообщает, что верхняя контрольная граница не превышена.

## 📊 Блок-схема алгоритма

Ввод X → выбор участка функции → вычисление Q(X) → сравнение с UCL → вывод результата.

[Uploadin<mxfile host="app.diagrams.net"><diagram name="Блок-схема" id="d1"><mxGraphModel dx="1100" dy="800" grid="1" gridSize="10" guides="1" page="1" pageWidth="1100" pageHeight="1550"><root><mxCell id="0"/><mxCell id="1" parent="0"/><mxCell id="s" value="Начало" style="rounded=1;arcSize=50;fillColor=#cfe2fb;strokeColor=#222;whiteSpace=wrap;html=1;fontSize=16;strokeWidth=1.5;" vertex="1" parent="1"><mxGeometry x="357" y="32" width="280" height="86" as="geometry"/></mxCell><mxCell id="i" value="Ввод температуры&lt;br&gt;&lt;i&gt;X&lt;/i&gt; (10...70 °C)" style="shape=parallelogram;perimeter=parallelogramPerimeter;fillColor=#cfe2fb;strokeColor=#222;whiteSpace=wrap;html=1;fontSize=16;strokeWidth=1.5;" vertex="1" parent="1"><mxGeometry x="298" y="160" width="397" height="108" as="geometry"/></mxCell><mxCell id="d1" value="&lt;i&gt;X&lt;/i&gt; &amp;lt; 25?" style="rhombus;fillColor=#fde6bd;strokeColor=#222;whiteSpace=wrap;html=1;fontSize=16;strokeWidth=1.5;" vertex="1" parent="1"><mxGeometry x="265" y="322" width="246" height="128" as="geometry"/></mxCell><mxCell id="d2" value="&lt;i&gt;X&lt;/i&gt; ≤ 45?" style="rhombus;fillColor=#fde6bd;strokeColor=#222;whiteSpace=wrap;html=1;fontSize=16;strokeWidth=1.5;" vertex="1" parent="1"><mxGeometry x="559" y="449" width="248" height="137" as="geometry"/></mxCell><mxCell id="b1" value="&lt;i&gt;Q&lt;/i&gt; = 3(&lt;i&gt;X&lt;/i&gt; − 25) + 10" style="rounded=0;fillColor=#dcefd0;strokeColor=#222;whiteSpace=wrap;html=1;fontSize=16;strokeWidth=1.5;" vertex="1" parent="1"><mxGeometry x="29" y="493" width="268" height="94" as="geometry"/></mxCell><mxCell id="b2" value="&lt;i&gt;Q&lt;/i&gt; = 2√(&lt;i&gt;X&lt;/i&gt; − 25) + 45" style="rounded=0;fillColor=#dcefd0;strokeColor=#222;whiteSpace=wrap;html=1;fontSize=16;strokeWidth=1.5;" vertex="1" parent="1"><mxGeometry x="367" y="618" width="286" height="101" as="geometry"/></mxCell><mxCell id="b3" value="&lt;i&gt;Q&lt;/i&gt; = (&lt;i&gt;X&lt;/i&gt; − 45)&lt;sup&gt;2&lt;/sup&gt; / 4 + 55" style="rounded=0;fillColor=#dcefd0;strokeColor=#222;whiteSpace=wrap;html=1;fontSize=16;strokeWidth=1.5;" vertex="1" parent="1"><mxGeometry x="729" y="618" width="269" height="106" as="geometry"/></mxCell><mxCell id="o" value="Вывод &lt;i&gt;Q&lt;/i&gt;" style="shape=parallelogram;perimeter=parallelogramPerimeter;fillColor=#cfe2fb;strokeColor=#222;whiteSpace=wrap;html=1;fontSize=16;strokeWidth=1.5;" vertex="1" parent="1"><mxGeometry x="333" y="843" width="330" height="76" as="geometry"/></mxCell><mxCell id="d3" value="&lt;i&gt;Q&lt;/i&gt; &amp;gt; 64,32?" style="rhombus;fillColor=#fde6bd;strokeColor=#222;whiteSpace=wrap;html=1;fontSize=16;strokeWidth=1.5;" vertex="1" parent="1"><mxGeometry x="353" y="972" width="278" height="149" as="geometry"/></mxCell><mxCell id="o1" value="Вывод &lt;i&gt;Q&lt;/i&gt;&lt;br&gt;и сообщения&lt;br&gt;о превышении UCL" style="shape=parallelogram;perimeter=parallelogramPerimeter;fillColor=#cfe2fb;strokeColor=#222;whiteSpace=wrap;html=1;fontSize=16;strokeWidth=1.5;" vertex="1" parent="1"><mxGeometry x="29" y="1132" width="365" height="140" as="geometry"/></mxCell><mxCell id="o2" value="Вывод &lt;i&gt;Q&lt;/i&gt;&lt;br&gt;и сообщения&lt;br&gt;о норме" style="shape=parallelogram;perimeter=parallelogramPerimeter;fillColor=#cfe2fb;strokeColor=#222;whiteSpace=wrap;html=1;fontSize=16;strokeWidth=1.5;" vertex="1" parent="1"><mxGeometry x="617" y="1138" width="365" height="139" as="geometry"/></mxCell><mxCell id="f" value="Конец" style="rounded=1;arcSize=50;fillColor=#cfe2fb;strokeColor=#222;whiteSpace=wrap;html=1;fontSize=16;strokeWidth=1.5;" vertex="1" parent="1"><mxGeometry x="351" y="1389" width="290" height="93" as="geometry"/></mxCell><mxCell id="e1" value="" style="edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;fontSize=14;exitX=0.5;exitY=1;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" edge="1" parent="1" source="s" target="i"><mxGeometry relative="1" as="geometry"></mxGeometry></mxCell><mxCell id="e2" value="" style="edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;fontSize=14;exitX=0.45;exitY=1;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" edge="1" parent="1" source="i" target="d1"><mxGeometry relative="1" as="geometry"></mxGeometry></mxCell><mxCell id="e3" value="Да" style="edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;fontSize=14;exitX=0;exitY=0.5;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" edge="1" parent="1" source="d1" target="b1"><mxGeometry relative="1" as="geometry"></mxGeometry></mxCell><mxCell id="e4" value="Нет" style="edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;fontSize=14;exitX=1;exitY=0.5;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" edge="1" parent="1" source="d1" target="d2"><mxGeometry relative="1" as="geometry"></mxGeometry></mxCell><mxCell id="e5" value="Да" style="edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;fontSize=14;exitX=0;exitY=0.5;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" edge="1" parent="1" source="d2" target="b2"><mxGeometry relative="1" as="geometry"></mxGeometry></mxCell><mxCell id="e6" value="Нет" style="edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;fontSize=14;exitX=1;exitY=0.5;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" edge="1" parent="1" source="d2" target="b3"><mxGeometry relative="1" as="geometry"></mxGeometry></mxCell><mxCell id="e7" value="" style="edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;fontSize=14;exitX=0.5;exitY=1;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" edge="1" parent="1" source="b1" target="o"><mxGeometry relative="1" as="geometry"><Array as="points"><mxPoint x="163" y="767"/><mxPoint x="498" y="767"/></Array></mxGeometry></mxCell><mxCell id="e8" value="" style="edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;fontSize=14;exitX=0.5;exitY=1;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" edge="1" parent="1" source="b2" target="o"><mxGeometry relative="1" as="geometry"></mxGeometry></mxCell><mxCell id="e9" value="" style="edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;fontSize=14;exitX=0.5;exitY=1;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" edge="1" parent="1" source="b3" target="o"><mxGeometry relative="1" as="geometry"><Array as="points"><mxPoint x="863" y="767"/><mxPoint x="498" y="767"/></Array></mxGeometry></mxCell><mxCell id="e10" value="" style="edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;fontSize=14;exitX=0.5;exitY=1;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" edge="1" parent="1" source="o" target="d3"><mxGeometry relative="1" as="geometry"></mxGeometry></mxCell><mxCell id="e11" value="Да" style="edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;fontSize=14;exitX=0;exitY=0.5;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" edge="1" parent="1" source="d3" target="o1"><mxGeometry relative="1" as="geometry"></mxGeometry></mxCell><mxCell id="e12" value="Нет" style="edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;fontSize=14;exitX=1;exitY=0.5;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" edge="1" parent="1" source="d3" target="o2"><mxGeometry relative="1" as="geometry"></mxGeometry></mxCell><mxCell id="e13" value="" style="edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;fontSize=14;exitX=0.5;exitY=1;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" edge="1" parent="1" source="o1" target="f"><mxGeometry relative="1" as="geometry"><Array as="points"><mxPoint x="211" y="1331"/><mxPoint x="496" y="1331"/></Array></mxGeometry></mxCell><mxCell id="e14" value="" style="edgeStyle=orthogonalEdgeStyle;rounded=0;html=1;fontSize=14;exitX=0.5;exitY=1;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" edge="1" parent="1" source="o2" target="f"><mxGeometry relative="1" as="geometry"><Array as="points"><mxPoint x="799" y="1331"/><mxPoint x="496" y="1331"/></Array></mxGeometry></mxCell></root></mxGraphModel></diagram></mxfile>g blok_shema.drawio…]()


## 💻 Структура программы

Программа реализована на языке C.

- `Q(double X)` — вычисление показателя Q(X) по трём участкам.
- `main()` — настройка локали, ввод температуры, вызов функции расчёта и вывод результата оперативного контроля.

Используются условные операторы `if / else if / else`, функции ввода-вывода и математическая функция `sqrt()` из библиотеки `<math.h>`.


## 👨‍🎓 Информация о разработчике

- **Студент:** Любых Егор Евгеньевич
- **Группа:** бИЦТ-261
- **Дисциплина:** Основы программирования и алгоритмизации
- **Руководитель:** О. В. Минакова
- **Индивидуальный вариант:** № 25
