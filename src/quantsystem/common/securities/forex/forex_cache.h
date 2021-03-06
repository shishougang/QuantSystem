/*
 * \copyright Copyright 2015 All Rights Reserved.
 * \license @{
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * @}
 */

#ifndef QUANTSYSTEM_COMMON_SECURITIES_FOREX_FOREX_CACHE_H_
#define QUANTSYSTEM_COMMON_SECURITIES_FOREX_FOREX_CACHE_H_

#include "quantsystem/common/securities/security_cache.h"
namespace quantsystem {
namespace securities {
namespace forex {
/**
 * Forex specific caching support.
 * @ingroup CommonBaseSecurities
 */
class ForexCache : public SecurityCache {
 public:
  /**
   * Standard constructor.
   */
  ForexCache();

  /**
   * Standard destructor.
   */
  virtual ~ForexCache();
};

}  // namespace forex
}  // namespace securities
}  // namespace quantsystem
#endif  // QUANTSYSTEM_COMMON_SECURITIES_FOREX_FOREX_CACHE_H_
