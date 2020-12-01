#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SimpleBed_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SimpleBed.SimpleBed_C
// 0x0000 (0x0F00 - 0x0F00)
class ASimpleBed_C : public ABedBaseBP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SimpleBed.SimpleBed_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_SimpleBed(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
