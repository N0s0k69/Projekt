//1
// function setAttr(id, attrName, attrValue) {
//     let elem = document.getElementById(id);
//     elem.setAttribute(attrName, attrValue);
// }
// setAttr('myElement', 'class', 'newClass');
// setAttr('myImage', 'src', 'new-image.jpg');
// setAttr('myLink', 'href', 'https://example.com');

//2
// function appendText(id, text) {
//     let elem = document.getElementById(id);
//     elem.textContent += text;
// }
// appendText('elem1', ' text1'); 
// appendText('elem2', ' text2');

//3
// function appendText(element, text) {
//     element.textContent += text;
// }

// let myElement = document.getElementById('myElement');
// appendText(myElement, 'Новый текст');

//4
// let paragraphs = document.getElementsByTagName('p');

// for (let i = 0; i < paragraphs.length; i++) {
//     appendText(paragraphs[i], '!');
// }

//5
function appendElem(ulElement, text) {
    let newLi = document.createElement('li');
    newLi.textContent = text;
    ulElement.appendChild(newLi);
}

let myList = document.getElementById('myList');
appendElem(myList, 'Новый элемент списка');
appendElem(myList, 'Еще один элемент');

