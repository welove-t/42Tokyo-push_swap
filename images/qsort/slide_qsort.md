---
presentation:
  width: 800
  height: 600
  theme: beige.css
---
<!-- slide -->

# push_swapの始め方

<!-- slide -->
本題の前に
軽く自己紹介させてください！

<!-- slide -->
### 自己紹介


<!-- slide -->

## 本題
<!-- slide -->
### 前半
1. 課題の概要
2. 何から始めるのか
3. クリアまでの道筋
### 後半
push_swapで考える分割統治法(再帰)

<!-- slide -->
## 前半

<!-- slide -->
1. 課題の概要
2. 何から始めるのか
3. クリアまでの道筋

→これらをまとめたスライドが既に存在しています

<!-- slide -->
### [push_swap を 理解するためのスライド](https://docs.google.com/presentation/d/1c2PU6ZST7uMwNHl6aAz2WsJ5QFf1J7JJsMkW0VSTXc8/edit#slide=id.p)
created by nafukaさん
<!-- slide -->
## クリアまでの道筋（補足）
<!-- slide -->

1. ３個ケースの補足
2. ６個以下ケースの補足
3. ７個以上ケースについて
4. 入力チェックを忘れずに

<!-- slide -->
## 1. ３個ケースの補足
<!-- slide -->
### 6パターン

1 2 3 -> x (ソート済み)
1 3 2 -> 2 1 3(rra) -> 1 2 3(sa)
2 1 3 -> 1 2 3(sa)
2 3 1 -> 1 2 3(rra)
3 1 2 -> 1 2 3(ra)
3 2 1 -> 2 1 3(ra) -> 1 2 3(sa)

<!-- slide -->
## 2. ６個以下ケースの補足
<!-- slide -->

なぜ6個？
<!-- slide -->

- レビューで局所最適化が求められる
- ３個ケースが流用できる丁度良い数

<!-- slide -->
## 3. ７個以上ケースについて

<!-- slide -->

データ構造とアルゴリズムを選択

<!-- slide -->

データ構造の種類
- 配列
- 単方向リスト
- 双方向リスト(循環・非循環)

<!-- slide -->

push_swapで考えるデータ構造

<!-- slide -->

アルゴリズムの種類
- 基数ソート
- クイックソート(系)
- 独自アルゴリズム(push_swap特化型)

<!-- slide -->
クイックソートを選択する場合は
ソート前に座標圧縮をするのがオススメ！

<!-- slide -->
座標圧縮とは

<!-- slide -->
なぜ必要？
<!-- slide -->
ピボット
<!-- slide -->
分割統治法・クイックソート
→後半でお話しします
<!-- slide -->
## 4. 入力チェックを忘れずに

<!-- slide -->
- 引数が0, 1個
- 整数外（1 a 2）
- int外（2147483648 -2147483649）
- ソート済み（1 2 3）
- 重複している（3 2 2 1）
- etc...

<!-- slide -->

入力チェック漏れが原因で
落とされるケースがほとんどです

（課題をちゃんと読みましょう！）

<!-- slide -->
前半のまとめ

<!-- slide -->
1. 課題の概要
2. 何から始めるのか
3. クリアまでの道筋

→ 「push_swap を 理解するためのスライド」を読もう！

<!-- slide -->
前半は以上となります
ありがとうございました！
<!-- slide -->
<!-- slide -->
## 後半
<!-- slide -->

push_swapで考える分割統治法(再帰)

<!-- slide -->

何を話すのか？

<!-- slide -->

「push_swap を 理解するためのスライド」
クイックソートを深掘り

<!-- slide -->

何故話すのか？

<!-- slide -->

- 自分が躓いたところ
- アルゴリズムのエッセンスが詰まっている

<!-- slide -->

解説始めます！

<!-- slide -->
### 解説の流れ
1. 処理の流れを考えよう！
2. 具体的な値で試してみよう！
3. 機能ごとに整理しよう！
4. 再帰＆パラメーターに注目しよう！
5. （時間があれば）コードを見てみよう！

<!-- slide -->
## 1. 処理の流れを考えよう！

<!-- slide -->
### 簡易フローチャート
「push_swap を 理解するためのスライド」p22
<br/>
@import "qsort-flow.svg" {width="1200px" height="440px"}


<!-- slide -->
 2️⃣ 具体的な値で試してみよう！

<!-- slide -->
分割の条件

- 分割できる：Bが４つ以上の時
- 分割できない：Bが３つ以下の時

<!-- slide -->
まずは分割する
<br>
@import "qsort-div_start.svg" {width="1200px" height="560px"}

<!-- slide -->
１・２・３をソートして確定
<br>
@import "qsort-div123.svg" {width="1200px" height="560px"}

<!-- slide -->
４・５をソートして確定
<br>
@import "qsort-div123.svg" {width="1200px" height="560px"}

<!-- slide -->
６・７をソートして確定
<br>
@import "qsort-div123.svg" {width="1200px" height="560px"}

<!-- slide -->
８・９をソートして確定
<br>
@import "qsort-div123.svg" {width="1200px" height="560px"}


<!-- slide -->

 3️⃣ 機能ごとに整理しよう！
<!-- slide -->
@import "normal.svg" {width="1600px" height="560px"}

<!-- slide -->
ポイントは？

<!-- slide -->
解決方法
1. 再帰関数
2. スタック領域
<!-- slide -->
今回は再帰関数で考えます
<!-- slide -->
ところで皆さん...
<!-- slide -->
再帰関数は苦手ですか？
<!-- slide -->
🙋‍♂️

<!-- slide -->
再帰のおさらい
<!-- slide -->
再帰関数の例
@import "recursive.c"
@import "qsort-recur_standard.svg" {width="600px" height="240px"}

<!-- slide -->
・B -> Aと　 =>を１つの関数におけば

<!-- slide -->
4️⃣ 再帰＆パラメーターに注目しよう！
<!-- slide -->
@import "qsort-recur_btoa.svg" {width="1200px" height="600px"}
<!-- slide -->

5️⃣ （時間があれば）コードを見てみよう！
<!-- slide -->

<!-- slide -->

<!-- slide -->

<!-- slide -->

<!-- slide -->

<!-- slide -->

<!-- slide -->

<!-- slide -->

<!-- slide -->

<!-- slide -->

<!-- slide -->

<!-- slide -->

<!-- slide -->
