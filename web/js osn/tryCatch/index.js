// JSON данные для тестирования
const jsonData = '["яблоко", "банан", "апельсин", "виноград"]';

// Функция для проверки корректности JSON и отображения результата
function processJSON(jsonString) {
    try {
        // Пытаемся распарсить JSON
        const parsedData = JSON.parse(jsonString);
        
        // Проверяем, что это массив
        if (Array.isArray(parsedData)) {
            displayArray(parsedData);
        } else {
            throw new Error('JSON не содержит массив');
        }
    } catch (error) {
        displayError('На странице случилась ошибка: ' + error.message);
    }
}

// Функция для отображения элементов массива в виде списка ul
function displayArray(array) {
    const timerElement = document.getElementById('timer');
    
    // Создаем ul элемент
    const ul = document.createElement('ul');
    
    // Добавляем элементы массива как li элементы
    array.forEach(item => {
        const li = document.createElement('li');
        li.textContent = item;
        ul.appendChild(li);
    });
    
    // Очищаем предыдущий контент и добавляем список
    timerElement.innerHTML = '';
    timerElement.appendChild(ul);
}

// Функция для отображения ошибки
function displayError(message) {
    const timerElement = document.getElementById('timer');
    timerElement.innerHTML = `<p style="color: red;">${message}</p>`;
}

// Обработчик для кнопки "Старт"
document.getElementById('start').addEventListener('click', function() {
    processJSON(jsonData);
});

// Обработчик для поля ввода (для тестирования с пользовательским JSON)
document.getElementById('input').addEventListener('input', function() {
    const userInput = this.value.trim();
    if (userInput) {
        processJSON(userInput);
    }
});

// Функция для создания переполнения localStorage
function testLocalStorageOverflow() {
    try {
        console.log('Начинаем тест переполнения localStorage...');
        
        // Очищаем localStorage перед тестом
        localStorage.clear();
        
        // Создаем большую строку для заполнения localStorage
        const largeString = 'A'.repeat(1024 * 1024); // 1MB строка
        
        let counter = 0;
        while (true) {
            try {
                // Пытаемся сохранить данные в localStorage
                localStorage.setItem(`testData_${counter}`, largeString);
                counter++;
                console.log(`Сохранено ${counter} элементов в localStorage`);
            } catch (error) {
                // Перехватываем ошибку переполнения
                console.log('=== ОШИБКА ПЕРЕПОЛНЕНИЯ LOCALSTORAGE ===');
                console.log('Имя ошибки:', error.name);
                console.log('Текст ошибки:', error.message);
                console.log('Код ошибки:', error.code);
                console.log('Количество сохраненных элементов:', counter);
                console.log('=====================================');
                
                // Выводим ошибку на страницу
                displayError(`Ошибка переполнения localStorage: ${error.name} - ${error.message}`);
                
                throw error; // Перебрасываем ошибку для внешнего catch
            }
        }
    } catch (error) {
        // Обработка всех ошибок localStorage
        if (error.name === 'QuotaExceededError' || error.code === 22) {
            console.log('Успешно перехвачена ошибка переполнения localStorage!');
        } else {
            console.log('Произошла другая ошибка:', error.name, error.message);
        }
    }
}

// Функция для очистки localStorage
function clearLocalStorage() {
    try {
        localStorage.clear();
        console.log('localStorage очищен');
        displayError('localStorage успешно очищен');
    } catch (error) {
        console.log('Ошибка при очистке localStorage:', error.name, error.message);
    }
}

// Функция для извлечения корня с проверкой на отрицательные числа
function safeSquareRoot(number) {
    // Проверяем, является ли аргумент числом
    if (typeof number !== 'number' || isNaN(number)) {
        throw new Error('Аргумент должен быть числом');
    }
    
    // Проверяем на отрицательное число
    if (number < 0) {
        throw new Error(`Нельзя извлечь корень из отрицательного числа: ${number}`);
    }
    
    // Извлекаем корень
    return Math.sqrt(number);
}

// Функция для тестирования извлечения корня
function testSquareRoot() {
    const inputElement = document.getElementById('sqrtInput');
    const number = parseFloat(inputElement.value);
    
    try {
        const result = safeSquareRoot(number);
        console.log(`Корень из ${number} = ${result}`);
        displayError(`Корень из ${number} = ${result}`);
    } catch (error) {
        console.log('=== ОШИБКА ПРИ ИЗВЛЕЧЕНИИ КОРНЯ ===');
        console.log('Имя ошибки:', error.name);
        console.log('Текст ошибки:', error.message);
        console.log('Введенное число:', number);
        console.log('=====================================');
        
        displayError(`Ошибка: ${error.message}`);
    }
}

// Функция для демонстрации разницы между Math.sqrt и нашей функцией
function demonstrateDifference() {
    console.log('=== ДЕМОНСТРАЦИЯ РАЗНИЦЫ ===');
    
    const testNumbers = [4, -4, 0, 9, -9, 16];
    
    testNumbers.forEach(num => {
        console.log(`\nТестируем число: ${num}`);
        
        // Стандартная функция Math.sqrt
        const mathResult = Math.sqrt(num);
        console.log(`Math.sqrt(${num}) = ${mathResult}`);
        
        // Наша функция с проверкой
        try {
            const safeResult = safeSquareRoot(num);
            console.log(`safeSquareRoot(${num}) = ${safeResult}`);
        } catch (error) {
            console.log(`safeSquareRoot(${num}) выбрасывает ошибку: ${error.message}`);
        }
    });
    
    console.log('============================');
}

// Обработчики для кнопок localStorage
document.getElementById('testOverflow').addEventListener('click', function() {
    testLocalStorageOverflow();
});

document.getElementById('clearStorage').addEventListener('click', function() {
    clearLocalStorage();
});

// Обработчики для функций извлечения корня
document.getElementById('testSqrt').addEventListener('click', function() {
    testSquareRoot();
});

document.getElementById('demoDifference').addEventListener('click', function() {
    demonstrateDifference();
});

// Автоматический запуск при загрузке страницы
window.addEventListener('load', function() {
    processJSON(jsonData);
});
