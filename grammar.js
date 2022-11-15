module.exports = grammar({
  name: "conf",
  extras: $ => [
    $.comment,
    /[ \f\r\t\v\n]/,
  ],
  rules: {
    config: $ => repeat($.setting),
    setting: $ => /[^\n]+/,
    comment: $ => prec(1, choice(seq(token.immediate("#"), /[^\n]*/),
                                 /\s#[^\n]*/)),
  }
});