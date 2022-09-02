# BATCH_GENTEST: Cách Stress Test trong các kì thi Online (và cả Offline)

## Ưu điểm

- Chỉ cần dùng Window, đã tích hợp môi trường MinGW, không cần tải GitBash về

- Tốc độ chạy nhanh hơn GitBash rất nhiều

- Có thể điều hướng dữ liệu được sinh ra để làm bộ test chuẩn

## Nhược điểm

- Sẽ phải nhớ nhiều lệnh hơn để viết được Batch so với viết Bash

- Phải nhớ quy tắc khi làm file generate test: tuyệt đối không được viết if(fopen) trong file sinh test

# Hướng dẫn cách dùng (Đối với Window)

## Các chuẩn bị đầu tiên:

1. Tích hợp môi trường MinGW và môi trường Window để máy tính hiểu được lệnh compile bằng g++

Tham khảo tại [đây](https://nam.name.vn/huong-dan-bien-sublime-text-thanh-ide-lap-trinh-c-c.html#ftoc-heading-3)

2. Nên có kiến thức về ngôn ngữ Batch


