# Lojistik Yönetim Sistemi
## Graph ve Hash Table Tabanlı Hibrit Veri Yapısı Projesi

---

# Proje Hakkında

Bu projede bir lojistik firmasının şehirler arası bağlantılarını yöneten bir **Graph (Graf)** veri yapısı ile paket bilgilerini hızlı şekilde sorgulayan bir **Hash Table** veri yapısı birlikte kullanılmıştır.

Sistem hibrit veri yapısı mantığıyla geliştirilmiştir.

Projede:

- Graph veri yapısı
- Hash Table veri yapısı
- BFS algoritması
- Zincirleme (Chaining) collision çözümü
- Dinamik bellek yönetimi
- Pointer yapıları

kullanılmıştır.

---

# Öğrenci Bilgisi

Öğrenci Numarası:

1250505007

Numaraya göre kullanılan teknikler:

| Kural | Seçilen Teknik |
|---|---|
| Numara tek | Tip B Hash Function |
| Son rakam 7 | Zincirleme (Chaining) |
| Sondan ikinci rakam 0 | BFS Algoritması |

---

# Proje Amacı

Bu sistemin amacı:

- Paketlerin hızlı şekilde bulunması
- Şehir bağlantılarının yönetilmesi
- Veri erişim performansının artırılması
- Dinamik veri yapılarının uygulanması

olarak belirlenmiştir.

---

# Kullanılan Veri Yapıları

## 1. Hash Table

Hash Table paket bilgilerini hızlı şekilde depolamak ve aramak için kullanılmıştır.

Özellikler:

- Hızlı erişim
- Dinamik yapı
- Collision yönetimi
- Linked List desteği

---

## 2. Graph

Graph veri yapısı şehirler arası bağlantıları temsil etmektedir.

Özellikler:

- Adjacency List yapısı
- BFS gezintisi
- Dinamik bağlantılar
- Şehir rota modeli

---

# Kullanılan Algoritmalar

## Tip B Hash Fonksiyonu

Kullanılan formül:

```text
(id * 7 + 3) % TABLE_SIZE
