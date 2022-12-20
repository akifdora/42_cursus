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

## Neden `malloc(sizeof(char) * (len + 1))` gibi bir kullanım var? ##
> Bu kullanım bize bellekte `len + 1` uzunluğunun char tipinde kadar yer açmamıza olanak sağlar. `sizeof(char)` kullanımının sebebi bazı sistemlerde veri tiplerinin boyutları değişkenlik göstermektedir. Bu değişkenlikte güvenli bir şekilde bellekte yer açabilmemiz için her sisteme uyum sağlayabilecek bir şekilde o veri tipinin boyutunu alabilmek için bu komutu kullanıp uzunluğumuzun bir fazlası ile çarpıyoruz.

## Bellek Çakışması (Overlapping) ##
> Bellek çakışması (overlapping), 
