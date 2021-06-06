#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Base_Pipe_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Base_Pipe.Base_Pipe_C
// 0x0000 (0x0B08 - 0x0B08)
class ABase_Pipe_C : public AWaterPipeBaseBP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Base_Pipe.Base_Pipe_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Base_Pipe(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
