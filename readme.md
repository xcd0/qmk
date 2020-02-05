# 個人用 qmk キーマップ

helix用に自作しているキーマップの置き場

## 前提

1. qmk_firmwareを一つ上のディレクトリにcloneしておくこと。

2. デフォルトの`keycode.c`のキーマップ記述部分を削除し、代わりに#include "5.h"と書き、  
`5.h`を読み込むようにしておくこと。  
この名前は任意だが変更した場合`makefile`の修正が必要。

3. (おまけ) 拙作のhelixキーボード用キーマップ生成プログラム [helix_show](https://github.com/xcd0/helix_show/) を使用するので、  
releaseから取得しておくこと。  
しなくてもここにバイナリを置いているので問題はない。  
ただアップデート等あれば置き換えること。

## 使い方

1. まず既存のjsonファイルを [QMK configurator](https://config.qmk.fm/#/helix/LAYOUT) に投げてロードする。
2. ブラウザ上で編集する。
3. 編集が終わったらDLする。
4. このリポジトリにキーマップごとにディレクトリを掘って保存する。  
ディレクトリ構成は`qmk_firmware/keyboard/helix/rev2/keymap/`以下に作成するディレクトリと同じにする。  
これがそのままコピーされる。
5. `makefile`をいい感じに書き換える。ただ変数を書き換えるだけ。
6. `make build` とかすると ディレクトリが`../qmk_firmware/keyboard/helix/rev2/keymap/`にコピーされ、  
そのうえでキーマップのビルドが走る。  
その後2回連続で書き込む状態になるので、左右のキーボードをそれぞれ接続して書き込む。
7. `make write` とかするとビルドせず既存のものを書き込む。

