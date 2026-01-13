# String Splitter (By Index)

This project implements a string manipulation algorithm in C that divides a text into two parts at a specific cutoff point ($N$).

## ⚙️ Logic

1.  **Input:** Reads a source string and a split index $N$.
2.  **Part 1 ($0 \to N$):** Copies characters from the start up to index $N$ into `str1`.
3.  **Part 2 ($N \to End$):** Copies the remaining characters into `str2`.
4.  **Null Termination:** Manually adds `\0` to the end of both new strings to ensure they are valid C-strings.

## 🚀 Example Output

Based on Question 6 from the problem set:

```text
Metni giriniz: kolaygelsin
Bolunecek indeksi (n) giriniz: 5

--- Sonuclar ---
Orijinal Metin: kolaygelsin
Str1 (Ilk 5):   kolay
Str2 (Kalan):   gelsin
