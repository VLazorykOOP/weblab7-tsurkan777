<!DOCTYPE html>
<html lang="uk"
      onbeforeprint="alert('Документ готується до друку')"
      onafterprint="alert('Друк завершено')">

<head>
<meta charset="UTF-8">
<title>JS Tasks</title>
<style>
    h1, h2, b, i {
        cursor: pointer;
        user-select: none;
    }
    img {
        width: 120px;
        margin: 10px;
        border: 3px solid black;
        transition: 0.3s;
    }
</style>
</head>

<!-- ========================== 1. PODII DLYA BODY ============================== -->
<body 
    onload="alert('Сторінка завантажена')"
    onunload="console.log('Вихід зі сторінки')"
    onbeforeunload="return 'Точно вийти?'"
    onblur="console.log('Вікно втратило фокус')"
    onfocus="console.log('Вікно активне')"
    onerror="alert('Сталася помилка')"
    ononline="alert('Зʼявився інтернет')"
    onoffline="alert('Режим офлайн')"
    onresize="console.log('Вікно змінено')"
>

<h1 onclick="this.style.color='red'" 
    onmouseover="this.style.fontSize='40px'"
    onmouseout="this.style.fontSize='32px'">
    Заголовок H1 — взаємодія
</h1>

<h2 ondblclick="alert('Подвійний клік по H2!')" 
    onmousedown="this.style.background='yellow'" 
    onmouseup="this.style.background='white'">
    Заголовок H2
</h2>

<b ondragstart="alert('Почали тягнути <b>')" draggable="true">
    Жирний текст (drag me)
</b>

<br><br>

<i onmousemove="console.log('Рухається миша над <i>')" 
   onmousewheel="alert('Колесо миші на <i>')">
    Курсивний текст
</i>

<hr>

<!-- ============================ 3. Run Task (масив images) ============================ -->

<h3>Run Task</h3>

<textarea id="output1" rows="4" cols="50"></textarea><br>

<button onclick="runTask()">Run Task</button>

<script>
function runTask() {
    let images = [
        'photo1.png',
        'icons/pic2.jpg',
        'animals/cat.gif',
        'diagram.svg'
    ];
    document.getElementById("output1").value = images.join("\n");
}
</script>

<hr>

<!-- ======================== 4. Події миші для зображень ======================== -->

<h3>Події миші для картинок</h3>

<img src="https://i.pinimg.com/1200x/d5/06/17/d5061799998806650c92cec4599c4210.jpg"
     onmouseover="this.style.borderColor='red'"
     onmouseout="this.style.borderColor='black'">

<img src="https://i.pinimg.com/1200x/d5/06/17/d5061799998806650c92cec4599c4210.jpg"
     onclick="alert('Клік по картинці!')">

<img src="https://i.pinimg.com/1200x/d5/06/17/d5061799998806650c92cec4599c4210.jpg"
     ondblclick="this.width=200">

<hr>

<!-- ========================== 5. Пошук цілих чисел =========================== -->

<h3>Пошук цілих чисел (RegExp)</h3>

<input id="textInput" type="text" size="50" placeholder="Введи текст з числами">
<button onclick="findIntegers()">Знайти числа</button>

<textarea id="foundNumbers" rows="3" cols="50"></textarea>

<script>
function findIntegers() {
    let text = document.getElementById('textInput').value;
    let regex = /\b-?\d+\b/g;
    let nums = text.match(regex);
    document.getElementById("foundNumbers").value = nums ? nums.join(", ") : "Немає цілих чисел";
}
</script>

<hr>

<!-- ========================= 6. Array Task: видалити нулі ======================= -->

<h3>Array Task</h3>

<textarea id="arrayOut" rows="4" cols="50"></textarea><br>

<button onclick="arrayTask()">Array Task</button>

<script>
function arrayTask() {
    let A = [3, 0, 7, 0, 12, 0, 5, 8];
    let B = A.filter(x => x !== 0);
    document.getElementById("arrayOut").value =
        "A = " + A.join(", ") + "\n" +
        "B = " + B.join(", ");
}
</script>

</body>
</html>
