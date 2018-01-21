[%bs.raw {|require('./app.css')|}];

[@bs.module] external logo : string = "./logo.svg";

module ChristmasTree = {
  let component = ReasonReact.statelessComponent("ChristmasTree");
  let make = _children => {
    ...component,
    render: _self => ReasonReact.stringToElement({js|🎄|js})
  };
};

module ComicSans = {
  let component = ReasonReact.statelessComponent("ComicSans");
  let make = children => {
    ...component,
    render: _self =>
      ReasonReact.createDomElement(
        "div",
        ~props={
          "style": ReactDOMRe.Style.make(~fontFamily={|"Comic Sans MS"|}, ())
        },
        children
      )
  };
};

let component = ReasonReact.statelessComponent("App");

let str = ReasonReact.stringToElement;

/* Day 3, components are functions */
let make = _children => {
  ...component,
  render: _self =>
    <div className="App">
      <h1>
        (str("It's a beautiful"))
        <ChristmasTree />
        (str("in the neighborhood"))
      </h1>
      <ComicSans> (str("attack of the clones")) </ComicSans>
    </div>
};