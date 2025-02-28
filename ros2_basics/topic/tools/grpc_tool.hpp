// Copyright (c) 2021 Xiaomi Corporation
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.


#ifndef CYBERDOG_AFT__GRPC_TOOL_HPP_
#define CYBERDOG_AFT__GRPC_TOOL_HPP_

#include <vector>
#include <string>
#include <memory>

namespace cyberdog
{

class GrpcTool
{
public:
    GrpcTool();
    ~GrpcTool();

    void PrintUsage(const char * progname);

    void StartTestMotion();

    void StartTestStaticOne();

    void StartTestStaticTwo();

    void SetIP(const std::string & ip_addr);

    void SetWifiName(const std::string & wifi_name);

private:
    std::string wifi_name_;
    std::string ip_addr_;

    bool start_motion_test_{false};
    bool start_static_one_{false};
    bool start_static_two_{false};
};

}  // namespace cyberdog


#endif  // CYBERDOG_AFT__GRPC_TOOL_HPP_
