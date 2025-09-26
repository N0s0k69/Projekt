// Массив для хранения задач
let tasks = [];
let currentFilter = 'all'; // all, active, completed

// DOM элементы
const taskInput = document.getElementById('taskInput');
const addTaskBtn = document.getElementById('addTaskBtn');
const taskList = document.getElementById('taskList');
const totalTasksSpan = document.getElementById('totalTasks');
const completedTasksSpan = document.getElementById('completedTasks');
const remainingTasksSpan = document.getElementById('remainingTasks');
const filterButtons = document.querySelectorAll('.filter-btn');
const clearCompletedBtn = document.getElementById('clearCompleted');
const clearAllBtn = document.getElementById('clearAll');

// Загрузка задач из localStorage при загрузке страницы
function loadTasks() {
    const savedTasks = localStorage.getItem('todoTasks');
    if (savedTasks) {
        tasks = JSON.parse(savedTasks);
    }
    renderTasks();
    updateStats();
}

// Сохранение задач в localStorage
function saveTasks() {
    localStorage.setItem('todoTasks', JSON.stringify(tasks));
}

// Добавление новой задачи
function addTask() {
    const taskText = taskInput.value.trim();
    
    if (taskText === '') {
        alert('Пожалуйста, введите текст задачи!');
        return;
    }
    
    const newTask = {
        id: Date.now(), // Простой ID на основе времени
        text: taskText,
        completed: false,
        createdAt: new Date().toISOString()
    };
    
    tasks.unshift(newTask); // Добавляем в начало списка
    taskInput.value = ''; // Очищаем поле ввода
    
    saveTasks();
    renderTasks();
    updateStats();
}

// Удаление задачи
function deleteTask(taskId) {
    if (confirm('Вы уверены, что хотите удалить эту задачу?')) {
        tasks = tasks.filter(task => task.id !== taskId);
        saveTasks();
        renderTasks();
        updateStats();
    }
}

// Переключение статуса задачи (выполнена/не выполнена)
function toggleTask(taskId) {
    const task = tasks.find(task => task.id === taskId);
    if (task) {
        task.completed = !task.completed;
        saveTasks();
        renderTasks();
        updateStats();
    }
}

// Очистка выполненных задач
function clearCompleted() {
    const completedCount = tasks.filter(task => task.completed).length;
    
    if (completedCount === 0) {
        alert('Нет выполненных задач для удаления!');
        return;
    }
    
    if (confirm(`Удалить ${completedCount} выполненных задач?`)) {
        tasks = tasks.filter(task => !task.completed);
        saveTasks();
        renderTasks();
        updateStats();
    }
}

// Очистка всех задач
function clearAll() {
    if (tasks.length === 0) {
        alert('Список задач пуст!');
        return;
    }
    
    if (confirm('Вы уверены, что хотите удалить ВСЕ задачи?')) {
        tasks = [];
        saveTasks();
        renderTasks();
        updateStats();
    }
}

// Фильтрация задач
function setFilter(filter) {
    currentFilter = filter;
    
    // Обновляем активную кнопку фильтра
    filterButtons.forEach(btn => btn.classList.remove('active'));
    document.getElementById(`show${filter.charAt(0).toUpperCase() + filter.slice(1)}`).classList.add('active');
    
    renderTasks();
}

// Получение отфильтрованных задач
function getFilteredTasks() {
    switch (currentFilter) {
        case 'active':
            return tasks.filter(task => !task.completed);
        case 'completed':
            return tasks.filter(task => task.completed);
        default:
            return tasks;
    }
}

// Отрисовка списка задач
function renderTasks() {
    const filteredTasks = getFilteredTasks();
    
    if (filteredTasks.length === 0) {
        const emptyMessage = getEmptyMessage();
        taskList.innerHTML = `<li class="empty-state">${emptyMessage}</li>`;
        return;
    }
    
    taskList.innerHTML = filteredTasks.map(task => `
        <li class="task-item ${task.completed ? 'completed' : ''}" data-id="${task.id}">
            <input type="checkbox" class="task-checkbox" ${task.completed ? 'checked' : ''} 
                   onchange="toggleTask(${task.id})">
            <span class="task-text">${escapeHtml(task.text)}</span>
            <button class="task-delete" onclick="deleteTask(${task.id})">Удалить</button>
        </li>
    `).join('');
}

// Получение сообщения для пустого состояния
function getEmptyMessage() {
    switch (currentFilter) {
        case 'active':
            return 'Нет активных задач';
        case 'completed':
            return 'Нет выполненных задач';
        default:
            return 'Список дел пуст. Добавьте первую задачу!';
    }
}

// Обновление статистики
function updateStats() {
    const total = tasks.length;
    const completed = tasks.filter(task => task.completed).length;
    const remaining = total - completed;
    
    totalTasksSpan.textContent = `Всего дел: ${total}`;
    completedTasksSpan.textContent = `Выполнено: ${completed}`;
    remainingTasksSpan.textContent = `Осталось: ${remaining}`;
}

// Экранирование HTML для безопасности
function escapeHtml(text) {
    const div = document.createElement('div');
    div.textContent = text;
    return div.innerHTML;
}

// Обработчики событий
addTaskBtn.addEventListener('click', addTask);

taskInput.addEventListener('keypress', function(e) {
    if (e.key === 'Enter') {
        addTask();
    }
});

// Обработчики для фильтров
document.getElementById('showAll').addEventListener('click', () => setFilter('all'));
document.getElementById('showActive').addEventListener('click', () => setFilter('active'));
document.getElementById('showCompleted').addEventListener('click', () => setFilter('completed'));

// Обработчики для кнопок очистки
clearCompletedBtn.addEventListener('click', clearCompleted);
clearAllBtn.addEventListener('click', clearAll);

// Загрузка задач при загрузке страницы
document.addEventListener('DOMContentLoaded', loadTasks);
