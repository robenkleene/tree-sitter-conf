module.exports = grammar({
  name: "conf",
  extras: _ => [
    /[ \f\r\t\v\n]/,
  ],
  rules: {
    config: $ => repeat(choice($.comment, $.setting)),
    setting: _ => /[^\n]+/,
    // comment: $ => prec(1, choice(seq(token.immediate("#"), /[^\n]*/),
    //                              /\s#[^\n]*/)),
    comment: _ => prec(10, seq('#', /[^\n]*/)),
  }
});
