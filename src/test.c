/*
 * Demonstration of code folding
 */
window.onload = function() {
  var te = document.getElementById("code");
  var sc = document.getElementById("script");
  te.value = (sc.textContent || sc.innerText || sc.innerHTML).replace(/^\s*/, "");
  sc.innerHTML = "";
  var te_html = document.getElementById("code-html");
  te_html.value = document.documentElement.innerHTML;
  var te_markdown = document.getElementById("code-markdown");
  te_markdown.value = "# Foo\n## Bar\n\nblah blah\n\n## Baz\n\nblah blah\n\n# Quux\n\nblah blah\n"