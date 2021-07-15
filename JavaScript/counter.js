if(!localStorage.getItem('count')){
    localStorage.setItem('count', 0)
}
const counting = document.querySelector('h2');

function counter(){
    count = localStorage.getItem('count')
    count++;
    counting.innerHTML = count;
    localStorage.setItem('count', count)
}
document.querySelector('h2').innerHTML = localStorage.getItem('count')
document.querySelector('button').onclick = counter;