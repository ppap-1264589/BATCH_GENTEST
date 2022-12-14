Tham khảo thêm cách làm bộ test chuẩn [BATCH_CREATE_TEST](https://github.com/ppap-1264589/BATCH_CREATE_TEST)

# BATCH_GENTEST: Cách Stress Test trong các kì thi Online (và cả Offline)

## Ưu điểm

- Chỉ cần dùng Window, đã tích hợp môi trường MinGW, không cần tải GitBash về

- Tốc độ chạy nhanh hơn GitBash rất nhiều

- Có thể điều hướng dữ liệu được sinh ra để làm bộ test chuẩn

## Nhược điểm

- Sẽ phải nhớ nhiều lệnh hơn để viết được Batch so với viết Bash

- Phải nhớ quy tắc khi làm file generate test: tuyệt đối không được viết `if(fopen)` trong file sinh test

# Hướng dẫn cách dùng (Đối với Window)

## Các chuẩn bị đầu tiên:

1. Tích hợp môi trường MinGW và môi trường Window để máy tính hiểu được lệnh compile bằng g++

Tham khảo tại [đây](https://nam.name.vn/huong-dan-bien-sublime-text-thanh-ide-lap-trinh-c-c.html#ftoc-heading-3)

2. Nên có kiến thức về ngôn ngữ Batch

## Hướng dẫn căn bản

### Ý nghĩa các file

```
correct.cpp: Chứa cách làm đúng (có thể là code trâu)
my.cpp:      Chứa cách làm của bạn (có thể làm sai) để stress test
gen.cpp:     Dùng để sinh test cho bài làm
checker.cpp: Dùng để check xem cách làm của bạn có hợp lệ không
```

```
checker.cpp dùng các hàm nhập:
fin  từ input.inp
fout từ my.out
fans từ correct.out. 
Dựa trên các dữ liệu này, checker sẽ kiểm tra xem bài làm của bạn có đúng không
```

```
run.bat:               Batch của Window do bạn tự viết. Dùng trong trường hợp bạn chỉ cần kiểm tra giữa cách làm của bạn và cách làm đúng có sai lệch nhau không
run_with_checker.bat:  Batch của Window do bạn tự viết. Dùng trong trường hợp bạn cần checker với những bài có thể có nhiều đáp án
compile.bat:           Batch dùng để định nghĩa cấu hình dịch chương trình
```

```
treegenerator.h:   Thư viện sinh test dạng cây (được mình ăn cắp trên Github)
```

### Cách chạy

Sau khi code xong các file `correct.cpp`, `gen.cpp`, `my.cpp`, `checker.cpp`, tuỳ vào dạng bài làm, bạn chỉ cần click đúp chuột vào file `run.bat` hoặc `run_with_checker.bat`

Riêng file `gen.cpp`, TUYỆT ĐỐI không được viết `if(fopen)` hoặc `freopen`

### Kiểm tra kết quả

- File input sẽ nằm trong `input.inp`

- File kết quả của bạn sẽ nằm trong `my.out`

- File kết quả đúng sẽ nằm trong `correct.out`

- Nếu bạn dùng `run_with_checker.bat`, Window sẽ hiện `checker log` ngay trên màn hình

### Ví dụ cụ thể

Các file code trên của mình minh hoạ cho bài toán:

Cho một số `n`, yêu cầu tách `n` thành hai số `a` và `b`, sao cho `a + b = n`
