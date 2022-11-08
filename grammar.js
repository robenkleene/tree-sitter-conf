module.exports = grammar({
  name: "conf",
  rules: {
    program: $ => repeat(/\w/)
  }
});