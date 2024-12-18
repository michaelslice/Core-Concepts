# Cache Invalidation
## Cache Invalidation Strategies
While caching is fantastic, it requires some maintenance to keep the cache coherent with the source of truth (e.g., database). If the data is modified in the database, it should be invalidated in the cache; if not, this can cause inconsistent application behavior.

Solving this problem is known as cache invalidation; there are four main schemes that are used:

## 1. Write-through cache
Under this scheme, data is written into the cache and the corresponding database simultaneously