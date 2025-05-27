"use strict"; 

let text = document.querySelector('.text');
let button = document.querySelector('#button');


text.addEventListener('click', function() {
    text.style.color = 'red';
    console.log(text.textContent);
});
button.addEventListener('click', function() {

    console.log(text.textContent);
});
let inputs = document.querySelectorAll('#input');
for (let input of inputs){
    input.addEventListener('input', function() {
        console.log("1");
    });
}

let elems = document.querySelectorAll('p');

for (let elem of elems){
    elem.addEventListener('click', function() {
        this.classList.add('colored');
    });
}

let textarea = document.querySelector('#elem');
textarea.addEventListener('blur', function() {
    alert('blur');
});

let check = document.querySelector('#check');
check.addEventListener('change', function() {
    console.log(check.checked);
});


inputs.addEventListener('input', function() {
    alert(inputs.value);
});









