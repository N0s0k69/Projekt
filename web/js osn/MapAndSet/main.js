//1
document.addEventListener('DOMContentLoaded', () => {
    const inputs = document.querySelectorAll('input');
    const inputMap = new Map();
    inputs.forEach((input, index) => {
        inputMap.set(input, index + 1);
        input.addEventListener('click', function() {
            this.value = inputMap.get(this).toString();
        });
    });
});

//2
document.addEventListener('DOMContentLoaded', () => {
    const paragraphs = document.querySelectorAll('p');
    const clickedSet = new Set();
    paragraphs.forEach(p => {
        p.addEventListener('click', function() {
            clickedSet.add(this);
        });
    });
    document.getElementById('add-exclam').addEventListener('click', () => {
        clickedSet.forEach(p => {
            p.textContent += '!';
        });
        clickedSet.clear(); // если нужно сбрасывать выделение после добавления
    });
});

//3 4

let json = '["user1","user2","user3","user4","user5"]';
let users = JSON.parse(json);
users[1] = "alexei"; 
json = JSON.stringify(users); 

// let json = '["user1","user2","user3","user4","user5"]';
// let users = JSON.parse(json);
const userList = document.getElementById('user-list');
users.forEach(user => {
    const li = document.createElement('li');
    li.textContent = user;
    userList.appendChild(li);
});

//5
const cityList = document.querySelectorAll('ul li');
const cities = [];
cityList.forEach(li => cities.push(li.textContent));
const citiesJson = JSON.stringify(cities);
console.log(citiesJson); 