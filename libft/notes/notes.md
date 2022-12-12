## Veri Türleri ##
| Veri Adı  | Veri Türü |
| ------------- | ------------- |
| char  | Karakter  |
| int | Tamsayı  |
| float | Kayan noktalı sayı  |
| double | Çift duyarlılıklı kayan sayı  |
| void | Değersiz  |

## Veri Türü Değiştiricileri ##
> Sadece char, int ve double veri türlerinin önüne aşağıda gösterilen değiştiricileri koyarak, veri tiplerinin işaret (+/-) durumunu, byte olarak boyutlarını ve sınırlarını değiştirebiliriz.

| Değiştirici  | Kullanıldığı Veri Türü |
| ------------- | ------------- |
| signed  | char, int  |
| unsigned | char, int  |
| long | int, double  |
| short | int  |

## const Nedir? ##
> Bir değişkenin değerinin program boyunca sabit olarak tutulmasını sağlar.

## size_t Nedir? ##
> Diziler dahil olmak üzere herhangi bir nesnenin boyutunu göstermek için kullanılan bir işaretsiz tamsayı türüdür.

## sizeof Nedir? ##
> Belirtilen veri türünün byte olarak ölçülmesini sağlar.
> ```c
> int * pointer = malloc(sizeof(int) * 10);
> ```

## Bellek Çakışması (Overlapping) ##
> Bellek çakışması (overlapping), 
