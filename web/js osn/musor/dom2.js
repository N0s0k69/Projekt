"use strict";

let btn1 = document.querySelector('#bt1');
let div = document.querySelector('#div1');
let p = document.querySelector('p');
let ta = document.querySelector('#ta');
let input = document.querySelector('#input');
let check = document.querySelector('#check');



btn1.addEventListener('click', function() {
    div.style.width = '200px';
    div.style.height = '200px';
    div.style.border = '2px solid black';
    div.style.backgroundColor = 'red';
    div.style.borderTop = '5px solid blue';
    p.style.color = 'white';
    p.style.fontStyle = 'bold';
    p.style.textDecoration = 'line-through';
    input.disabled = true;
    if (check.checked) {
        p.textContent = 'poka';
    }
    else {
        p.textContent = 'privet';
    }

});

ta.addEventListener('blur', function() {
    ta.textContent = p.textContent;
});
input.addEventListener('change', function() {
    p.textContent = input.value;
});

