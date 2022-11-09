module.exports = grammar({
  name: "conf",
  rules: {
    config: $ => repeat(choice(
      $.setting,
      $.comment
    )),
    setting: $ => /[^#\n]+/,
    comment: $ => /#[^\n]*/,
  }

});