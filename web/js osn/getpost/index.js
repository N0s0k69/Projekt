document.addEventListener('DOMContentLoaded', function() {
    const loginForm = document.getElementById('loginForm');
    const messageDiv = document.getElementById('message');
    const loginBtn = document.getElementById('loginBtn');
    
    loginForm.addEventListener('submit', function(e) {
        e.preventDefault();
        
        const username = document.getElementById('username').value;
        const password = document.getElementById('password').value;
        
        // Показываем индикатор загрузки
        loginBtn.textContent = 'Вход...';
        loginBtn.disabled = true;
        
        // Очищаем предыдущие сообщения
        messageDiv.textContent = '';
        messageDiv.className = 'message';
        
        // Выполняем запрос к API
        fetch('https://dummyjson.com/auth/login', {
            method: 'POST',
            headers: { 
                'Content-Type': 'application/json' 
            },
            body: JSON.stringify({
                username: username,
                password: password,
                expiresInMins: 30 // опционально, по умолчанию 60
            })
        })
        .then(response => {
            if (!response.ok) {
                throw new Error(`Ошибка HTTP: ${response.status}`);
            }
            return response.json();
        })
        .then(data => {
            // Успешная авторизация
            messageDiv.textContent = `Добро пожаловать, ${data.firstName} ${data.lastName}! Авторизация прошла успешно.`;
            messageDiv.className = 'message success';
            
            // Сохраняем токены (в реальном приложении нужно безопасное хранение)
            localStorage.setItem('accessToken', data.accessToken);
            localStorage.setItem('refreshToken', data.refreshToken);
            localStorage.setItem('user', JSON.stringify(data));
            
            // Можно перенаправить пользователя на другую страницу
            // window.location.href = 'dashboard.html';
        })
        .catch(error => {
            // Ошибка авторизации
            if (error.message.includes('400') || error.message.includes('401')) {
                messageDiv.textContent = 'Неверное имя пользователя или пароль. Попробуйте снова.';
            } else {
                messageDiv.textContent = 'Произошла ошибка при подключении к серверу. Попробуйте позже.';
            }
            messageDiv.className = 'message error';
            console.error('Ошибка авторизации:', error);
        })
        .finally(() => {
            // Восстанавливаем кнопку
            loginBtn.textContent = 'Войти';
            loginBtn.disabled = false;
        });
    });
    
    // Проверяем, есть ли сохраненный пользователь (для демонстрации)
    const savedUser = localStorage.getItem('user');
    if (savedUser) {
        const user = JSON.parse(savedUser);
        messageDiv.textContent = `Вы уже вошли как ${user.firstName} ${user.lastName}.`;
        messageDiv.className = 'message success';
    }
});