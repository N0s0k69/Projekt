let button = document.getElementById('btn1');
let input = document.getElementById('input');
let list = document.getElementById('list');

//localStorage существующие задачи в элемент списка
function saveList(){
    let items = [];
    Array.from(list.children).forEach(function(li){
        let textInput = li.querySelector('input[type="text"]');
        let checkInput = li.querySelector('input[type="checkbox"]');
        if (textInput) {
            items.push({
                text: textInput.value || '',
                checked: !!(checkInput && checkInput.checked)
            });
        }
    });
    localStorage.setItem('todos', JSON.stringify(items));
}

function renderList(items){
    list.innerHTML = '';
    items.forEach(function(item){
        let li = document.createElement('li');
        li.id = 'li';

        let liInput = document.createElement('input');
        liInput.type = 'text';
        liInput.id = 'liInput';
        liInput.value = item.text || '';

        let checkbox = document.createElement('input');
        checkbox.type = 'checkbox';
        checkbox.id = 'checkbox';
        checkbox.checked = !!item.checked;

        let delBtn = document.createElement('button');
        delBtn.id = 'btnDel';
        delBtn.textContent = 'Удалить';

        li.appendChild(liInput);
        li.appendChild(checkbox);
        li.appendChild(delBtn);
        list.appendChild(li);
    });
}

// первоначальная загрузка из хранилища
try {
    let saved = localStorage.getItem('todos');
    if (saved) {
        let parsed = JSON.parse(saved);
        if (Array.isArray(parsed)) {
            renderList(parsed);
        }
    }
} catch (e) {
}

//удаление
list.addEventListener('click', function(event){
    if (event.target.matches('button')) {
        event.target.parentElement.remove();
        saveList();
    }
});

// авто-сохранение при изменении текста/чекбокса
list.addEventListener('input', function(event){
    if (event.target.matches('input[type="text"]')) {
        saveList();
    }
});

list.addEventListener('change', function(event){
    if (event.target.matches('input[type="checkbox"]')) {
        saveList();
    }
});

//создание
button.addEventListener('click', function(){
    
    let li = document.createElement('li');
    li.id = 'li';
    let liInput = document.createElement('input');
    liInput.type = 'text';
    liInput.id = 'liInput';
    
    let delBtn = document.createElement('button');
    delBtn.id = 'btnDel';
    delBtn.textContent = 'Удалить';
    
    let checkbox = document.createElement('input');
    checkbox.type = 'checkbox';
    checkbox.id = 'checkbox';

    li.appendChild(liInput);
    li.appendChild(checkbox);
    li.appendChild(delBtn);
    list.appendChild(li);

    liInput.value = "" + input.value + " ";
    input.value = '';
    saveList();
});


// zadacha 2
// (function() {
//     // Helpers
//     function getNotes() {
//         try {
//             return JSON.parse(localStorage.getItem('notes2') || '[]');
//         } catch(e) {
//             return [];
//         }
//     }
//     function saveNotes(notes) {
//         localStorage.setItem('notes2', JSON.stringify(notes));
//     }
//     function renderLinks(selectedId) {
//         const linksDiv = document.getElementById('links');
//         linksDiv.innerHTML = '';
//         const notes = getNotes();
//         if (notes.length === 0) {
//             linksDiv.innerHTML = '<div style="color:#888;font-size:13px;">Нет записей</div>';
//             return;
//         }
//         notes.forEach(note => {
//             const a = document.createElement('a');
//             a.href = '#';
//             a.textContent = note.title || 'Без названия';
//             a.style.display = 'block';
//             a.style.padding = '5px 0';
//             a.style.textDecoration = 'none';
//             a.style.color = (note.id === selectedId) ? '#1976d2' : '#333';
//             a.style.fontWeight = (note.id === selectedId) ? 'bold' : 'normal';
//             a.onclick = function(e) {
//                 e.preventDefault();
//                 openNote(note.id);
//             };
//             linksDiv.appendChild(a);
//         });
//     }
//     function openNote(id) {
//         const notes = getNotes();
//         const note = notes.find(n => n.id === id);
//         if (!note) return;
//         currentNoteId = id;
//         document.getElementById('note-editor').value = note.text;
//         renderLinks(id);
//     }
//     function newNote() {
//         const notes = getNotes();
//         const id = Date.now();
//         const note = {id, title: 'Новая запись', text: ''};
//         notes.unshift(note);
//         saveNotes(notes);
//         currentNoteId = id;
//         document.getElementById('note-editor').value = '';
//         renderLinks(id);
//     }
//     function saveCurrentNote() {
//         if (currentNoteId == null) return;
//         const notes = getNotes();
//         const idx = notes.findIndex(n => n.id === currentNoteId);
//         if (idx === -1) return;
//         const text = document.getElementById('note-editor').value;
//         // Title: first non-empty line or "Без названия"
//         let title = text.split('\n').find(line => line.trim().length > 0) || 'Без названия';
//         if (title.length > 30) title = title.slice(0, 30) + '...';
//         notes[idx].text = text;
//         notes[idx].title = title;
//         saveNotes(notes);
//         renderLinks(currentNoteId);
//     }

//     let currentNoteId = null;

//     // UI bindings
//     document.getElementById('new-note').onclick = function() {
//         newNote();
//     };
//     document.getElementById('save-note').onclick = function() {
//         saveCurrentNote();
//     };
//     document.getElementById('note-editor').oninput = function() {
//         // Optionally, auto-save on input
//         // saveCurrentNote();
//     };

//     // Initial load
//     (function init() {
//         const notes = getNotes();
//         if (notes.length > 0) {
//             currentNoteId = notes[0].id;
//             document.getElementById('note-editor').value = notes[0].text;
//         }
//         renderLinks(currentNoteId);
//     })();
// })();