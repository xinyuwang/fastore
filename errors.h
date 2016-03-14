/**
 * Copyright (c) 2016, David J. Wu, Kevin Lewi
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES WITH
 * REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND
 * FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT,
 * INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM
 * LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR
 * OTHER TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef __ERRORS_H__
#define __ERRORS_H__

enum error_codes {
  ERROR_NONE,

  ERROR_RANDOMNESS,

  ERROR_SRCLEN_INVALID,
  ERROR_DSTLEN_INVALID,

  ERROR_PRF_KEYLEN_INVALID,

  ERROR_NULL_POINTER,
  ERROR_MEMORY_ALLOCATION,

  ERROR_PARAMS_MISMATCH,
  ERROR_PARAMS_INVALID,

  ERROR_SK_NOT_INITIALIZED,
  ERROR_CTXT_NOT_INITIALIZED,
};

#endif /* __ERRORS_H__ */

