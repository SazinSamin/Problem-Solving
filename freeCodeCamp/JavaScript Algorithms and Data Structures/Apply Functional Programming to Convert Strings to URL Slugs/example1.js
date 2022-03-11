// https://www.freecodecamp.org/learn/javascript-algorithms-and-data-structures/functional-programming/apply-functional-programming-to-convert-strings-to-url-slugs



function urlSlug(title) {
  return title.split(/\W/).filter((ele) => ele.length != 0).join('-').toLowerCase();

}
urlSlug("A Mind Needs Books Like A Sword Needs A Whetstone");
