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
    auto app = Hazel::CreateApplication();
    app->Run();
    delete app;
};

#endif /* EntryPoint_h */

