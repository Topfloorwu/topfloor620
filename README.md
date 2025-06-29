# AI蚊蟲毀滅裝置 提案

## 一、發想背景與動機
夏季蚊蟲肆虐，傳統捕蚊方式單調且無趣。希望結合AI、互動科技，讓防蚊過程變得有趣、具教育意義，提升生活品質。

## 二、使用者需求與互動契機
- 需求：即時偵測蚊蟲、視覺化捕捉過程、提升參與感。
- 互動契機：用戶觸碰感測裝置，網頁即時顯示蚊子被擊落動畫與戰績，增強互動樂趣。

## 三、AI角色定位與設計概念
- AI作為「蚊蟲偵測與戰績統計」助手。
- 結合感測器、Arduino與網頁動畫，打造擬真AI防蚊體驗。

## 四、互動流程設計
1. 用戶連接Arduino裝置。
2. 觸碰感測區，裝置偵測到後傳送訊號。
3. 網頁即時顯示蚊子被擊落動畫，戰績數值累加。
4. 多次互動可累積戰績，提升參與感。

## 五、系統架構與技術整合
- 硬體：Arduino UNO、觸控感測器、LED。
- 軟體：HTML+JavaScript（Web Serial API）、SVG動畫。
- 串接：Arduino傳送數值，網頁即時接收並反映互動。

## 六、情境模擬與使用示例
- 家庭、教室、展覽現場，參與者輪流觸碰感測區，螢幕即時顯示蚊子被擊落與戰績。
- 適合親子互動、科普教育、趣味競賽。

## 七、測試版本設計與實作說明
- 初版完成硬體接線、程式撰寫、網頁動畫設計。
- 測試感測靈敏度、訊號穩定性、動畫同步效果。
- 多次優化互動流程與視覺呈現。

## 八、設計原則與使用者價值
- 直覺互動、即時回饋、視覺吸引力。
- 讓防蚊變得有趣，提升參與與教育價值。

## 九、開發時程規劃
1. 需求分析與構想（1週）
2. 硬體接線與程式撰寫（1週）
3. 網頁動畫設計與串接（1週）
4. 測試與優化（1週）
5. 報告與發表（1週）

## 十、未來展望
- 結合AI影像辨識自動偵測蚊蟲。
- 增加多種互動模式與遊戲化設計。
- 推廣至更多教育與生活場域。

## 十一、參考資料
- Arduino官方文件
- Web Serial API開發文檔
- 互動設計與UI/UX相關書籍/網站
