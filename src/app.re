[%bs.raw {|require('./app.css')|}];

[@bs.module] external logo : string = "./logo.svg";

let component = ReasonReact.statelessComponent("App");

/* Day 2, JSX */
let make = _children => {
  ...component,
  render: _self =>
    <div className="App">
      <h1>
        (
          ReasonReact.stringToElement(
            {js|It's a beautiful 🎄 in the neighborhood|js}
          )
        )
      </h1>
    </div>
};
