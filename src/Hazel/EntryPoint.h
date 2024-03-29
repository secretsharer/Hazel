//
//  EntryPoint.h
//  Hazel
//
//  Created by olivia mendez on 6/11/19.
//

#ifndef EntryPoint_h
#define EntryPoint_h
#pragma once

extern Hazel::Application* Hazel::CreateApplication();

void main(int argc, char** argv)
{
    Hazel::Log::Init
    HZ_CORE_WARN("Initialized Log");
    int a = 5;
    HZ_INFO("Hallo! Var={0}", a);
    auto app = Hazel::CreateApplication();
    app->Run();
    delete app;
};

#endif /* EntryPoint_h */

