//
//  script_exec.h
//  redis3m
//
//  Created by Luca Marturana on 09/03/14.
//  Copyright (c) 2014 Luca Marturana. All rights reserved.
//

#pragma once

#include <redis3m/reply.h>
#include <redis3m/connection.h>
#include <vector>
#include <string>

namespace redis3m {
    namespace patterns
    {
        class script_exec {
        public:
            script_exec(const std::string& script);

            reply exec(connection::ptr_t connection,
                       const std::vector<std::string>& keys=std::vector<std::string>(),
                       const std::vector<std::string>& args=std::vector<std::string>());
        private:
            std::string _script;
            std::string _sha1;
        };
    }
}
