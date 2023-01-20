---
presentation:
  width: 800
  height: 600
  theme:begin.css
---

<!-- slide -->

### push_swapで考えるデータ構造
@import "test.svg"

<!-- slide -->
課題の内容

<!-- slide -->
## 今回考えたいデータ構造

1. 配列
2. 単方向リスト
3. 双方向リスト

<!-- slide -->
## 1. 配列
<!-- slide -->
画像
<!-- slide -->
## 配列の問題点
<!-- slide -->
push / rotate操作で
値を全移動させる必要がある
<!-- slide -->
イメージ(pushで)
<!-- slide -->
## 2. 単方向リスト
<!-- slide -->
単方向リストとは
概要：
イメージ：
<!-- slide -->
実装イメージ
<!-- slide -->
配列と比較して
単方向リストでは値の移動は発生しない
<!-- slide -->
イメージ
<!-- slide -->
単方向リストの問題点
<!-- slide -->
rotate操作で
毎回最後のノードを取得
<!-- slide -->
イメージ
<!-- slide -->
3. 双方向リスト
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
