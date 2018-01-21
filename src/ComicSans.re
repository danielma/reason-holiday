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