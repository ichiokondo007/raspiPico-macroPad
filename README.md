# ⚙ RaspiPicoで自作HIDキーボード作成

- 「raspberry pi pico」で、HIDキーボード作成。※マクロパッドKeybord
- 「promicro」ではなく、「Raspberry pi pico」を使ってみる。

## 前提 
  - HIDキーボード用ファームウェアは、「QMK Firmware & VIA対応」のオープンソースを利用。
  - PCB基盤,ケースまでの作成はしないで手組（ユニバーサル基盤で作成予定）<br>
  - 手組みの為PIN直結形式で、且つUSB有線のみ対応とする。（Bluetoothは今後お勉強）
  - caseに関してはアクリル版で作成し、最低限の実運用できる形まで作成予定。（アクリルはレーザカット業者へ依頼）

## 🖥️ 用意するもの
- Raspberry Pi Pico<br>
  ![アプリのスクリーンショット](./images/image3.png)  
-【プロトタイプ作成】
    - ブレッドボード<br>
    - タクトスイッチ（ブレッドボード上から動作確認用なくてもよい）
    - ジャンプワイヤー（ブレッドボード用）  
-【組み立て】
  - Switch Key<br> 
  - keycap<br>
  - ユニバーサル基盤
  - 半田
  - keyswitch ピッチ変換基盤<br>
   ![アプリのスクリーンショット](./images/image2.png)

## 🖥️ 用語説明/参考資料
  - 📌 Raspberry pi picoとは
    - Raspberry Pi Picoは、イギリスのRaspberry Pi社が設計した「RP2040」マイクロコントローラーチップを
      搭載した小型で高速、多機能なマイクロコントローラーボード。
    - スペック
      - 2ビットARM Cortex-M0+ デュアルコア、133MHz。
      - 264KB SRAM、2MBフラッシュ。
      - GPIOのPINは26。
      ※ちなみにArduino「ATmega328P」は、８ビット16MHz,2KB SRAM 32KBフラッシュ、18PIN(Promaicro)
    - 開発環境  
        | 開発言語 | 推奨IDE | 特徴 |
        | :--- | :--- | :--- |
        | **MicroPython / CircuitPython**  | **Thonny (ソニー)** | **Picoで最も推奨されるIDE** 。セットアップが簡単で、初心者向け。MicroPythonのファームウェア書き込みや対話的な実行（REPL）に対応。 |
        | **C / C++ (Pico SDK)** ⚙️ | **Visual Studio Code (VS Code)** | 高度な開発向け。Pico SDKやPlatformIOなどの拡張機能を利用して、高速なC/C++開発を行う。 |
        | **Arduino C++** | **Arduino IDE** | Arduinoユーザー向け。ボードサポートパッケージを追加することで、Arduinoの言語と既存のライブラリを利用可能にする。 |
    
  - 📌 HIDキーボード  
     − Human Interface Device。標準規格に対応したキーボードのこと。現在利用している外付キーボードはほとんどがHIDキーボード。
  

## 作業手順
### 1) QMKのコンパイル環境作成
  ```bash🐚
  $ sudo apt update
  $ sudo apt install -y git python3 python3-pip gcc build-essential
  $ python3 -m pip install --user qmk
  $ which qmk
    /home/kd/.local/bin/qmk
  $ qmk setup
  ```
  
- qmkが正常にインストールされたか「qmk doctor」で確認。「QMK is ready to go」確認。
  ![アプリのスクリーンショット](./images/image1.png)  


### 2) コンパイルしてPICOに書込み
### 3) VIAで確認
### 4) ブレッドボードからユニバーサル基盤へ（実用化するための作業）
### 5) ケース作成



