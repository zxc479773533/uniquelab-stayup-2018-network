/*
* Unique Lab 2018 Spring network problem
* Part: Websocket Client
* Developed by zxcpyp
*/

// Creat websocket (You should add port here)
var ws = new WebSocket('ws://localhost:XXXX');

// Event when the websocket is opened
ws.onopen = function (evt) {
  console.log('Connected to server.');
}

// Event when client receive a message
ws.onmessage = function (evt) {
  mainReceive(evt.data);
}

// Event when error happens
ws.onerror = function (evt) {
  alert('There is something wrong with your network, please check your server.')
  console.log('Error occured.')
}

// Event when the websocket is closed
ws.onclose = function (evt) {
  alert('Connection closed.');
  console.log('Connection closed.');
}

// Receive data from server
function mainReceive (data) {
  console.log(data);
  data = data.replace(/\n/g, '<br/>');
  data += '<br/>'

  document.getElementById('content_main').innerHTML += data;
  document.getElementById('console_end').scrollIntoView();
}

// Send data to server
function mainSend () {
  var buffer = document.getElementById('inputZone').value;
  if (buffer == '') {
    alert("Please enter message!");
    return;
  }
  buffer += '\r\n';
  console.log(buffer);
  ws.send(buffer);
}

// Clear data
function clearData() {
  document.getElementById('content_main').innerHTML = "";
  document.getElementById('console_end').scrollIntoView();
}