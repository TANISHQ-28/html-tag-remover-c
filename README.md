# html-tag-remover-c
Simple C program to remove HTML tags from text.
This project is a basic C program that removes HTML-like tags (e.g., `<h1>`, `<div>`, etc.) from a given string. It leaves behind only the visible content, and also trims any leading and trailing whitespace from the output.

---

## ✅ Features

- Removes all characters between `<` and `>` (simulating HTML tag stripping)
- Cleans up extra spaces at the beginning and end of the content
- In-place parsing using character arrays (no extra memory allocation)
- Written in pure C using only standard libraries 
---

## 📌 Limitations

This parser is designed for **simple and well-formed HTML-like strings**. It **does NOT support**:

- ✅ Nested tags  
  For example: `<div><p>Hello</p></div>` — may not parse as expected  
- ✅ Malformed HTML  
  Missing `<` or `>` symbols may lead to incorrect results  

This tool is best suited for educational purposes or basic string-cleaning use cases — not full HTML parsing.

---

