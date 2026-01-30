"Halo semua, saya Muhammad Rizky Alghifari dengan NIM 125103075 dengan bapak DONNNY MAULANA, S.KOM, MMSI sebagai dosen mata kuliah Algoritma dan Pemrograman Terstruktur. di video kali ini saya akan mempresentasikan proyek C++ saya yaitu Family Tree. Dalam dunia pemrograman, hubungan orang tua dan anak adalah contoh paling sempurna untuk menerapkan Struktur Data Tree (Pohon). Mengapa? Karena pohon memiliki satu akar (root) yang bisa bercabang menjadi banyak ranting (node), persis seperti silsilah keluarga kita."

  Bedah Arsitektur: Struct dan Pointer
"Mari kita masuk ke bagian kode yang paling krusial, yaitu Struct. Di sini saya mendefinisikan sebuah objek bernama Person. Ada dua elemen kunci di sini:

Data Lapisan Pertama (string name): Untuk menyimpan identitas anggota keluarga.

Data Lapisan Kedua (vector<Person*> children): Inilah keajaibannya. Saya tidak menggunakan array biasa, tapi vector yang berisi Pointer.

Kenapa Pointer? Karena dengan pointer, kita tidak menduplikasi data. Kita hanya mencatat 'alamat memori' di mana data anak tersebut berada. Ini sangat menghemat penggunaan RAM."

  Dinamika Memori: Keyword new
"Jika kalian perhatikan di fungsi main, saya menggunakan keyword new. Contohnya: new Person("EYANG BUYUT"). Dalam C++, new artinya kita memesan tempat di Heap Memory. Berbeda dengan memori biasa yang akan hilang setelah fungsi selesai, memori di Heap akan tetap ada selama program berjalan. Ini memastikan silsilah keluarga yang kita bangun tidak 'terhapus' secara tidak sengaja saat program sedang menyusun cabang-cabang lainnya."

  Logika Relasi: Fungsi link
"Lalu bagaimana cara menghubungkan mereka? Saya membuat fungsi link. Fungsi ini memiliki validasi sederhana: if (parent != nullptr && child != nullptr). Artinya, program akan mengecek dulu: 'Apakah orang tuanya ada? Apakah anaknya ada?'. Jika keduanya valid, maka alamat memori si anak akan dimasukkan ke dalam daftar anak milik orang tuanya. Ini adalah implementasi dari Adjacency List dalam struktur data graf/tree."

  Simulasi Leveling (Hierarki)
"Silsilah ini saya bagi menjadi tiga level utama:
Level Root: Diisi oleh Eyang Buyut sebagai leluhur tertua.
Level Parent: Ada empat cabang utama, termasuk orang tua saya (Habib & Lasminah), Bude Shiju, Bude Nanik, dan Om Sri.
Level Leaf (Daun): Ini adalah generasi cucu. Di sini saya memasukkan diri saya sendiri, saudara saya (Nurul, Syarif, Ruhan), serta sepupu-sepupu dari pihak Bude dan Om. Hubungan ini sangat kompleks, tapi dengan fungsi link, kita bisa menghubungkan puluhan orang hanya dengan satu baris kode per relasi."

  Tantangan Visualisasi Console
"Bagian tersulit dari program berbasis teks (CLI) adalah Visualisasi. Karena console hanya membaca dari kiri ke kanan dan atas ke bawah, saya menggunakan fungsi printSpace untuk mengatur indentasi. Saya menggambar garis manual menggunakan karakter | dan _. Ini memberikan efek visual pohon yang mengalir ke bawah, sehingga memudahkan pengguna untuk melihat siapa sepupu saya dan siapa saudara kandung saya hanya dengan melihat sejauh mana posisi nama mereka di layar."
