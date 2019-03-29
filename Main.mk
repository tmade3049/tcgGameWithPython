##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Main
ConfigurationName      :=Debug
WorkspacePath          :=C:/Users/tmoraes/Documents/GameProjects
ProjectPath            :=C:/Users/tmoraes/Documents/GameProjects/Main
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=tmoraes
Date                   :=28/03/2019
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=C:/MinGW/bin/g++.exe
SharedObjectLinkerName :=C:/MinGW/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="Main.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=C:/MinGW/bin/windres.exe
LinkOptions            :=  -lmingw32  -lSDL2main -lSDL2 -lSDL2_image -mwindows
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch)C:/Users/tmoraes/Documents/tai/Cpp_game_devs_SDL_lib/SDL2-2.0.9/i686-w64-mingw32/include/SDL2 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). $(LibraryPathSwitch)C:/Users/tmoraes/Documents/tai/Cpp_game_devs_SDL_lib/SDL2-2.0.9/i686-w64-mingw32/bin $(LibraryPathSwitch)C:/Users/tmoraes/Documents/tai/Cpp_game_devs_SDL_lib/SDL2-2.0.9/i686-w64-mingw32/lib 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/MinGW/bin/ar.exe rcu
CXX      := C:/MinGW/bin/g++.exe
CC       := C:/MinGW/bin/gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/MinGW/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/src_Player.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_GameObject.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_Main.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_Game.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_TextureManager.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "./Debug"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/src_Player.cpp$(ObjectSuffix): src/Player.cpp $(IntermediateDirectory)/src_Player.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/tmoraes/Documents/GameProjects/Main/src/Player.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_Player.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_Player.cpp$(DependSuffix): src/Player.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_Player.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_Player.cpp$(DependSuffix) -MM src/Player.cpp

$(IntermediateDirectory)/src_Player.cpp$(PreprocessSuffix): src/Player.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_Player.cpp$(PreprocessSuffix) src/Player.cpp

$(IntermediateDirectory)/src_GameObject.cpp$(ObjectSuffix): src/GameObject.cpp $(IntermediateDirectory)/src_GameObject.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/tmoraes/Documents/GameProjects/Main/src/GameObject.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_GameObject.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_GameObject.cpp$(DependSuffix): src/GameObject.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_GameObject.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_GameObject.cpp$(DependSuffix) -MM src/GameObject.cpp

$(IntermediateDirectory)/src_GameObject.cpp$(PreprocessSuffix): src/GameObject.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_GameObject.cpp$(PreprocessSuffix) src/GameObject.cpp

$(IntermediateDirectory)/src_Main.cpp$(ObjectSuffix): src/Main.cpp $(IntermediateDirectory)/src_Main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/tmoraes/Documents/GameProjects/Main/src/Main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_Main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_Main.cpp$(DependSuffix): src/Main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_Main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_Main.cpp$(DependSuffix) -MM src/Main.cpp

$(IntermediateDirectory)/src_Main.cpp$(PreprocessSuffix): src/Main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_Main.cpp$(PreprocessSuffix) src/Main.cpp

$(IntermediateDirectory)/src_Game.cpp$(ObjectSuffix): src/Game.cpp $(IntermediateDirectory)/src_Game.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/tmoraes/Documents/GameProjects/Main/src/Game.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_Game.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_Game.cpp$(DependSuffix): src/Game.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_Game.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_Game.cpp$(DependSuffix) -MM src/Game.cpp

$(IntermediateDirectory)/src_Game.cpp$(PreprocessSuffix): src/Game.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_Game.cpp$(PreprocessSuffix) src/Game.cpp

$(IntermediateDirectory)/src_TextureManager.cpp$(ObjectSuffix): src/TextureManager.cpp $(IntermediateDirectory)/src_TextureManager.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/tmoraes/Documents/GameProjects/Main/src/TextureManager.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_TextureManager.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_TextureManager.cpp$(DependSuffix): src/TextureManager.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_TextureManager.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_TextureManager.cpp$(DependSuffix) -MM src/TextureManager.cpp

$(IntermediateDirectory)/src_TextureManager.cpp$(PreprocessSuffix): src/TextureManager.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_TextureManager.cpp$(PreprocessSuffix) src/TextureManager.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


