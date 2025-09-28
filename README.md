# ⚙ RaspiPico-macroPad
- raspberry pi picoを使ったお手軽「HID マクロパッドKeybord」を作リ方。
- 「promicro」ではなく、「Raspberry pi pico」を使ってみる。

## 🔴前提  
- QMK Firmware & VIA対応にして、KEYマップは簡単自由にVIAでのKEYマップ入れ替えができるようにする。  
- その他
-- PCB基盤作成はしないで手組（ユニバーサル基盤でお手軽作成をする）予定。<br>
-- 最低限家に転がっている部品で作成。<br>

## 🔴用意するもの
- Raspberry Pi Pico<br>
- Switch Key<br> 
- keycap<br>
- ブレッドボード<br>
- タクトスイッチ（ブレッドボード上から動作確認用なくてもよい）
- ジャンプワイヤー（ブレッドボード用）
- 半田一式
- keyswitch ピッチ変換基盤<br>


## 🔴picoとaruduino pro microのスペック

## 🔴用語説明/参考資料


## 🔴作業手順
### 1) QMKのコンパイル環境作成
  ```bash🐚
  sudo apt update
  sudo apt install -y git python3 python3-pip gcc build-essential
  python3 -m pip install --user qmk
  which qmk
    /home/kd/.local/bin/qmk
  qmk setup
  ```
  
- qmkが正常にインストールされたか「qmk doctor」で確認。「QMK is ready to go」確認。
  ![アプリのスクリーンショット](./images/image1.png)  


### 2) コンパイルしてPICOに書込み
### 3) VIAで確認
### 4) ブレッドボードからユニバーサル基盤へ（実用化するための作業）
### 5) ケース作成



