let input = document.querySelector('#input');
let btn = document.querySelector('#btn');
let list = document.querySelector('#list');
let btni = document.querySelector('#btn1');
let P = document.querySelector('#p1');


//1
// btn.addEventListener('click', function() {
//     let li = document.createElement('li');
//     li.textContent = 'item';
//     list.appendChild(li);
// });

//2
// btn.addEventListener('click', function() {
//     let li = document.createElement('li');
//     li.textContent = 'item';
//     list.appendChild(li);
// });

// list.addEventListener('click', function(event) {
//     if (event.target.tagName === 'LI') {
//         event.target.textContent += '!';
//     }
// });

//3 & 4
// for (let i = 1; i <= 10; i++) {
//     let li = document.createElement('li');
//     li.textContent = i;
//     list.appendChild(li);
// }

// list.addEventListener('click', function(event) {
//     if (event.target.tagName === 'LI') {
//         event.target.remove();
//     }
// });

//5
// let startLi = document.createElement('li');
// startLi.textContent = 'start';
// list.prepend(startLi);

// let finishLi = document.createElement('li');
// finishLi.textContent = 'finish';
// list.appendChild(finishLi);

//6

// btn1.addEventListener('click', function() {
//     // Клонируем инпут
//     let clone = input.cloneNode(true);
//     // Добавляем клон после оригинального инпута
//     input.after(clone);
// });

//7
function isParagraph(element) {
    return element.tagName === 'P';
}

let element = document.querySelector('#p1');
if (isParagraph(element)) {
    console.log('This is a paragraph element');
} else {
    console.log('This is not a paragraph element');
}