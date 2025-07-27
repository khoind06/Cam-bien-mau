# Đọc Cảm Biến Màu TCS3200 với Arduino

## 📌 Mục tiêu
Đọc giá trị màu (Đỏ, Xanh Lá, Xanh Dương) từ cảm biến **TCS3200**.

---

## 🎯 Công dụng của cảm biến màu TCS3200
- Cảm biến TCS3200 cho phép phát hiện màu sắc của vật thể dựa trên cường độ ánh sáng phản xạ lại.
- Ứng dụng:
  - Phân loại vật thể theo màu
  - Robot dò màu
  - Hệ thống phân loại rác, kiểm tra chất lượng sản phẩm

---

## ⚙️ Nguyên lý hoạt động

TCS3200 có:
- Một ma trận photodiode với các bộ lọc màu: Đỏ, Xanh lá, Xanh dương
- Bộ chuyển đổi tín hiệu ánh sáng thành **tín hiệu xung (PWM)**
- Dựa trên tần số xung đầu ra khi chọn từng loại màu → tính toán và suy ra màu sắc chiếm ưu thế.

---
