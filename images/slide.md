---
presentation:
  width: 800
  height: 600
  theme: beige.css
---

<!-- slide -->

## push_swap で考える<br>データ構造

<!-- slide -->

### push_swap <br>ってどんな課題？

<!-- slide -->

### [push_swap を 理解するためのスライド](https://docs.google.com/presentation/d/1c2PU6ZST7uMwNHl6aAz2WsJ5QFf1J7JJsMkW0VSTXc8/edit#slide=id.p)

### [各種命令](https://medium.com/@jamierobertdawson/push-swap-the-least-amount-of-moves-with-two-stacks-d1e76a71789a)

<!-- slide -->

### 今回考えたいデータ構造

1. 配列
2. 単方向リスト
3. 双方向リスト

<!-- slide -->

## 結論

<!-- slide -->

<b>どれでも実装できます 😎</b>

<!-- slide -->

この課題においては
処理の速さ　＜　命令の少なさ

<!-- slide -->

### 影響度

|              | 処理速度 | 命令数 |
| ------------ | -------- | ------ |
| データ構造   | ◎        | △      |
| アルゴリズム | ◯        | ◎      |

<!-- slide -->

高得点を目指す(命令数を少なくする)上で
データ構造はあまり影響しません...

<!-- slide -->

今回は
「処理速度を意識したベストなデータ構造は何か」
という観点で考えたい

<!-- slide -->

### 前提

処理が速い　＝　 LOOP が少ない

<!-- slide -->

## 1️⃣ 配列

<!-- slide class"left"-->

配列の実装イメージ

@import "array1.svg" {width="1000px" height="400px"}

<!-- slide -->

配列の実装イメージ

@import "array2.svg" {width="1000px" height="400px"}

<!-- slide -->

### 配列のマイナス点

<!-- slide -->

push / rotate 操作で
要素を全移動させる必要がある

<!-- slide -->

push 操作の例
@import "array3.svg" {width="1000px" height="400px"}

<!-- slide -->

### 2️⃣ 単方向リスト

<!-- slide -->

### 単方向リストとは

先頭から末尾まで要素が数珠繋ぎに並んでいる
@import "singly1.svg" {width="1000px" height="400px"}

<!-- slide -->

実装イメージ

@import "singly2.svg" {width="1000px" height="480px"}

<!-- slide -->

### 配列と比較して

リストでは値の移動は発生しない

<!-- slide -->

push 前
@import "singly3.svg" {width="1000px" height="400px"}

<!-- slide -->

push 後
@import "singly4.svg" {width="1000px" height="400px"}

<!-- slide -->

### 単方向リストの問題点

<!-- slide -->

rotate 操作で
最後のノード取得するのに next で辿る必要がある

<!-- slide -->

rotate 操作
@import "singly5.svg" {width="1000px" height="400px"}

<!-- slide -->

### 配列とリスト<br>それぞれのマイナスポイント

<!-- slide -->

### 配列

挿入時に全移動が発生
<br>

### リスト

要素へのアクセスが遅い

<!-- slide -->

### 3️⃣ 双方向リスト

<!-- slide -->

### 双方向リストとは

単方向リストに先行ノードのポインタを加えたもの
@import "linear1.svg" {width="1000px" height="400px"}

<!-- slide -->

実装イメージ
@import "linear2.svg" {width="1000px" height="480px"}

<!-- slide -->

rotate 操作
@import "linear3.svg" {width="1000px" height="480px"}

<!-- slide -->

双方向リストだと命令処理で
LOOP が発生しない！

<!-- slide -->

時間があればコードをお見せします

<!-- slide -->

### 結論

"回転するスタック領域"においては双方向リストがベスト

<!-- slide -->

ありがとうございました 😊
