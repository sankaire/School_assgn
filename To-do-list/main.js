//enable the button when key is up start typing
document.getElementById('task').onkeyup = () => {
    if(document.getElementById('task').value.length > 0){
        document.getElementById('submit').disabled = false
    }else{
        document.getElementById('submit').disabled = true
    }
}
document.querySelector('form').onsubmit = () => {
    const task = document.getElementById('task').value
    const li = document.createElement('li')
    li.innerHTML = task
    document.getElementById('tasks').append(li)
    document.getElementById('task').value = ''
    document.getElementById('submit').disabled = true

    return false
}

