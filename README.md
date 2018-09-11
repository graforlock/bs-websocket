# bs-websocket

Installation:

`npm i --save bs-websocket`

Example:
```ocaml
open WebsocketClient;

let ws = Websocket.make("ws://localhost:3000/", ~protocols=[| "protocolOne" |]);

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
```

API Documentation: [wiki](https://github.com/graforlock/bs-websocket/wiki)

