// API endpoint
const API_URL = 'https://dummyjson.com/products';

// DOM элементы
const loadProductsBtn = document.getElementById('loadProducts');
const clearProductsBtn = document.getElementById('clearProducts');
const loadingIndicator = document.getElementById('loadingIndicator');
const productsContainer = document.getElementById('productsContainer');
const errorMessage = document.getElementById('errorMessage');

// Функция для показа/скрытия индикатора загрузки
function toggleLoading(show) {
    loadingIndicator.style.display = show ? 'block' : 'none';
    loadProductsBtn.disabled = show;
}

// Функция для показа ошибки
function showError(message) {
    errorMessage.textContent = message;
    errorMessage.style.display = 'block';
    setTimeout(() => {
        errorMessage.style.display = 'none';
    }, 5000);
}

// Функция для очистки ошибки
function clearError() {
    errorMessage.style.display = 'none';
}

// Функция для создания звезд рейтинга
function createStars(rating) {
    const fullStars = Math.floor(rating);
    const hasHalfStar = rating % 1 !== 0;
    let starsHTML = '';
    
    // Полные звезды
    for (let i = 0; i < fullStars; i++) {
        starsHTML += '★';
    }
    
    // Половина звезды
    if (hasHalfStar) {
        starsHTML += '☆';
    }
    
    // Пустые звезды
    const emptyStars = 5 - Math.ceil(rating);
    for (let i = 0; i < emptyStars; i++) {
        starsHTML += '☆';
    }
    
    return starsHTML;
}

// Функция для форматирования цены
function formatPrice(price) {
    return `$${price.toFixed(2)}`;
}

// Функция для создания карточки товара
function createProductCard(product) {
    const discountPercentage = Math.round(product.discountPercentage);
    const hasDiscount = discountPercentage > 0;
    
    return `
        <div class="product-card" data-id="${product.id}">
            <img src="${product.thumbnail}" alt="${product.title}" class="product-image" 
                 onerror="this.src='data:image/svg+xml;base64,PHN2ZyB3aWR0aD0iMzAwIiBoZWlnaHQ9IjIwMCIgeG1sbnM9Imh0dHA6Ly93d3cudzMub3JnLzIwMDAvc3ZnIj48cmVjdCB3aWR0aD0iMTAwJSIgaGVpZ2h0PSIxMDAlIiBmaWxsPSIjZjhmOWZhIi8+PHRleHQgeD0iNTAlIiB5PSI1MCUiIGZvbnQtZmFtaWx5PSJBcmlhbCIgZm9udC1zaXplPSIxNCIgZmlsbD0iIzk5OSIgdGV4dC1hbmNob3I9Im1pZGRsZSIgZHk9Ii4zZW0iPk5vIEltYWdlPC90ZXh0Pjwvc3ZnPg=='">
            
            <div class="product-info">
                <div class="product-category">${product.category}</div>
                
                ${hasDiscount ? `<div class="product-badge">-${discountPercentage}%</div>` : ''}
                
                <h3 class="product-title">${product.title}</h3>
                
                <p class="product-description">${product.description}</p>
                
                <div class="product-rating">
                    <span class="stars">${createStars(product.rating)}</span>
                    <span class="rating-text">${product.rating} (${product.reviews} отзывов)</span>
                </div>
                
                <div class="product-price">${formatPrice(product.price)}</div>
                
                <div class="product-stock">В наличии: ${product.stock} шт.</div>
                
                <button class="add-to-cart" onclick="addToCart(${product.id})">
                    Добавить в корзину
                </button>
            </div>
        </div>
    `;
}

// Функция для отображения товаров (как в задании)
function showProducts(data) {
    console.log('Получены данные:', data);
    
    if (!data || !data.products || !Array.isArray(data.products)) {
        showError('Ошибка: неверный формат данных от API');
        return;
    }
    
    const products = data.products;
    
    if (products.length === 0) {
        productsContainer.innerHTML = `
            <div class="empty-state">
                <h3>Товары не найдены</h3>
                <p>Попробуйте загрузить товары еще раз</p>
            </div>
        `;
        return;
    }
    
    // Создаем карточки для всех товаров
    const productsHTML = products.map(product => createProductCard(product)).join('');
    productsContainer.innerHTML = productsHTML;
    
    console.log(`Отображено ${products.length} товаров`);
}

// Функция для загрузки товаров с API
async function loadProducts() {
    try {
        toggleLoading(true);
        clearError();
        
        console.log('Начинаем загрузку товаров...');
        
        const response = await fetch(API_URL);
        
        if (!response.ok) {
            throw new Error(`HTTP error! status: ${response.status}`);
        }
        
        const data = await response.json();
        
        console.log('Данные получены успешно:', data);
        showProducts(data);
        
    } catch (error) {
        console.error('Ошибка при загрузке товаров:', error);
        showError(`Ошибка загрузки: ${error.message}`);
    } finally {
        toggleLoading(false);
    }
}

// Функция для очистки товаров
function clearProducts() {
    productsContainer.innerHTML = `
        <div class="empty-state">
            <h3>Товары не загружены</h3>
            <p>Нажмите "Загрузить товары" для отображения каталога</p>
        </div>
    `;
    clearError();
}

// Функция для добавления товара в корзину (имитация)
function addToCart(productId) {
    const productCard = document.querySelector(`[data-id="${productId}"]`);
    const title = productCard.querySelector('.product-title').textContent;
    
    alert(`Товар "${title}" добавлен в корзину!`);
    
    // Можно добавить логику для работы с корзиной
    console.log(`Товар с ID ${productId} добавлен в корзину`);
}

// Обработчики событий
loadProductsBtn.addEventListener('click', loadProducts);
clearProductsBtn.addEventListener('click', clearProducts);

// Автоматическая загрузка при загрузке страницы
document.addEventListener('DOMContentLoaded', function() {
    console.log('Страница загружена. Готов к работе с API.');
    
    // Показываем пустое состояние
    clearProducts();
});

// Дополнительная функция для демонстрации работы с API
// Можно вызвать из консоли браузера
window.testAPI = async function() {
    console.log('Тестирование API...');
    
    try {
        const response = await fetch(API_URL);
        const data = await response.json();
        
        console.log('API работает корректно!');
        console.log('Общее количество товаров:', data.total);
        console.log('Товаров на странице:', data.products.length);
        console.log('Первый товар:', data.products[0]);
        
        return data;
    } catch (error) {
        console.error('Ошибка API:', error);
        return null;
    }
};
