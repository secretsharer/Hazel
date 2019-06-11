//
//  SandboxApp.cpp
//  Hazel
//
//  Created by olivia mendez on 6/11/19.
//

#include "SandboxApp.hpp"
#include "../src/Hazel.h"

class Sandbox : public Hazel::Application
{
public:
    Sandbox()
    {
        
    }
    ~Sandbox()
    {
        
    }
};

Hazel::Application* Hazel::CreateApplication();
{
    return new Sandbox();
}
