[blockscheme (3).drawio](https://github.com/user-attachments/files/34102955/blockscheme.3.drawio)# Мониторинг реактора: температура сырья

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
[Uploading blockscheme (3)<mxfile host="app.diagrams.net"><diagram name="Блок-схема" id="d1"><mxGraphModel dx="1200" dy="800" grid="1" gridSize="10" guides="1" tooltips="1" connect="1" arrows="1" fold="1" page="1" pageScale="1" pageWidth="1654" pageHeight="1169"><root><mxCell id="0"/><mxCell id="1" parent="0"/><mxCell id="m1" value="Начало" style="rounded=1;arcSize=50;fillColor=#d5e8d4;strokeColor=#82b366;whiteSpace=wrap;html=0;fontSize=12;" vertex="1" parent="1"><mxGeometry x="180" y="20" width="240" height="40" as="geometry"/></mxCell><mxCell id="m2" value="UCL = 64.32" style="rounded=0;fillColor=#dae8fc;strokeColor=#6c8ebf;whiteSpace=wrap;html=0;fontSize=12;" vertex="1" parent="1"><mxGeometry x="180" y="100" width="240" height="50" as="geometry"/></mxCell><mxCell id="m3" value="Вывод: «Введите температуру сырья X (10...70 °C)»" style="shape=parallelogram;perimeter=parallelogramPerimeter;fillColor=#fff2cc;strokeColor=#d6b656;whiteSpace=wrap;html=0;fontSize=12;" vertex="1" parent="1"><mxGeometry x="160" y="190" width="280" height="60" as="geometry"/></mxCell><mxCell id="m4" value="Ввод X" style="shape=parallelogram;perimeter=parallelogramPerimeter;fillColor=#fff2cc;strokeColor=#d6b656;whiteSpace=wrap;html=0;fontSize=12;" vertex="1" parent="1"><mxGeometry x="180" y="290" width="240" height="50" as="geometry"/></mxCell><mxCell id="m5" value="result = Q(X)" style="shape=process;fillColor=#e1d5e7;strokeColor=#9673a6;whiteSpace=wrap;html=0;fontSize=12;" vertex="1" parent="1"><mxGeometry x="180" y="380" width="240" height="50" as="geometry"/></mxCell><mxCell id="m6" value="Вывод: Q(X) = result" style="shape=parallelogram;perimeter=parallelogramPerimeter;fillColor=#fff2cc;strokeColor=#d6b656;whiteSpace=wrap;html=0;fontSize=12;" vertex="1" parent="1"><mxGeometry x="180" y="470" width="240" height="50" as="geometry"/></mxCell><mxCell id="m7" value="result &gt; UCL?" style="rhombus;fillColor=#f8cecc;strokeColor=#b85450;whiteSpace=wrap;html=0;fontSize=12;" vertex="1" parent="1"><mxGeometry x="180" y="560" width="240" height="100" as="geometry"/></mxCell><mxCell id="m8" value="Вывод: «ВНИМАНИЕ! Превышена верхняя контрольная граница UCL = 64.32»" style="shape=parallelogram;perimeter=parallelogramPerimeter;fillColor=#fff2cc;strokeColor=#d6b656;whiteSpace=wrap;html=0;fontSize=12;" vertex="1" parent="1"><mxGeometry x="-60" y="710" width="260" height="80" as="geometry"/></mxCell><mxCell id="m9" value="Вывод: «Значение находится в пределах верхней контрольной границы»" style="shape=parallelogram;perimeter=parallelogramPerimeter;fillColor=#fff2cc;strokeColor=#d6b656;whiteSpace=wrap;html=0;fontSize=12;" vertex="1" parent="1"><mxGeometry x="400" y="710" width="260" height="80" as="geometry"/></mxCell><mxCell id="m10" value="Конец" style="rounded=1;arcSize=50;fillColor=#d5e8d4;strokeColor=#82b366;whiteSpace=wrap;html=0;fontSize=12;" vertex="1" parent="1"><mxGeometry x="180" y="850" width="240" height="40" as="geometry"/></mxCell><mxCell id="me0" value="" style="edgeStyle=orthogonalEdgeStyle;rounded=0;endArrow=classic;html=0;fontSize=12;" edge="1" parent="1" source="m1" target="m2"><mxGeometry relative="1" as="geometry"></mxGeometry></mxCell><mxCell id="me1" value="" style="edgeStyle=orthogonalEdgeStyle;rounded=0;endArrow=classic;html=0;fontSize=12;" edge="1" parent="1" source="m2" target="m3"><mxGeometry relative="1" as="geometry"></mxGeometry></mxCell><mxCell id="me2" value="" style="edgeStyle=orthogonalEdgeStyle;rounded=0;endArrow=classic;html=0;fontSize=12;" edge="1" parent="1" source="m3" target="m4"><mxGeometry relative="1" as="geometry"></mxGeometry></mxCell><mxCell id="me3" value="" style="edgeStyle=orthogonalEdgeStyle;rounded=0;endArrow=classic;html=0;fontSize=12;" edge="1" parent="1" source="m4" target="m5"><mxGeometry relative="1" as="geometry"></mxGeometry></mxCell><mxCell id="me4" value="" style="edgeStyle=orthogonalEdgeStyle;rounded=0;endArrow=classic;html=0;fontSize=12;" edge="1" parent="1" source="m5" target="m6"><mxGeometry relative="1" as="geometry"></mxGeometry></mxCell><mxCell id="me5" value="" style="edgeStyle=orthogonalEdgeStyle;rounded=0;endArrow=classic;html=0;fontSize=12;" edge="1" parent="1" source="m6" target="m7"><mxGeometry relative="1" as="geometry"></mxGeometry></mxCell><mxCell id="me6" value="Да" style="edgeStyle=orthogonalEdgeStyle;rounded=0;endArrow=classic;html=0;fontSize=12;exitX=0;exitY=0.5;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" edge="1" parent="1" source="m7" target="m8"><mxGeometry relative="1" as="geometry"></mxGeometry></mxCell><mxCell id="me7" value="Нет" style="edgeStyle=orthogonalEdgeStyle;rounded=0;endArrow=classic;html=0;fontSize=12;exitX=1;exitY=0.5;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" edge="1" parent="1" source="m7" target="m9"><mxGeometry relative="1" as="geometry"></mxGeometry></mxCell><mxCell id="me8" value="" style="edgeStyle=orthogonalEdgeStyle;rounded=0;endArrow=classic;html=0;fontSize=12;exitX=0.5;exitY=1;exitDx=0;exitDy=0;entryX=0;entryY=0.5;entryDx=0;entryDy=0;" edge="1" parent="1" source="m8" target="m10"><mxGeometry relative="1" as="geometry"></mxGeometry></mxCell><mxCell id="me9" value="" style="edgeStyle=orthogonalEdgeStyle;rounded=0;endArrow=classic;html=0;fontSize=12;exitX=0.5;exitY=1;exitDx=0;exitDy=0;entryX=1;entryY=0.5;entryDx=0;entryDy=0;" edge="1" parent="1" source="m9" target="m10"><mxGeometry relative="1" as="geometry"></mxGeometry></mxCell><mxCell id="q0" value="Функция Q(X)" style="rounded=1;arcSize=50;fillColor=#d5e8d4;strokeColor=#82b366;whiteSpace=wrap;html=0;fontSize=12;" vertex="1" parent="1"><mxGeometry x="1000" y="20" width="200" height="40" as="geometry"/></mxCell><mxCell id="q1" value="X &lt; 25?" style="rhombus;fillColor=#f8cecc;strokeColor=#b85450;whiteSpace=wrap;html=0;fontSize=12;" vertex="1" parent="1"><mxGeometry x="1000" y="100" width="200" height="90" as="geometry"/></mxCell><mxCell id="q2" value="return 3*(X-25)+10" style="rounded=0;fillColor=#dae8fc;strokeColor=#6c8ebf;whiteSpace=wrap;html=0;fontSize=12;" vertex="1" parent="1"><mxGeometry x="720" y="120" width="220" height="50" as="geometry"/></mxCell><mxCell id="q3" value="X &lt;= 45?" style="rhombus;fillColor=#f8cecc;strokeColor=#b85450;whiteSpace=wrap;html=0;fontSize=12;" vertex="1" parent="1"><mxGeometry x="1000" y="240" width="200" height="90" as="geometry"/></mxCell><mxCell id="q4" value="return 2*sqrt(X-35+10)+45" style="rounded=0;fillColor=#dae8fc;strokeColor=#6c8ebf;whiteSpace=wrap;html=0;fontSize=12;" vertex="1" parent="1"><mxGeometry x="720" y="260" width="220" height="50" as="geometry"/></mxCell><mxCell id="q5" value="return (X-45)*(X-45)/4+55" style="rounded=0;fillColor=#dae8fc;strokeColor=#6c8ebf;whiteSpace=wrap;html=0;fontSize=12;" vertex="1" parent="1"><mxGeometry x="980" y="380" width="240" height="50" as="geometry"/></mxCell><mxCell id="q6" value="Конец" style="rounded=1;arcSize=50;fillColor=#d5e8d4;strokeColor=#82b366;whiteSpace=wrap;html=0;fontSize=12;" vertex="1" parent="1"><mxGeometry x="1000" y="480" width="200" height="40" as="geometry"/></mxCell><mxCell id="qe0" value="" style="edgeStyle=orthogonalEdgeStyle;rounded=0;endArrow=classic;html=0;fontSize=12;" edge="1" parent="1" source="q0" target="q1"><mxGeometry relative="1" as="geometry"></mxGeometry></mxCell><mxCell id="qe1" value="Да" style="edgeStyle=orthogonalEdgeStyle;rounded=0;endArrow=classic;html=0;fontSize=12;exitX=0;exitY=0.5;exitDx=0;exitDy=0;entryX=1;entryY=0.5;entryDx=0;entryDy=0;" edge="1" parent="1" source="q1" target="q2"><mxGeometry relative="1" as="geometry"></mxGeometry></mxCell><mxCell id="qe2" value="Нет" style="edgeStyle=orthogonalEdgeStyle;rounded=0;endArrow=classic;html=0;fontSize=12;" edge="1" parent="1" source="q1" target="q3"><mxGeometry relative="1" as="geometry"></mxGeometry></mxCell><mxCell id="qe3" value="Да" style="edgeStyle=orthogonalEdgeStyle;rounded=0;endArrow=classic;html=0;fontSize=12;exitX=0;exitY=0.5;exitDx=0;exitDy=0;entryX=1;entryY=0.5;entryDx=0;entryDy=0;" edge="1" parent="1" source="q3" target="q4"><mxGeometry relative="1" as="geometry"></mxGeometry></mxCell><mxCell id="qe4" value="Нет" style="edgeStyle=orthogonalEdgeStyle;rounded=0;endArrow=classic;html=0;fontSize=12;" edge="1" parent="1" source="q3" target="q5"><mxGeometry relative="1" as="geometry"></mxGeometry></mxCell><mxCell id="qe5" value="" style="edgeStyle=orthogonalEdgeStyle;rounded=0;endArrow=classic;html=0;fontSize=12;exitX=0;exitY=0.5;exitDx=0;exitDy=0;entryX=0;entryY=0.5;entryDx=0;entryDy=0;" edge="1" parent="1" source="q2" target="q6"><mxGeometry relative="1" as="geometry"><Array as="points"><mxPoint x="680" y="145"/><mxPoint x="680" y="500"/></Array></mxGeometry></mxCell><mxCell id="qe6" value="" style="edgeStyle=orthogonalEdgeStyle;rounded=0;endArrow=classic;html=0;fontSize=12;exitX=0;exitY=0.5;exitDx=0;exitDy=0;entryX=0;entryY=0.5;entryDx=0;entryDy=0;" edge="1" parent="1" source="q4" target="q6"><mxGeometry relative="1" as="geometry"><Array as="points"><mxPoint x="680" y="285"/><mxPoint x="680" y="500"/></Array></mxGeometry></mxCell><mxCell id="qe7" value="" style="edgeStyle=orthogonalEdgeStyle;rounded=0;endArrow=classic;html=0;fontSize=12;" edge="1" parent="1" source="q5" target="q6"><mxGeometry relative="1" as="geometry"></mxGeometry></mxCell></root></mxGraphModel></diagram></mxfile>.drawio…]()


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
