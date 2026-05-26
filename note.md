# CPE

## vector

> <font color="#AC19C9">for 索引迴圈:</font>
> for (int i = 0; i < v.size(); i++) {
> cout << v[i] << " ";
> }
>
> <font color="#AC19C9">range-based for (C++11):</font>
> for (int x : v) {
> cout << x << " ";
> }
>
> <font color="#AC19C9">iterator:</font>
> for (auto it = v.begin(); it != v.end(); it++) {
> cout << *it << " ";
> }

## 其他常見輸出控制

1. **科學記號**
   <pre class="overflow-visible!" data-start="910" data-end="995"><div class="contain-inline-size rounded-2xl relative bg-token-sidebar-surface-primary"><div class="sticky top-9"><div class="absolute end-0 bottom-0 flex h-9 items-center pe-2"><div class="bg-token-bg-elevated-secondary text-token-text-secondary flex items-center gap-4 rounded-sm px-2 font-sans text-xs"></div></div></div><div class="overflow-y-auto p-4" dir="ltr"><code class="whitespace-pre! language-cpp"><span><span>cout << scientific << </span><span>setprecision</span><span>(</span><span>3</span><span>) << </span><span>12345.6789</span><span>;
   </span><span>// 1.235e+04</span><span>
   </span></span></code></div></div></pre>
2. **大寫 E**
   <pre class="overflow-visible!" data-start="1012" data-end="1089"><div class="contain-inline-size rounded-2xl relative bg-token-sidebar-surface-primary"><div class="sticky top-9"><div class="absolute end-0 bottom-0 flex h-9 items-center pe-2"><div class="bg-token-bg-elevated-secondary text-token-text-secondary flex items-center gap-4 rounded-sm px-2 font-sans text-xs"></div></div></div><div class="overflow-y-auto p-4" dir="ltr"><code class="whitespace-pre! language-cpp"><span><span>cout << uppercase << scientific << </span><span>0.000123</span><span>;
   </span><span>// 1.230E-04</span><span>
   </span></span></code></div></div></pre>
3. **顯示小數點 + 末尾 0**
   <pre class="overflow-visible!" data-start="1114" data-end="1197"><div class="contain-inline-size rounded-2xl relative bg-token-sidebar-surface-primary"><div class="sticky top-9"><div class="absolute end-0 bottom-0 flex h-9 items-center pe-2"><div class="bg-token-bg-elevated-secondary text-token-text-secondary flex items-center gap-4 rounded-sm px-2 font-sans text-xs"></div></div></div><div class="overflow-y-auto p-4" dir="ltr"><code class="whitespace-pre! language-cpp"><span><span>cout << fixed << showpoint << </span><span>setprecision</span><span>(</span><span>4</span><span>) << </span><span>3.0</span><span>;
   </span><span>// 3.0000</span><span>
   </span></span></code></div></div></pre>
4. **對齊 / 寬度**
   <pre class="overflow-visible!" data-start="1217" data-end="1386"><div class="contain-inline-size rounded-2xl relative bg-token-sidebar-surface-primary"><div class="sticky top-9"><div class="absolute end-0 bottom-0 flex h-9 items-center pe-2"><div class="bg-token-bg-elevated-secondary text-token-text-secondary flex items-center gap-4 rounded-sm px-2 font-sans text-xs"></div></div></div><div class="overflow-y-auto p-4" dir="ltr"><code class="whitespace-pre! language-cpp"><span><span>cout << </span><span>setw</span><span>(</span><span>10</span><span>) << </span><span>42</span><span>;     </span><span>// "        42" (靠右)</span><span>
   cout << left << </span><span>setw</span><span>(</span><span>10</span><span>) << </span><span>42</span><span>;  </span><span>// "42        "</span><span>
   cout << right << </span><span>setw</span><span>(</span><span>10</span><span>) << </span><span>42</span><span>; </span><span>// "        42"</span><span>
   </span></span></code></div></div></pre>
5. **補零**
   <pre class="overflow-visible!" data-start="1401" data-end="1468"><div class="contain-inline-size rounded-2xl relative bg-token-sidebar-surface-primary"><div class="sticky top-9"><div class="absolute end-0 bottom-0 flex h-9 items-center pe-2"><div class="bg-token-bg-elevated-secondary text-token-text-secondary flex items-center gap-4 rounded-sm px-2 font-sans text-xs"></div></div></div><div class="overflow-y-auto p-4" dir="ltr"><code class="whitespace-pre! language-cpp"><span><span>cout << </span><span>setw</span><span>(</span><span>5</span><span>) << </span><span>setfill</span><span>(</span><span>'0'</span><span>) << </span><span>42</span><span>;
   </span><span>// 00042</span></span></code></div></div></pre>

return to_string(x);

int n1 = stoi(S1, nullptr, 2);
int n2 = stoi(S2, nullptr, 2);

long long n1 = stoll(S1, nullptr, 2);
long long n2 = stoll(S2, nullptr, 2);

# 📌 常用輸出格式操縱子對照表

## 🔢 數字進制


| 操縱子 | 說明           | 範例                       |
| ------ | -------------- | -------------------------- |
| `dec`  | 十進位（預設） | `cout << dec << 47; // 47` |
| `hex`  | 十六進位       | `cout << hex << 47; // 2f` |
| `oct`  | 八進位         | `cout << oct << 47; // 57` |

---

## 🔠 大小寫


| 操縱子        | 說明                 | 範例                                      |
| ------------- | -------------------- | ----------------------------------------- |
| `uppercase`   | 十六進位 A–F 變大寫 | `cout << uppercase << hex << 47; // 2F`   |
| `nouppercase` | 回復小寫（預設）     | `cout << nouppercase << hex << 47; // 2f` |

---

## 💡 顯示進制前綴


| 操縱子       | 說明                      | 範例                                     |
| ------------ | ------------------------- | ---------------------------------------- |
| `showbase`   | 顯示進制前綴（0x, 0, …） | `cout << showbase << hex << 47; // 0x2f` |
| `noshowbase` | 不顯示（預設）            | `cout << noshowbase << hex << 47; // 2f` |

---

## ➕ 正負號顯示


| 操縱子      | 說明           | 範例                             |
| ----------- | -------------- | -------------------------------- |
| `showpos`   | 正數也顯示`+`  | `cout << showpos << 47; // +47`  |
| `noshowpos` | 不顯示（預設） | `cout << noshowpos << 47; // 47` |

---

## 📏 對齊與寬度


| 操縱子        | 說明             | 範例                                                |
| ------------- | ---------------- | --------------------------------------------------- |
| `setw(n)`     | 設定欄寬         | `cout << setw(5) << 47; // "   47"`                 |
| `setfill(ch)` | 填充字元         | `cout << setw(5) << setfill('0') << 47; // "00047"` |
| `left`        | 向左對齊         | `cout << left << setw(5) << 47; // "47   "`         |
| `right`       | 向右對齊（預設） | `cout << right << setw(5) << 47; // "   47"`        |

---

## 🎯 浮點數


| 操縱子            | 說明                                                 | 範例                                                   |
| ----------------- | ---------------------------------------------------- | ------------------------------------------------------ |
| `fixed`           | 固定小數點格式                                       | `cout << fixed << 3.14159; // 3.141590`                |
| `scientific`      | 科學記號                                             | `cout << scientific << 3.14159; // 3.141590e+00`       |
| `setprecision(n)` | 設定顯示位數（小數或總長度，依`fixed`/`scientific`） | `cout << fixed << setprecision(2) << 3.14159; // 3.14` |

## 常見的三角函數對照


| 函式          | 功能         | 輸入範圍        | 回傳範圍      |
| ------------- | ------------ | --------------- | ------------- |
| `sin(x)`      | 正弦         | 任意實數 (弧度) | [-1, 1]       |
| `cos(x)`      | 餘弦         | 任意實數 (弧度) | [-1, 1]       |
| `tan(x)`      | 正切         | 除 π/2+kπ     | (-∞, ∞)     |
| `asin(x)`     | 反正弦       | [-1, 1]         | [-π/2, π/2] |
| `acos(x)`     | 反餘弦       | [-1, 1]         | [0, π]       |
| `atan(x)`     | 反正切       | 任意實數        | (-π/2, π/2) |
| `atan2(y, x)` | 四象限反正切 | (x, y)          | (-π, π]     |





## 用 `static_cast`

<pre class="overflow-visible!" data-start="430" data-end="507"><div class="contain-inline-size rounded-2xl relative bg-token-sidebar-surface-primary"><div class="sticky top-9"><div class="absolute end-0 bottom-0 flex h-9 items-center pe-2"><div class="bg-token-bg-elevated-secondary text-token-text-secondary flex items-center gap-4 rounded-sm px-2 font-sans text-xs"></div></div></div><div class="overflow-y-auto p-4" dir="ltr"><code class="whitespace-pre! language-cpp"><span><span>double</span><span> pi = </span><span>3.14</span><span>;
</span><span>int</span><span> a = </span><span>static_cast</span><span><</span><span>int</span><span>>(pi);  </span><span>// C++-style cast</span></span></code></div></div></pre>




## 1. `getline` + 自訂分隔符

`getline` 可以指定分隔符號，預設是換行 `'\n'`，但你可以改成逗號、分號或任何字元。

<pre class="overflow-visible!" data-start="181" data-end="342"><div class="contain-inline-size rounded-2xl relative bg-token-sidebar-surface-primary"><div class="sticky top-9"><div class="absolute end-0 bottom-0 flex h-9 items-center pe-2"><div class="bg-token-bg-elevated-secondary text-token-text-secondary flex items-center gap-4 rounded-sm px-2 font-sans text-xs"></div></div></div><div class="overflow-y-auto p-4" dir="ltr"><code class="whitespace-pre! language-cpp"><span><span>string line = </span><span>"apple,banana,cherry"</span><span>;
</span><span>stringstream ss</span><span>(line)</span><span>;
string token;

</span><span>while</span><span> (</span><span>getline</span><span>(ss, token, </span><span>','</span><span>)) { </span><span>// 以逗號 , 為分隔</span><span>
    cout << token << </span><span>"\n"</span><span>;
}
</span></span></code></div></div></pre>

輸出：

<pre class="overflow-visible!" data-start="347" data-end="374"><div class="contain-inline-size rounded-2xl relative bg-token-sidebar-surface-primary"><div class="sticky top-9"><div class="absolute end-0 bottom-0 flex h-9 items-center pe-2"><div class="bg-token-bg-elevated-secondary text-token-text-secondary flex items-center gap-4 rounded-sm px-2 font-sans text-xs"></div></div></div><div class="overflow-y-auto p-4" dir="ltr"><code class="whitespace-pre!"><span><span>apple</span><span>
banana
cherry
</span></span></code></div></div></pre>

👉 適合「用單一特殊字元分隔」的情況（CSV、冒號、分號）。




## 2. 手動判斷字元（更靈活）

如果分隔規則很複雜，可以逐字讀取，自己判斷要不要切開。

<pre class="overflow-visible!" data-start="464" data-end="847"><div class="contain-inline-size rounded-2xl relative bg-token-sidebar-surface-primary"><div class="sticky top-9"><div class="absolute end-0 bottom-0 flex h-9 items-center pe-2"><div class="bg-token-bg-elevated-secondary text-token-text-secondary flex items-center gap-4 rounded-sm px-2 font-sans text-xs"></div></div></div><div class="overflow-y-auto p-4" dir="ltr"><code class="whitespace-pre! language-cpp"><span><span>string line = </span><span>"one|two;three four"</span><span>;
</span><span>stringstream ss</span><span>(line)</span><span>;
string token;
</span><span>char</span><span> c;

</span><span>while</span><span> (ss.</span><span>get</span><span>(c)) { </span><span>// 一次讀一個字元</span><span>
    </span><span>if</span><span> (c == </span><span>'|'</span><span> || c == </span><span>';'</span><span> || c == </span><span>' '</span><span>) {
        </span><span>if</span><span> (!token.</span><span>empty</span><span>()) {
            cout << token << </span><span>"\n"</span><span>; </span><span>// 輸出一個完整 token</span><span>
            token.</span><span>clear</span><span>();
        }
    } </span><span>else</span><span> {
        token += c; </span><span>// 累加</span><span>
    }
}
</span><span>if</span><span> (!token.</span><span>empty</span><span>()) cout << token << </span><span>"\n"</span><span>; </span><span>// 最後一個</span><span>
</span></span></code></div></div></pre>

輸出：

<pre class="overflow-visible!" data-start="853" data-end="879"><div class="contain-inline-size rounded-2xl relative bg-token-sidebar-surface-primary"><div class="sticky top-9"><div class="absolute end-0 bottom-0 flex h-9 items-center pe-2"><div class="bg-token-bg-elevated-secondary text-token-text-secondary flex items-center gap-4 rounded-sm px-2 font-sans text-xs"></div></div></div><div class="overflow-y-auto p-4" dir="ltr"><code class="whitespace-pre!"><span><span>one</span><span>
two
three
four
</span></span></code></div></div></pre>

👉 適合「多種分隔符」或「需要條件判斷」的情況。





## 為什麼要用 `stringstream`

因為 `cin` / `>>` 只能逐個讀 token，`getline` 只能整行讀。
但是有時候我們要 **「先整行讀進來 → 再自己拆成多個資料」**，這時候 `stringstream` 就特別好用。
