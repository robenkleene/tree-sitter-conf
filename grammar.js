module.exports = grammar({
  name: "conf",
  extras: $ => [
    /[ \f\r\t\v\n]/,
    $.comment
  ],
  rules: {
    config: $ => repeat($.setting),
    setting: _ => /[^\n]+/,
    comment: _ => choice(
      seq(token.immediate("#"), /[^\n]*/),
      /\s#[^\n]*/),
  }
});
