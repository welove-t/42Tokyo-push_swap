---
presentation:
  width: 800
  height: 600
  theme: beige.css
    # "beige.css"
  # "black.css"
  # "blood.css"
  # "league.css"
  # "moon.css"
  # "night.css"
  # "serif.css"
  # "simple.css"
  # "sky.css"
  # "solarized.css"
  # "white.css"
  # "none.css"
---

<!-- slide -->

# push_swap で考える<br>データ構造

<!-- slide -->
## push_swapってどんな課題？

<!-- slide -->
### [push_swapを 理解するためのスライド](https://docs.google.com/presentation/d/1c2PU6ZST7uMwNHl6aAz2WsJ5QFf1J7JJsMkW0VSTXc8/edit#slide=id.p)
<br>
###  [各種命令](https://medium.com/@jamierobertdawson/push-swap-the-least-amount-of-moves-with-two-stacks-d1e76a71789a)
<!-- slide -->

## 今回考えたいデータ構造

1. 配列
2. 単方向リスト
3. 双方向リスト

<!-- slide -->

# 結論

<!-- slide -->

## どれでも実装できます 😎

<!-- slide -->

この課題においては
処理の速さ　＜　命令の少なさ

<!-- slide -->



<!-- slide -->

今回は"回転するスタック領域"における
おそらくベストなデータ構造

<!-- slide -->

処理の速さとは
ここでは"LOOP数の少なさ"と定義させてください


<!-- slide -->

この課題においては
速度　＜　手数
<!-- slide -->

## 1️⃣ 配列

<!-- slide class"left"-->

### 配列の実装イメージ

@import "array1.svg" {width="1000px" height="400px"}

<!-- slide -->

### 配列の実装イメージ

@import "array2.svg" {width="1000px" height="400px"}

<!-- slide -->

## 配列の問題点

<!-- slide -->

push / rotate 操作で
要素を全移動させる必要がある

<!-- slide -->

push操作の場合
@import "array3.svg" {width="1000px" height="400px"}

<!-- slide -->

2️⃣ 単方向リスト

<!-- slide -->

### 単方向リストとは
- 先頭から末尾まで要素が数珠繋ぎに並んでいる
@import "singly1.svg" {width="1000px" height="400px"}


<!-- slide -->

### 実装イメージ
@import "singly2.svg" {width="1000px" height="400px"}

<!-- slide -->

配列と比較して
単方向リストでは値の移動は発生しない

<!-- slide -->

イメージ

<!-- slide -->

単方向リストの問題点

<!-- slide -->

rotate 操作で
毎回最後のノードを取得

<!-- slide -->

イメージ

<!-- slide -->

3️⃣ 双方向リスト

<!-- slide -->

双方向リストとは
概要：
イメージ：

<!-- slide -->

実装イメージ

<!-- slide -->

単方向リスト vs 双方向リスト

<!-- slide -->

問題点

<!-- slide -->
<!-- slide -->
<!-- slide -->
<!-- slide -->

結論
どれでもできます！

<!-- slide -->

この課題においては
速度　＜　手数

<!-- slide -->

ただ"速度"を考えると
push_swap においては双方向リストが良さげ

<!-- slide -->

時間があればコードをお見せします

<!-- slide -->

ありがとうございました 😊
