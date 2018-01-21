let component = ReasonReact.statelessComponent("ChristmasTree");

let make = _children => {
  ...component,
  render: _self => ReasonReact.stringToElement({js|🎄|js})
};