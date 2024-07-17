#pragma once

#include <direct.h>
#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "..\RecastDemo\SampleInterfaces.h"

void extractScene(BuildContext* context, char* hitmanFolder, char* outputFolder, std::vector<bool>* done);
void generateObj(BuildContext* context, char* blenderPath, char* outputFolder, std::vector<bool>* done);