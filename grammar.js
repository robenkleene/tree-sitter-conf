module.exports = grammar({
  name: "conf",
  rules: {
    config: $ => repeat(/\w/)
  }
});