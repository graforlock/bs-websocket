open WebsocketClient;

let ws = Websocket.make("ws://localhost:3000/");

Websocket.onOpen(ws, _ => {
  Websocket.send(ws, "BOOGEYMAN!");
});

Websocket.onMessage(ws, ev => {
  Js.log({j|Message received: $ev|j}) 
});

Websocket.onError(ws, ev => {
  Js.log(ev);
  Websocket.close(ws);
});

Websocket.onClose(ws, ev => {
  Js.log(ev);
});

