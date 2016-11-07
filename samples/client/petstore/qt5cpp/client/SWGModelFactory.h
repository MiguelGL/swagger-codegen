/**
 * Swagger Petstore
 * This is a sample server Petstore server.  You can find out more about Swagger at [http://swagger.io](http://swagger.io) or on [irc.freenode.net, #swagger](http://swagger.io/irc/).  For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * OpenAPI spec version: 1.0.0
 * Contact: apiteam@swagger.io
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ModelFactory_H_
#define ModelFactory_H_


#include "SWGApiResponse.h"
#include "SWGCategory.h"
#include "SWGOrder.h"
#include "SWGPet.h"
#include "SWGTag.h"
#include "SWGUser.h"

namespace Swagger {
  inline void* create(QString type) {
    if(QString("SWGApiResponse").compare(type) == 0) {
      return new SWGApiResponse();
    }
    if(QString("SWGCategory").compare(type) == 0) {
      return new SWGCategory();
    }
    if(QString("SWGOrder").compare(type) == 0) {
      return new SWGOrder();
    }
    if(QString("SWGPet").compare(type) == 0) {
      return new SWGPet();
    }
    if(QString("SWGTag").compare(type) == 0) {
      return new SWGTag();
    }
    if(QString("SWGUser").compare(type) == 0) {
      return new SWGUser();
    }
    
    return nullptr;
  }

  inline void* create(QString json, QString type) {
    void* val = create(type);
    if(val != nullptr) {
      SWGObject* obj = static_cast<SWGObject*>(val);
      return obj->fromJson(json);
    }
    if(type.startsWith("QString")) {
      return new QString();
    }
    return nullptr;
  }
} /* namespace Swagger */

#endif /* ModelFactory_H_ */
