module.exports = grammar({
  name: "conf",
  extras: $ => [
    $.comment,
    $.comment_inline,
    /[ \f\r\t\v]/,
  ],
  rules: {
    config: $ => repeat($.setting),
    setting: $ => /[^\n]+/,
    comment_inline: $ => /\s#[^\n]*/,
    comment: $ => /#[^\n]*/,
  }
});