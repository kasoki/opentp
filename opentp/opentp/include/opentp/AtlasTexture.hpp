// Copyright (c) 2013 Christopher Kaster
//
// This file is part of OpenTP <https://github.com/Kasoki/opentp>.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#ifndef __OpenTP__AtlasTexture__
#define __OpenTP__AtlasTexture__

#include <iostream>
#include <string>
#include <boost/filesystem.hpp>

#include <opentp/Image.hpp>

using namespace std;
using namespace boost::filesystem;

using namespace opentp;

namespace opentp {

    class AtlasTexture {
        
    public:
        AtlasTexture(string, path, int, int);
        ~AtlasTexture();
        
        const string get_name() const;
        const path get_path() const;
        const int get_width() const;
        const int get_height() const;
        const int get_square_pixels() const;
        
        Image *get_image() const;
        
        static bool compare_atlas_texture(AtlasTexture*, AtlasTexture*);
    private:
        const string name;
        const path filepath;
        const int width;
        const int height;
        const int square_pixels;
    };
}

#endif /* defined(__OpenTP__AtlasTexture__) */
