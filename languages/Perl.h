/********************************************************************************\

                   Plugin-based Microbiome Analysis (PluMA)

        Copyright (C) 2016, 2018 Bioinformatics Research Group (BioRG)
                       Florida International University


     Permission is hereby granted, free of charge, to any person obtaining 
          a copy of this software and associated documentation files 
        (the "Software"), to deal in the Software without restriction, 
      including without limitation the rights to use, copy, modify, merge, 
      publish, distribute, sublicense, and/or sell copies of the Software, 
       and to permit persons to whom the Software is furnished to do so, 
                    subject to the following conditions:

    The above copyright notice and this permission notice shall be included 
            in all copies or substantial portions of the Software.

        THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, 
      EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF 
    MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. 
     IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY 
     CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, 
      TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE 
           SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

       For information regarding this software, please contact lead architect
                    Trevor Cickovski at tcickovs@fiu.edu

\*********************************************************************************/

#ifndef PERL_H
#define PERL_H

#include "Language.h"


class Perl : public Language {

   public:
      Perl(std::string language, std::string ext, std::string pp);
      ~Perl();
      void executePlugin(std::string pluginname, std::string inputname, std::string outputname);
      void unload() {} // Empty

   private:
      char** env;
      int argc2;
      char** argv2;    
};



#endif
