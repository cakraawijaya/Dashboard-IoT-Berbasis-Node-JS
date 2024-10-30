document.addEventListener('DOMContentLoaded', () => {
    const eventSource = new EventSource('/event');
    eventSource.onmessage = function(event) {
        const data = JSON.parse(event.data);
        document.getElementById('data').textContent = `${data.message}`;
    }

    publishForm.addEventListener('submit', async (e) => {
        e.preventDefault();
        const topic = document.getElementById('topic').value;
        const message = document.getElementById('message').value;

        await fetch('/publish', {
            method: 'POST',
            headers: {'Content-Type': 'application/json'},
            body: JSON.stringify({topic, message})
        });

        document.getElementById('topic').value = '';
        document.getElementById('message').value = '';
    });
});