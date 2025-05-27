let input = document.querySelector('#input1');
let input2 = document.querySelector('#input2');
let p = document.querySelector('p');
let a = document.querySelector('a');

input.addEventListener('keypress', function(event) {
    console.log(event.key);
    console.log(event.code); 
});

input.addEventListener('input', function(event) {
    console.log(event.target.value);
});

input.addEventListener('change', function() {
    p.textContent = input.value;
    input.value = '';
});

a.addEventListener('click', function(event) {
	event.preventDefault();
	a.href += a.href;
});

document.addEventListener('click', function(event) {
    if (event.altKey) {
        event.target.style.color = 'red';
    }
});

a.addEventListener('click', function(event) {
    event.preventDefault();
    let sum = Number(input.value) + Number(input2.value);
    p.textContent = sum;
});




