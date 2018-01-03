[%bs.raw {|require('./app.css')|}];

[@bs.module] external logo : string = "./logo.svg";

let component = ReasonReact.statelessComponent("App");

let make = _children => {
  ...component,
  render: _self =>
    ReactDOMRe.createElement(
      "div",
      ~props=ReactDOMRe.props(~className="App", ()),
      [|
        ReactDOMRe.createElement(
          "h1",
          ~props=ReactDOMRe.props(),
          [|ReasonReact.stringToElement({js|Hello 🎄|js})|]
        )
      |]
    )
};