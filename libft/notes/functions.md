## [isalpha](https://github.com/akifdora/42kocaeli_cursus/blob/main/libft/ft_isalpha.c) ##
```c
int	ft_isalpha(int c)
```
> Fonksiyonda c ile gönderilen değişken değerinin alfabetik karakter olup olmadığını sorgular.

## [isdigit](https://github.com/akifdora/42kocaeli_cursus/blob/main/libft/ft_isdigit.c) ##
```c
int	ft_isdigit(int c)
```
> Fonksiyonda c ile gönderilen değişken değerinin rakam olup olmadığını sorgular.

## [isalnum](https://github.com/akifdora/42kocaeli_cursus/blob/main/libft/ft_isalnum.c) ##
```c
int	ft_isalnum(int c)
```
> Fonksiyonda c ile gönderilen değişken değerinin alfabetik karakter ya da rakam olup olmadığını sorgular.

## [isascii](https://github.com/akifdora/42kocaeli_cursus/blob/main/libft/ft_isascii.c) ##
```c
int	ft_isascii(int c)
```
> Fonksiyonda c ile gönderilen değişken değerinin ASCII değerinin olup olmadığını sorgular.

## [isprint](https://github.com/akifdora/42kocaeli_cursus/blob/main/libft/ft_isprint.c) ##
```c
int	ft_isprint(int c)
```
> Fonksiyonda c ile gönderilen değişken değerinin yazdırılabilir olup olmadığını sorgular.

## [strlen](https://github.com/akifdora/42kocaeli_cursus/blob/main/libft/ft_strlen.c) ##
```c
size_t	ft_strlen(const char *s)
```
> Fonksiyonda s ile gönderilen değişkendeki dizinin uzunluğunu hesaplar ve yazdırır.

## [memset](https://github.com/akifdora/42kocaeli_cursus/blob/main/libft/ft_memset.c) ##
```c
void	*ft_memset(void *b, int c, size_t len)
```
> Fonksiyonda c ile gönderilen değişkeni len uzunluğu kadar b karakterine kopyalar.

## [bzero](https://github.com/akifdora/42kocaeli_cursus/blob/main/libft/ft_bzero.c) ##
```c
void	ft_bzero(void *s, size_t n)
```
> Fonksiyonda s ile gönderilen değişken değerini n ile gönderilen sayı kadar siler.

## [memcpy](https://github.com/akifdora/42kocaeli_cursus/blob/main/libft/ft_memcpy.c) ##
```c
void	*ft_memcpy(void *dst, const void *src, size_t n)
```
> Fonksiyon src bellek alanını dst bellek alanına n değeri kadar kopyalar.

## [memmove](https://github.com/akifdora/42kocaeli_cursus/blob/main/libft/ft_memmove.c) ##
```c
void	*ft_memmove(void *dst, const void *src, size_t len)
```
> Fonksiyon src değerini dst değerine len değeri kadar kopyalar fakat [bellek çakışmasından (overlapping)](https://github.com/akifdora/42kocaeli_cursus/blob/main/libft/notes/README.md#bellek-%C3%A7ak%C4%B1%C5%9Fmas%C4%B1-overlapping) kaynaklı memmove() fonksiyonu memcpy() fonksiyonundan daha sağlıklıdır.

## [strlcpy](https://github.com/akifdora/42kocaeli_cursus/blob/main/libft/ft_strlcpy.c) ##
```c
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
```
> Fonksiyon src değerini dst değerine size değeri kadar kopyalar.

## [strlcat](https://github.com/akifdora/42kocaeli_cursus/blob/main/libft/ft_strlcat.c) ##
```c
size_t	ft_strlcat(char	*dst, const char *src, size_t dstsize)
```
> Fonksiyon src değerini dst değerinden sonra size değeri kadar yazdırır ve çıktı olarak son uzunluğu verir.

## [toupper](https://github.com/akifdora/42kocaeli_cursus/blob/main/libft/ft_toupper.c) ##
```c
int	ft_toupper(int c)
```
> Fonksiyonda c ile gönderilen değişken değerini büyük harfe çevirir.

## [tolower](https://github.com/akifdora/42kocaeli_cursus/blob/main/libft/ft_tolower.c) ##
```c
int	ft_tolower(int c)
```
> Fonksiyonda c ile gönderilen değişken değerini küçük harfe çevirir.

## [strchr](https://github.com/akifdora/42kocaeli_cursus/blob/main/libft/ft_strchr.c) ##
```c
char	*ft_strchr(const char *s, int c)
```
> Fonksiyonda s ile gönderilen dizinin içerisinde c ile gönderilen değişken değerini arar, c değerini ilk bulduğu yerden sonrasını ekrana yazdırır.

## [strrchr](https://github.com/akifdora/42kocaeli_cursus/blob/main/libft/ft_strrchr.c) ##
```c
char	*ft_strrchr(const char *s, int c)
```
> Fonksiyonda s ile gönderilen dizinin içerisinde c ile gönderilen değişken değerini arar, c değerini en son bulduğu yerden sonrasını ekrana yazdırır.

## [strncmp](https://github.com/akifdora/42kocaeli_cursus/blob/main/libft/ft_strncmp.c) ##
```c
int	ft_strncmp(const char *s1, const char *s2, size_t size)
```
> Fonksiyonda s1 ve s2 ile gönderilen dizileri size değeri kadar ASCII farkı ile karşılaştırır.

## [memchr](https://github.com/akifdora/42kocaeli_cursus/blob/main/libft/ft_memchr.c) ##
```c
void	*ft_memchr(const void *s, int c, size_t n)
```
> Fonksiyonda s ile gönderilen dizinin içerisinde c ile gönderilen değişken değerini arar, c değerini ilk bulduğu yerden sonrasını ekrana yazdırır.

## [memcmp](https://github.com/akifdora/42kocaeli_cursus/blob/main/libft/ft_memcmp.c) ##
```c
int	ft_memcmp(const void *s1, const void *s2, size_t n)
```
> Fonksiyonda s1 ve s2 ile gönderilen dizilerin bellek alanlarını size değeri kadar karşılaştırır.

## [strnstr](https://github.com/akifdora/42kocaeli_cursus/blob/main/libft/ft_strnstr.c) ##
```c
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
```
> Fonksiyonda needke ile gönderilen değerin haystack değerinde len sayısal değerindeki uzunluğa kadar var olup olmadığını kontrol eder.

## [atoi](https://github.com/akifdora/42kocaeli_cursus/blob/main/libft/ft_atoi.c) ##
```c
int	ft_atoi(const char *str)
```
> Fonksiyonda str ile gönderilen değeri ASCII'den Integer türüne döndürür.
